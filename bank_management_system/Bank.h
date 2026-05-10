#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Account.h"

class Bank{
    private:
        std::vector<Account*> accounts; // vector of Account ptr type for storing accounts 

    public:
        void createSavingsAccount();
        void createCurrentAccount();

        Account* findAccount(int accNo);

        void depositMoney();
        void withdrawMoney();
        
        void displayAccount();

        void menu();

        ~Bank();

};


#endif