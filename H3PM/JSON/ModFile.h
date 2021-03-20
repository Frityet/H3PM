//
// Created by Frityet on 2021-03-19.
//

#ifndef H3PM_MODFILE_H
#define H3PM_MODFILE_H

#include <string>
#include <vector>
#include "SingularMods.h"

using namespace std;

struct ModFile
{
    string ModID;
    string Name;
    string RawName;
    vector<string> Author;
    string Version;
    string Description;
    string Path;
    string Website;
    string Arguments;
    vector<string> Dependencies;
    string DelInfo;
    vector<string> IncompatableMods;
    string ImgLoc;
    bool HideMod;
    SingularMods SingularModData;
    string FileSizeMB;
    vector<string> DelInfoArray;
    vector<string> InstallArgumentsArray;
};


#endif //H3PM_MODFILE_H
