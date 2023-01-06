#ifndef USER_H
#define USER_H
#include<list>
#include<iostream>
#include "Task.h"
using namespace std;


#pragma once

class User
{
public:
   User();
   User(string username, string password);
   ~User();

    void setUserName( string username);
    void setpassword( string password );
    string getUserName();
    string getpassword();
protected:
    string username;
    string password;
    list<Task> tasks;

    
};

#endif