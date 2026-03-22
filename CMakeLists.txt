cmake_minimum_required(VERSION 3.13)

# This must match your project name
project(TTFFontMod)

# This line is the "magic" that fixes your error
find_package(Geode REQUIRED)

# This tells it where your code is
add_geode_mod(
    ${GEODE_MOD_ID}
    SOURCES main.cpp
)
