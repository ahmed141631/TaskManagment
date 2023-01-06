#ifndef USER_H
#define USER_H
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
    
};

#endif