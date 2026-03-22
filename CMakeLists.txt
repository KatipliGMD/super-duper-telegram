# Force a higher version to prevent the <3.5 error
cmake_minimum_required(VERSION 3.16)

# This stops the "Compatibility with CMake < 3.5 has been removed" crash
cmake_policy(SET CMP0000 NEW) 

project(TTFFontMod)

# This tells the compiler to use the Geode SDK
find_package(Geode REQUIRED)

# This tells it where your code is
add_geode_mod(
    ${GEODE_MOD_ID}
    SOURCES main.cpp
)
