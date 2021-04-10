#include <__bit_reference>
//
// Created by Frityet on 2021-03-20.
//

#ifndef H3PM_COMMANDS_H
#define H3PM_COMMANDS_H


#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;


namespace H3PM
{
    namespace Common
    {
        namespace Commands
        {
            typedef struct
            {
                string Name;
                string CommandName;
                string Description;
                vector<string> Arguments;
                int ID;
            } command;

            static const vector<command> CommandList =
                    {
                            {"List",    "--list",    "Lists all available commands", {"ARG 0",             "ARG 1"}, 0},
                            {"Install", "--install", "Installs the specified tool",  {"Tool to install",   "ARG 1"}, 1},
                            {"Remove",  "--remove",  "Removes the specified tool",   {"Tool to uninstall", "ARG 1"}, 2},
                            {"Help",    "--help",    "Help?",                        {"ARG 0",             "ARG 1"}, 3},
                            {"Init",    "--init",    "Initialisation",               {"ARG 0",             "ARG 1"}, 4}
                    };

            extern command InputToCommand(char *args[]);

            extern string *GetCommandInfo(const command &cmd);
        }
    }
}

#endif //H3PM_COMMANDS_H
