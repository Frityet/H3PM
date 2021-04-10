//
// Created by Amrit Bhogal on 2021-04-09.
//

#ifndef H3PM_COMMANDINTERPRETER_H
#define H3PM_COMMANDINTERPRETER_H

#include <string>

#include "Command.h"

namespace H3PM
{
    namespace Common
    {
        namespace Commands
        {
            class CommandInterpreter
            {
            public:
                command Command;

                explicit CommandInterpreter(const std::string& cmdToInterpret);

                void ExecuteCommand(std::string arg);

            private:
                std::string CommandArgs;
            };
        }
    }
}

#endif //H3PM_COMMANDINTERPRETER_H
