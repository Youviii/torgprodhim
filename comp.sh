#!/bin/bash
set -e

cd "$(dirname "$0")/build"
cmake ..
make -j"$(nproc)"

# Запускать из корня проекта!
cd ..
nohup ./build/mySite > log.txt 2>&1 &