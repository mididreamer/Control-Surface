#!/usr/bin/env bash

set -e

export PATH="$HOME/.local/bin:$PATH"
cd "$TRAVIS_BUILD_DIR/build"
cmake .. -DFAST_COMPILE=ON
make -j4
make test
make arduino_travis
