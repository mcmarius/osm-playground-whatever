# osm-playground-whatever

If install dir is not fixed, use this command to override install dir (yaml-cpp complained):
```
cmake -B build-osm -S . -DFETCHCONTENT_QUIET=OFF -DCMAKE_INSTALL_PREFIX=$(pwd)/install_dir
```
