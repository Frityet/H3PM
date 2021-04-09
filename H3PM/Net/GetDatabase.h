//
// Created by Frityet on 3/19/2021.
//

#ifndef H3PM_GETDATABASE_H
#define H3PM_GETDATABASE_H

#endif //H3PM_GETDATABASE_H

#include <string>

namespace H3PM
{
    namespace Net
    {

        std::string GetRawModList(std::string url);

        size_t writeFunction(void *ptr, size_t size, size_t nmemb, std::string *data);

        static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);
    }
}