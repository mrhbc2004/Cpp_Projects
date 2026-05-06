#ifndef USER_H
#define USER_H

#include <vector>
#include <string>
using namespace std;

class User{
    private:
        int userID;
        string name;
        vector<int> borrowedBooks; // vector containing the id's of books issued

    public:
        // constructor
        User(int id, string n);

        int getUserId();

        void borrowBook(int bookID);
        void returnBook(int bookID);
        void displayUser();
};

#endif