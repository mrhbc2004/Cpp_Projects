#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(int id, string t, string a) {
    bookID      = id;
    title       = t;
    author      = a;
    isIssued    = false; // when created new it is not issued
}

int Book::getBookID(){
    return bookID;
}

bool Book::getStatus(){
    return isIssued;
}

void Book::issueBook(){
    if (!isIssued){
        isIssued = true;
        cout << "Book issued successfully\n";
    } else{
        cout << "Book already issue\n";
    }
}

void Book::returnBook() {
    if (isIssued){
        isIssued = false;
        cout << "Book returned successfully\n";
    } else {
        cout << "Book was not issued\n";
    }
}

void Book::displayBook(){
    cout << "ID:" << bookID
         << " | Title: " << title
         << " | Author: " << author
         << " | Status: " << (isIssued ? "Issued" : "Available") << endl;
}