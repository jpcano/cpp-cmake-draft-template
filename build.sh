#!/bin/sh

./clean.sh

cmake --preset debug
cmake --build --preset debug --parallel $(nproc --all)

cmake --preset release
cmake --build --preset release --parallel $(nproc --all)