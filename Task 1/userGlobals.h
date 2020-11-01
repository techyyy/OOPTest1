#ifndef USER_GLOBALS_H
#define USER_GLOBALS_H

#include<iostream>
#include<string>
#include<vector>

#include"additionalFuncs.h"

std::vector<struct message> tuitts;
std::vector<struct retuitt> retuitts;

struct retuitt
{

    std::string date, text, userName;
    int tuittId, likes, dislikes, userId;

};


struct message
{

    std::string date, text, userName, topic;
    int messageId, userId, likes, dislikes;

};

class User
{
    private:

        std::string dateOfRegister, name;

        std::vector<std::string> friendList;
        std::vector<std::string> favouriteTopics;

        int id;

    public:

        User(std::string registerdate, std::string name1, std::vector<std::string> fList, std::vector<std::string> topicsList, int user_id)
        {

            dateOfRegister = registerdate;
            name = name1;
            friendList = fList;
            favouriteTopics = topicsList;
            id = user_id;

        }

        void postMessage(std::string text, std::string topic);
        void likeMessage(int messageId, bool choice);
        void retuittMessage(int messageId, std::string text);
        void showFriendList();
        void showInterests();
        void showAllLocalTuitts();
        void showSpecifiedTuitts(std::string topic);

};

#endif // !USER_GLOBALS_H