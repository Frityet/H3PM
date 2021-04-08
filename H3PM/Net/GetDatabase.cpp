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
    CURL *curl;
    CURLcode res;
    string readBuffer;

    //init char array (cURL is in C)
    //Side note, i have no clue why it isnt first an array
    char *charURL;

    charURL = &url[0];

    cout << "URL: " << charURL << endl;

    curl = curl_easy_init();
    if(curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, charURL);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        std::cout << readBuffer << std::endl;
    }
    return readBuffer;
}

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}