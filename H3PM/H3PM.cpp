// Our headers

#include <iostream>

#include "Common/Commands/Command.h"




int main(int argc, char *argv[])
{
    std::cout << "H3PM v1" << std::endl;

    H3PM::Commands::command cmd = H3PM::Commands::InputToCommand(argv);
    string *cmdInfo;
    cmdInfo = H3PM::Commands::GetCommandInfo(cmd);

    for (int i = 0; i < cmdInfo->size(); ++i)
    {
        std::cout << cmdInfo[i] << std::endl;
    }


    return 0;
}

