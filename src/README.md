# AdventureGame

A C++ multiplayer adventure game starter project using SFML.

## Features

- Multiple levels
- Animated player sprites
- Visual effects (explosions, transitions)
- Basic multiplayer networking (SFML TCP)
- Easily extensible structure

## Getting Started

### Prerequisites

- [SFML 2.5+](https://www.sfml-dev.org/download.php)
- CMake

### Build

```bash
mkdir build
cd build
cmake ..
make
```

### Run

```bash
./AdventureGame
```

## Extending

- Add new levels in the `assets/levels/` folder.
- Add sprites and effects in `assets/sprites/` and `assets/audio/`.
- Expand classes in `src/` to add gameplay features.

## License

MIT
