#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book{
    private:
        int bookID;
        string title;
        string author;
        bool isIssued;

    public:
        // constructor
        Book(int id, string t, string a);

        // methods
        int getBookID(); // function to get bookID
        bool getStatus(); // function to get the status of book 

        void issueBook(); // function to issue the book
        void returnBook(); // function to return the book 
        void displayBook(); // function to display the details of book 
};

#endif