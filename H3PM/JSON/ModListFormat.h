//
// Created by Frityet on 2021-03-19.
//

#ifndef H3PM_MODLISTFORMAT_H
#define H3PM_MODLISTFORMAT_H


#include <vector>
#include <string>
#include "ModFile.h"

using namespace std;

struct ModListFormat
{
    vector<ModFile> ModList;
    string ModListName;
    string ModListID;
};

#endif //H3PM_MODLISTFORMAT_H