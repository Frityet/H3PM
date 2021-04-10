//
// Created by Frityet on 2021-04-09.
//

#include "CommandInterpreter.h"

#include <utility>
#include <string>
#include <iostream>

H3PM::Common::Commands::CommandInterpreter::CommandInterpreter(const std::string &cmdToInterpret)
{
    for (const auto &cmd : CommandList)
    {
        if (cmdToInterpret == cmd.CommandName)
        {
            Command = cmd;
            return;
        }
    }
    Command = CommandList[0];
}

void H3PM::Common::Commands::CommandInterpreter::ExecuteCommand(std::string cmdArg)
{
    std::cout << Command.Name << std::endl;
    std::cout << cmdArg << std::endl;
}




