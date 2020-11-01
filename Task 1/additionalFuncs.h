#ifndef ADDITIONALFUNCS_H
#define ADDITIONALFUNCS_H

#include<iostream>
#include<string>
#include<ctime>
#include<vector>

std::string getCurrentTime()
{
    time_t now = time(0);
    char* date_time = ctime(&now);
    std::string s(date_time);
    return s;
} 

void printOutVector(std::vector<std::string> v1)
{
     for(int i = 0; i < v1.size(); i++)
     {
        std::cout << v1.at(i) << std::endl;
     }
}

#endif // !ADDITIONALFUNCS_H