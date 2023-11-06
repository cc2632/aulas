FROM alpine:3.17.4

WORKDIR /src

RUN apk add \
    build-base \
    gcc \
    abuild \
    binutils \
    binutils-doc \
    gcc-doc \
    cmake \
    cmake-doc \
    extra-cmake-modules \
    extra-cmake-modules-doc \
    gdb \
    clang \
    neovim
