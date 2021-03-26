#include <__bit_reference>
//
// Created by Frityet on 2021-03-20.
//

#ifndef H3PM_COMMANDS_H
#define H3PM_COMMANDS_H


#include <string>
#include <vector>

using std::string;
using std::vector;


typedef struct {string Name; string Description; vector<string> Arguments; int Order;} command;

static command Commands[] =
{
        {"List"   , "Lists all available commands", {"ARG 0"            , "ARG 1"}, 0},
        {"Install", "Installs the specified tool" , {"Tool to install"  , "ARG 1"}, 1},
        {"Remove" , "Removes the specified tool"  , {"Tool to uninstall", "ARG 1"}, 2},
        {"Help"   , "Help?"                       , {"ARG 0"            , "ARG 1"}, 3},
        {"Init"   , "Initialisation"              , {"ARG 0"            , "ARG 1"}, 4}

};

// Map brevity codes to commands
std::map<std::string, int> commands =
        {
                { "list", 1 },
                { "install", 2 },
                { "remove", 3 },
                { "help", 4 },
        };

#endif //H3PM_COMMANDS_H
