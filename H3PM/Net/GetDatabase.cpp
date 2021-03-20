//
// Created by Frityet on 2021-03-19.
//

#include <iostream>
#include <string>
#include <vector>
#include "curl/curl.h"

#include "GetDatabase.h"

using namespace std;

string GetRawModList(string url)
{
    cout << "URL: " << url << endl;
    CURL *web;
    CURLcode code;

    web = curl_easy_init();

    string response;

    if(web)
    {
        curl_easy_setopt(web, CURLOPT_URL, &url);
        curl_easy_setopt(web, CURLOPT_NOPROGRESS, 1L);
        curl_easy_setopt(web, CURLOPT_USERPWD, "user:pass");
        curl_easy_setopt(web, CURLOPT_USERAGENT, "curl/7.42.0");
        curl_easy_setopt(web, CURLOPT_MAXREDIRS, 50L);
        curl_easy_setopt(web, CURLOPT_TCP_KEEPALIVE, 1L);
        std::string header_string;
        curl_easy_setopt(web, CURLOPT_WRITEFUNCTION, writeFunction);
        curl_easy_setopt(web, CURLOPT_WRITEDATA, &response);
        curl_easy_setopt(web, CURLOPT_HEADERDATA, &header_string);

        char* url;
        long response_code;
        double elapsed;
        curl_easy_getinfo(web, CURLINFO_RESPONSE_CODE, &response_code);
        curl_easy_getinfo(web, CURLINFO_TOTAL_TIME, &elapsed);
        curl_easy_getinfo(web, CURLINFO_EFFECTIVE_URL, &url);

        curl_easy_perform(web);
        curl_easy_cleanup(web);
        web = NULL;
    }

    return response;
}

size_t writeFunction(void *ptr, size_t size, size_t nmemb, std::string* data)
{
    data->append((char*) ptr, size * nmemb);
    return size * nmemb;
}