#include <iostream>
#include <map>

// For my sanity.
using std::cout;
using std::endl;
using std::string;

// JSON Parser & handler

#include "JSON/rapidjson/document.h"

// Our headers
#include "Net/GetDatabase.h"

// Map brevity codes to commands
std::map<std::string, int> commands =
{
    { "list", 1 },
    { "install", 2 },
    { "remove", 3 },
    { "help", 4 },
};

// Lists out the mods
int listMods(int argc, char* argv[])
{
    // TODO
    string url = "https://raw.githubusercontent.com/WFIOST/H3VR-Mod-Installer-Database/main/Database/codemods.json";
    GetRawModList(url);
    return 0; // Indicate success
};

// Entry point
int main(int argc, char* argv[])
{
    switch (commands[argv[1]])
	{

        // list
        case 1:
            return listMods(argc,argv);
            break;
        // install
        case 2:
            break;
        // remove
        case 3:

            break;
        // help
        case 4:
            break;
    }
}
