{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs";
    flake-utils.url = "github:numtide/flake-utils";
    zsa-firmware = { flake = false; url = "git+https://github.com/zsa/qmk_firmware.git?submodules=1&branch=firmware22"; };
  };

  outputs = { self, nixpkgs, flake-utils, ... }@inputs:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
        buildInputs = with pkgs; [
          qmk
          gnumake
          patchelf
        ];
      in
      {
        packages.default = pkgs.stdenv.mkDerivation {
          name = "qmk-firmware";
          inherit buildInputs;
          src = inputs.zsa-firmware;

          SKIP_GIT = "true";

          buildPhase = ''
            tmpdir=$(mktemp -d)
            cp -R --no-preserve=mode,ownership $src $tmpdir/src
            cp -R --no-preserve=mode,ownership ${./colemakdh35} $tmpdir/src/keyboards/moonlander/keymaps/colemakdh35
            cd $tmpdir/src

            chmod +x util/list_keyboards.sh

            make moonlander:colemakdh35
          '';

          installPhase = ''
            mkdir -p $out
            cp -R .build/*.bin $out
          '';
        };

        devShell = nixpkgs.legacyPackages.${system}.mkShell {
          inherit buildInputs;
        };
      });
}
