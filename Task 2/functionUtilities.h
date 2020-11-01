#ifndef CLASS_UTILITIES_H
#define CLASS_UTILITIES_H

#include<iostream>

int factorial(int n)
{
    int res = 1;
    for(int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

bool isVowel(char ch) 
{ 
    ch = toupper(ch); 
    return (ch=='A' || ch=='E' || ch=='I' || 
                       ch=='O' || ch=='U'); 
} 
   
int countVowels(std::string str) 
{ 
    int count = 0; 
    for (int i=0; i<str.length(); i++) 
        if (isVowel(str[i])) 
            ++count; 
    return count; 
} 

#endif