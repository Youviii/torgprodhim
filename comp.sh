#!/bin/bash
set -e

cd "$(dirname "$0")/build"
cmake ..
make -j"$(nproc)"

# Запускать из корня проекта!
cd ..
./build/mySite