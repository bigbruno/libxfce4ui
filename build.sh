#!/bin/bash
set -e

pip install meson ninja

export DEBIAN_FRONTEND=noninteractive
sudo apt-get update
sudo apt-get install -y libglib2.0-dev libgtk-3-dev libxfce4util-dev gobject-introspection libgirepository1.0-dev libxfconf-0-dev

# Create a dummy xdt-gen-visibility script
mkdir -p bin
cat > bin/xdt-gen-visibility <<EOF
#!/bin/sh
touch "\$2"
EOF
chmod +x bin/xdt-gen-visibility
export PATH=$(pwd)/bin:$PATH

# Build the project
rm -rf build
meson setup build
meson compile -C build
