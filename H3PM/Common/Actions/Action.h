//
// Created by Frityet on 2021-04-09.
//

#ifndef H3PM_ACTION_H
#define H3PM_ACTION_H

#include <utility>
#include <vector>
#include <string>
#include "../Commands/Command.h"

namespace H3PM
{
    namespace Common
    {
        namespace Actions
        {
            class Action
            {
            public:
                virtual void Help(std::vector<std::string> args) {};                                //Help function, invoked by -h or --help
                virtual void Execute(std::vector<std::string> args) {};                             //Execute function, invoked after the linked command is executed

            private:
                Action() = default;
                ~Action() = default;
            };
        }
    }
}
#endif //H3PM_ACTION_H
