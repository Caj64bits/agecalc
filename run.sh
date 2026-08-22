#!/usr/bin/env bash
set -e

if [[ ! -f build/build.ninja ]]; then
  CC=clang meson setup build
fi

meson compile -C build
./build/agecalc
