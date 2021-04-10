#include <iostream>
#include <vector>

#include "Common/Commands/Command.h"
#include "Common/Commands/CommandInterpreter.h"
#include "H3PM.h"

//using namespace H3PM;


int main(int argc, char *argv[])
{
    std::cout << "H3PM v1" << std::endl;
    H3PM::Common::Commands::CommandInterpreter interpreter(argv[1]);

    interpreter.ExecuteCommand("TEST");
    return 0;
}

