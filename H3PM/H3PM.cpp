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
#include "JSON/SingularMods.h"

// Map brevity codes to commands
std::map<std::string, int> commands = {
    { "list", 1 },
    { "install", 2 },
    { "remove", 3 },
    { "help", 4 },
};

// Lists out the mods
const char json[] = " { \"hello\" : \"world\", \"t\" : true , \"f\" : false, \"n\": null, \"i\":123, \"pi\": 3.1416, \"a\":[1, 2, 3, 4] } ";
int listMods(int argc, char* argv[]) {
    using namespace rapidjson;

    Document document;
    document.Parse(json);
    return 0;
}

// Entry point
int main(int argc, char* argv[])
{
    switch (commands[argv[1]]) {

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
