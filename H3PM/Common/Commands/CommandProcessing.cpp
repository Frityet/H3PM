//
// Created by Frityet on 2021-04-08.
//

#include <iostream>
#include "CommandProcessing.h"

namespace H3PM
{
    namespace Commands
    {


        command InputToCommand(char *args[])
        {
            for (const auto &Command : CommandList)
            {
                if (args[1] == nullptr)
                {
                    std::cout << "NULL ARGUMENT" << std::endl;
                    return CommandList[0];

                }

                if (args[1] == Command.CommandName)
                {
                    return Command;
                }
                else
                {
                    std::cout << args[1] << std::endl;
                    std::cout << Command.CommandName << std::endl;
                    return CommandList[0];
                }
            }
        }

        string *GetCommandInfo(const command &cmd)
        {
            static string infoLines[5];

            infoLines[0] = "Name: " + cmd.Name;
            infoLines[1] = "Command: " + cmd.CommandName;
            infoLines[2] = "Description: " + cmd.Description;

            infoLines[3] = "Arguments: ";

            for (const auto &arg : cmd.Arguments)
            {
                infoLines[3] += arg + " | ";
            }

            infoLines[4] = &"ID: "[cmd.ID];

            return infoLines;
        }

    }
}