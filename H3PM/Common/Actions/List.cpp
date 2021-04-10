//
// Created by Frityet on 2021-04-09.
//

#include <string>
#include <iostream>
#include "../Commands/Command.h"
#include "List.h"

namespace H3PM
{
    namespace Common
    {
        namespace Actions
        {
            void List::Execute(std::vector<std::string> args)
            {
                std::cout << "List of Commands:" << std::endl;

                for (const auto &cmd : Commands::CommandList)
                {
                    std::cout << cmd.CommandName << std::endl;
                }
            }
            void List::Help(std::vector<std::string> args)
            {
                throw std::bad_exception();
            }
        }
    }
}