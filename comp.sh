#!/bin/bash
set -e

cd "$(dirname "$0")/build"
cmake ..
make -j"$(nproc)"

# Запускать из корня проекта!
cd ..
#sudo nohup ./build/mySite > log.txt 2>&1 &
sudo ./build/mySite
echo "Server started. Check log.txt for details."