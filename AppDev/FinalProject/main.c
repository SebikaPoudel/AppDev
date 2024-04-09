#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "libcurl.lib")
#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
    CURL* curl;
    CURLcode res;
    char poststring[200], name[100], proj[100];
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Enter your project: \n");
    scanf("%s", proj);
    sprintf(poststring, "name=%s&project=%s", name, proj);

    curl = curl_easy_init();
    if (curl) {
        
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2301462/main.php");
       
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS,poststring);

       
        res = curl_easy_perform(curl);
       
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

      
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}