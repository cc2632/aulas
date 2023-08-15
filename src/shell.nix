{ pkgs ? import <nixpkgs> {
    config.allowUnfree = true;
} }:
    pkgs.mkShell {
      nativeBuildInputs = with pkgs.buildPackages; [
        jetbrains.clion
        vscode
        clang-tools
        clang
        gcc
      ];
    }

