cmake_minimum_required(VERSION 3.17)
project(H3PM)

set(CMAKE_CXX_STANDARD 14)

add_executable(H3PM
        H3PM/H3PM.cpp
        H3PM/JSON/rapidjson/
        H3PM/Net/GetDatabase.cpp
        H3PM/Net/GetDatabase.h
        H3PM/JSON/Handler.h
        H3PM/Common/Commands/command.h H3PM/Common/Commands/CommandProcessing.cpp H3PM/Common/Commands/CommandProcessing.h)

FIND_PACKAGE(CURL CONFIG REQUIRED)
TARGET_LINK_LIBRARIES(H3PM PRIVATE CURL::libcurl)

