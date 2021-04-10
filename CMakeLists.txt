cmake_minimum_required(VERSION 3.17)
project(H3PM)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        H3PM

        H3PM/H3PM.cpp
        H3PM/H3PM.h

        H3PM/Net/GetDatabase.cpp
        H3PM/Net/GetDatabase.h

        H3PM/Common/Commands/Command.h
        H3PM/Common/Commands/Command.cpp

        H3PM/Common/Actions/List.cpp
        H3PM/Common/Actions/List.h

        H3PM/Common/Actions/Action.h
        H3PM/Common/Commands/CommandInterpreter.cpp H3PM/Common/Commands/CommandInterpreter.h)

FIND_PACKAGE(CURL CONFIG REQUIRED)
TARGET_LINK_LIBRARIES(H3PM PRIVATE CURL::libcurl)

