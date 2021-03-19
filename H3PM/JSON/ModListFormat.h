//
// Created by Frityet on 2021-03-19.
//

#ifndef H3PM_MODLISTFORMAT_H
#define H3PM_MODLISTFORMAT_H

#endif //H3PM_MODLISTFORMAT_H

#include <vector>
#include <string>
#include "ModFile.h"

using namespace std;

class ModListFormat
{
    public:
        vector<ModFile> ModList;
        string ModListName;
        string ModListID
};
