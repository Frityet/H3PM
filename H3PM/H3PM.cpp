// Our headers

#include <iostream>

#include "H3PM.h"
#include "Common/Commands/Command.h"


namespace H3PM
{
    int main(int argc, char *argv[])
    {
        std::cout << "H3PM v1" << std::endl;

        Commands::command cmd = Commands::InputToCommand(argv);
        string *cmdInfo;
        cmdInfo = Commands::GetCommandInfo(cmd);

        for (int i = 0; i < cmdInfo->size(); ++i)
        {
            std::cout << cmdInfo[i] << std::endl;
        }



        return 0;
    }

}

