#include <iostream>
#include <map>

// For my sanity.
using std::cout;
using std::endl;




// JSON Parser & handler

#include "JSON/rapidjson/reader.h"



struct JSON_READ_HANDLER {
    bool Null() { return true; }
    bool Bool(bool b) { return true; }
    bool Int(int i) { return true; }
    bool Uint(unsigned u) { return true; }
    bool Int64(int64_t i) { return true; }
    bool Uint64(uint64_t u) { return true; }
    bool Double(double d) { return true; }
    bool RawNumber(const char* str, rapidjson::SizeType length, bool copy) { return true; }
    bool String(const char* str, rapidjson::SizeType length, bool copy) { return true; }
    bool StartObject() { return true; }
    bool Key(const char* str, rapidjson::SizeType length, bool copy) { return true; }
    bool EndObject(rapidjson::SizeType memberCount) { return true; }
    bool StartArray() { cout << "StartArray()" << endl; return true; }
    bool EndArray(rapidjson::SizeType elementCount) { cout << "EndArray(" << elementCount << ")" << endl; return true; }
};

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
int listMods(int argc, char* argv[]) {
    // TODO
    
    return 0; // Indicate success
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
