//
// Created by Amrit Bhogal on 2021-04-08.
//

#ifndef H3PM_COMMANDPROCESSING_H
#define H3PM_COMMANDPROCESSING_H

#include <string>

#include "command.h"

namespace H3PM
{
    namespace Commands
    {
        command InputToCommand(char *args[]);

        string *GetCommandInfo(const command &cmd);
    }
}

#endif //H3PM_COMMANDPROCESSING_H
