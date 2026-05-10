#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include <string>

class Account{
    protected:
        int accountNumber;
        std::string holderName;
        double balance;

        std::vector<std::string> transactionHistory;

    public:
        //constructor
        Account(int accNo, std::string name, double bal);

        virtual void deposit(double amount);
        virtual void withdraw(double amount);

        // getter
        int getAccountNumber() const;
        
        void showBalance() const;
        void showTransactionHistory() const;

        virtual void calculateInterest();

        // destructor
        virtual ~Account() {}
};

#endif