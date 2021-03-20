#include <iostream>
#include <map>
#include <sstream>
#include <curl/curl.h>

// For my sanity.
using std::cout;
using std::endl;





// JSON Parser & handler

#include "JSON/rapidjson/document.h"

// Our headers

#include "JSON/ModFile.h"
#include "JSON/ModListFormat.h"

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
