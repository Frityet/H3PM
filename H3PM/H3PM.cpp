// Our headers

#include <iostream>
#include "JSON/ModListFormat.h"
#include "JSON/DeserialiseDatabase.h"

#include "H3PM.h"
#include "Common/command.h"

// Entry point
int main(int argc, char* argv[])
{
    std::cout << "H3PM v1" << std::endl;
    command cmd = InputToCommand(argv);

    std::cout << cmd.Name << std::endl;
}


command InputToCommand(char *args[])
{
    for (const auto & Command : Commands)
    {
        if (args[1] == Command.CommandName)
        {
            return Command;
        }
        else
        {
            std::cout << args[1] << std::endl;
            std::cout << Command.CommandName << std::endl;
        }
    }
}