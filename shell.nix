{ pkgs ? import <nixpkgs> {
    config.allowUnfree = true;
} }:
    pkgs.mkShell {
      nativeBuildInputs = with pkgs.buildPackages; [
        slides
        clang-tools
        clang
        gcc
      ];
    }

