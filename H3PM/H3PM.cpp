// Our headers

#include <iostream>
#include "JSON/DeserialiseDatabase.h"

#include "H3PM.h"
#include "Common/Commands/command.h"
#include "Common/Commands/CommandProcessing.h"


namespace H3PM
{
    int main(int argc, char *argv[])
    {
        std::cout << "H3PM v1" << std::endl;



        command cmd = Commands::InputToCommand(argv);
        string *cmdInfo;
        cmdInfo = Commands::GetCommandInfo(cmd);

        for (int i = 0; i < cmdInfo->size(); ++i)
        {
            std::cout << cmdInfo[i] << std::endl;
        }



        return 0;
    }

}

