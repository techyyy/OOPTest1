#ifndef INTERFACE_H
#define INTERFACE_H

#include<iostream>
#include<string>
#include<vector>

#include "additionalFuncs.h"
#include "userGlobals.h"

int userInterface()
{
    int userId = 0;
    char input;

    User user("31.10.2010", "Yurii Horobets", {"Max", "Alex", "Fred"}, {"Programming", "Technologies"}, userId);
    
    std::cout << "Nice to see you again in Tuitter!" << std::endl;
    
    while(true)
    {

        std::cout << "List of commands: " << std::endl;
        std::cout << "[ n ] - create a new tuitt." << std::endl;
        std::cout << "[ s ] - show all local tuitts." << std::endl;
        std::cout << "[ t ] - show tuitts on specified topic" << std::endl;
        std::cout << "[ l ] - like or dislike a tuitt." << std::endl;
        std::cout << "[ r ] - retuitt." << std::endl;
        std::cout << "[ f ] - show friend list." << std::endl;
        std::cout << "[ i ] - show your interests." << std::endl;
        std::cout << "[ q ] - quit program" << std::endl;

        std::cin >> input;

        if(input == 'q')
        {
            std::cout << "See you later!" << std::endl;
            break;
        }

        if(input == 'n')
        {
            std::cout << "Express your thoughts: ";
            std::string text, topic;
            std::cin.ignore();
            std::getline(std::cin, text);
            std::cout << std::endl;
            std::cout << "What topic is this tuitt?" << std::endl;
            
            std::cin >> topic;

            user.postMessage(text, topic);
        }

        if(input == 's')
        {
            user.showAllLocalTuitts();
        }

        if(input == 't')
        {   
            std::string chosenTopic;

            std::cout << "Enter topic: " << std::endl;

            std::cin >> chosenTopic;

            user.showSpecifiedTuitts(chosenTopic);
        }

        if(input == 'l')
        {
            int chosenId, choice;

            std::cout << "Type the tuitt id: " << std::endl;
            std::cin >> chosenId;
            std::cout << "Like or dislike?[0,1]" << std::endl;
            std::cin >> choice;

            if(choice == 1) user.likeMessage(chosenId, true);
            else user.likeMessage(chosenId, false);
        }

        if(input == 'r')
        {

            int chosenId;
            std::string response;

            std::cout << "Type the tuitt id: " << std::endl;
            std::cin >> chosenId;
            std::cout << "Your response: " << std::endl;
            std::cin.ignore();
            getline(std::cin, response);
            user.retuittMessage(chosenId, response);
        }

        if(input == 'f')
        {
            user.showFriendList();
        }

        if(input == 'i')
        {
            user.showInterests();
        }

    }
}

#endif // !INTERFACE_H