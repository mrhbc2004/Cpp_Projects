#include <iostream>
#include "Library.h"
using namespace std;

int main(){
    Library lib;

    lib.addBook(Book(1, "C++ Basics", "Bjarne"));
    lib.addBook(Book(2, "DSA", "Mark"));

    lib.addUser(User(101, "Alice"));

    lib.issueBook(101, 1);

    lib.displayBooks();
    lib.displayUsers();

    return 0;
}