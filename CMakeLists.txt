cmake_minimum_required(VERSION 3.13)

# This name can be anything
project(TTFFontMod)

# This tells the compiler to use the Geode SDK
find_package(Geode REQUIRED)

# This is the "Map" for the compiler
# It tells it to take your main.cpp and turn it into the mod
add_geode_mod(
    ${GEODE_MOD_ID}
    SOURCES main.cpp
)
