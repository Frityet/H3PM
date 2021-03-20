#include <iostream>
#include <map>

// Our headers

#include "JSON/ModListFormat.h"
#include "JSON/DeserialiseDatabase.h"

#include "H3PM.h"

// Map brevity codes to commands
std::map<std::string, int> commands = {
        { "list", 1 },
        { "install", 2 },
        { "remove", 3 },
        { "help", 4 },
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

// Lists out the mods
int listMods(int argc, char* argv[])
{
    string url = "https://raw.githubusercontent.com/WFIOST/H3VR-Mod-Installer-Database/main/Database/customitems.json";
    // TODO

    std::cout << GetRawModList(url) << std::endl;
    return 0; // Indicate success
}