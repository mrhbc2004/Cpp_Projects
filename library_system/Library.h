#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"

class Library {
    private:
        std::vector<Book> books;
        std::vector<User> users;
    
    public:
        void addBook(Book b);
        void addUser(User u);

        Book* findBook(int bookID);
        User* findUser(int userID);

        void issueBook(int userID, int bookID);
        void returnBook(int userID, int bookID);

        void displayBooks();
        void displayUsers();
};

#endif