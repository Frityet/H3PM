cmake_minimum_required(VERSION 3.17)
project(H3PM)

set(CMAKE_CXX_STANDARD 14)

add_executable(H3PM
        H3PM/H3PM.cpp H3PM/JSON/ModFile.h H3PM/JSON/SingularMods.h H3PM/JSON/ModListFormat.h H3PM/JSON/json.hpp)
