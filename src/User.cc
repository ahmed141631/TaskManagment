#include "User.h"

User :: User (){

}
User :: User (string username, string password){
    this->username = username;
    this->password = password;

}

User :: setUserName(string username){
    this->username = username;

}
User :: setPassword(string password){
    this->password = password;


}
User :: getUserName(){
    return this->username;

}
User :: getPassword(){
    return this->password;


}


User::~User (){

}

