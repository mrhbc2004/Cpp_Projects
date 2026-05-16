#ifndef USER_H
#define USER_H

#include <string>

#include "Cart.h"

class User{
    private:
        int userID;
        std::string name;

        Cart cart;
    public:
        User(
            int id,
            std::string n
        );

        Cart& getCart();

        void displayUser() const;
};
#endif