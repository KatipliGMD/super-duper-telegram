cmake_minimum_required(VERSION 3.16)

project(TTFFontMod)

# 1. This part tells GitHub to download the Geode SDK automatically
set(CPM_DOWNLOAD_VERSION 0.40.0)
if(NOT EXISTS "${CMAKE_BINARY_DIR}/CPM.cmake")
    message(STATUS "Downloading CPM.cmake...")
    file(DOWNLOAD "https://github.com/cpm-cmake/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake"
         "${CMAKE_BINARY_DIR}/CPM.cmake")
endif()
include("${CMAKE_BINARY_DIR}/CPM.cmake")

# 2. This grabs the actual Geode SDK
CPMAddPackage("gh:geode-sdk/geode#main")

# 3. Now that we have Geode, we can find it
find_package(Geode REQUIRED)

# 4. Create your mod using your main.cpp
add_geode_mod(
    ${GEODE_MOD_ID}
    SOURCES main.cpp
)
