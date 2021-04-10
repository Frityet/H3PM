//
// Created by Frityet on 2021-04-09.
//

#ifndef H3PM_LIST_H
#define H3PM_LIST_H

#include <iostream>
#include <string>
#include <vector>

#include "Action.h"
#include "../Commands/Command.h"

namespace H3PM
{
    namespace Common
    {
        namespace Actions
        {
            class List : virtual Action
            {
            public:
                void Help(std::vector<std::string> args) override;
                void Execute(std::vector<std::string> args) override;
            };
        }
    }
}

#endif //H3PM_LIST_H
