#ifndef USER_FUNCTIONS_H
#define USER_FUNCTIONS_H

#include<iostream>
#include<string>
#include<vector>
#include<ctime>

#include"userGlobals.h"
#include"additionalFuncs.h"

 void User::postMessage(std::string text, std::string topic)
 {
     message msg;

     msg.date  = getCurrentTime();
     msg.text = text;
     msg.userName = name;
     msg.userId = id;
     msg.likes = 0;
     msg.dislikes = 0;
     msg.topic = topic;

     tuitts.push_back(msg);

     std::cout << "Tuitted successfully!" << std::endl;
 }

 void User::showAllLocalTuitts()
 {
     showSpecifiedTuitts("NO_TOPICS_SPECIFIED");
 }  

 void User::showSpecifiedTuitts(std::string topic)
 {
    std::cout << " - - - - - - - - - - - - - - - - - -" << std::endl;
    for(int i = 0; i < tuitts.size(); i++) {
        struct message tempTuitt = tuitts.at(i);
        if(tempTuitt.topic == topic || topic == "NO_TOPICS_SPECIFIED"){
            std::cout << " : " << tempTuitt.text << std::endl;
            std::cout << "                    by " << tempTuitt.userName << " posted " << tempTuitt.date << std::endl;
            std::cout << "Tuitt id: " << i << "                                      Likes: " << tempTuitt.likes << " Dislikes: " << tempTuitt.dislikes << std::endl;
            std::cout << " - - - - - - - - - - - - - - - - - -" << std::endl;
        }
    }
 }

 void User::likeMessage(int messageId, bool choice)
 {
     if(choice)
    {

        tuitts[messageId].likes++;
        std::cout << "You liked the tuitt" << std::endl;

    } else {

        tuitts[messageId].dislikes++;
        std::cout << "You disliked the tuitt" << std::endl;

    }
 }  

 void User::showFriendList()
 {

     std::cout << "Your friends: " << std::endl;
     printOutVector(friendList);

 }

 void User::showInterests()
 {

     std::cout << "Your set interests: " << std::endl;
     printOutVector(favouriteTopics);

 }

 void User::retuittMessage(int tuittId, std::string text)
 {

     retuitt ret;

     ret.date  = getCurrentTime();
     ret.text = text;
     ret.userName = name;
     ret.userId = id;
     ret.likes = 0;
     ret.dislikes = 0;
     ret.tuittId = tuittId;

     retuitts.push_back(ret);

     std::cout << "Retuitted successfully!" << std::endl;

 }

#endif // !USER_FUNCTIONS_H