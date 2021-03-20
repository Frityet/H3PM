//
// Created by Frityet on 3/19/2021.
//

#ifndef H3PM_HANDLER_H
#define H3PM_HANDLER_H



#include "rapidjson/reader.h"

struct JSON_READ_HANDLER
{
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

#endif //H3PM_HANDLER_H