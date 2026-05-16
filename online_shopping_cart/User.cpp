#include "User.h"

#include <iostream>

User::User(int id, std::string n){
    userID = id;
    name = n;
}

Cart& User::getCart(){
    return cart;
}

void User::displayUser()const{
    std::cout 
    << "User ID: " << userID
    << " | Name: " << name
    << std::endl;
}