cmake_minimum_required(VERSION 3.16)

# This matches the project name
project(TTFFontMod)

# This is the standard way to find Geode in GitHub Actions
find_package(Geode REQUIRED)

# This creates the mod using your main.cpp
add_geode_mod(
    ${GEODE_MOD_ID}
    SOURCES main.cpp
)
