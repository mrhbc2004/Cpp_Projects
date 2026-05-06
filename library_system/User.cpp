#include <iostream>
#include "User.h"
using namespace std;

User::User(int id, string n) {
    userID = id;
    name   = n;
}

int User::getUserID(){
    return userID;
}

void User::borrowBook(int bookID){
    borrowedBooks.push_back(bookID); // queue containing the bookID of issued books
}

void User::returnBook(int bookID){
    for(int i = 0; i < borrowedBooks.size(); i++){
        if(borrowedBooks[i] == bookID) {
            borrowedBooks.erase(borrowedBooks.begin()+i);
            break;
        }
    }
}

void User::displayUser(){
    cout << "User ID: " << userID << " | Name: "<< name << endl;
    cout << "Borrowed Books: ";
    for (int id : borrowedBooks){
        cout << id << " ";
    }
    cout << endl;
}