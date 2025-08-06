#!/bin/bash
set -e

export PATH=/app/bin:$PATH

pip install meson ninja

export DEBIAN_FRONTEND=noninteractive
sudo apt-get update
sudo apt-get install -y libglib2.0-dev libgtk-3-dev libxfce4util-dev gobject-introspection libgirepository1.0-dev libxfconf-0-dev

# Build the project
rm -rf build
meson setup build
meson compile -C build
