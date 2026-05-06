#include <iostream>
#include "Library.h"
using namespace std;

void Library::addBook(Book b) {
    books.push_back(b);
}

void Library::addUser(User u) {
    users.push_back(u);
}

Book* Library::findBook(int bookID) {
    for (auto &book : books) {
        if (book.getBookID() == bookID)
            return &book;
    }
    return nullptr;
}

User* Library::findUser(int userID) {
    for (auto &user: users) {
        if (user.getUserID() == userID){
            return &user;
        }
    }
    return nullptr;
}

void Library::issueBook(int userID, int bookID){
    Book* book = findBook(bookID);
    User* user = findUser(userID);

    if (book && user) {
        if (!book->getStatus()) {
            book->issueBook();
            user->borrowBook(bookID);
        } else {
            cout << "Book not available\n";
        }
    } else{
        cout <<"Invalid user or book ID\n";
    }
}

void Library::returnBook(int userID, int bookID){
    Book* book = findBook(bookID);
    User* user = findUser(userID);

    if (book && user){
        book->returnBook();
        user->returnBook(bookID);
    } else{
        cout <<"Invalid user or book ID\n";
    }
}

void Library::displayBooks(){
    for (auto &book : books) {
        book.displayBook();
    }
}

void Library::displayUsers(){
    for (auto &user :users){
        user.displayUser();
    }
}