//
// Created by Amrit Bhogal on 2021-03-20.
//

#ifndef H3PM_COMMANDS_H
#define H3PM_COMMANDS_H

#include <string>

using std::string;

// Map brevity codes to commands
static std::map<string, int> commands =
        {
                { "list",    1 },
                { "install", 2 },
                { "remove",  3 },
                { "help",    4 },
                { "init",    5 }
        };

struct Command
{
    string Name;
    string Description;
    int    order;
};

#endif //H3PM_COMMANDS_H
