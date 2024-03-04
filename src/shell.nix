{ pkgs ? import <nixpkgs> {
    config.allowUnfree = true;
} }:
    pkgs.mkShell {
      nativeBuildInputs = with pkgs.buildPackages; [
        clang-tools
        clang
        gcc
      ];
    }

