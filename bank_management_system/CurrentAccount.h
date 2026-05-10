#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "Account.h"

class CurrentAccount: public Account{
    private:
        double overdraftLimit;

    public:
        //constructor
        CurrentAccount(
            int accNo,
            std::string name,
            double bal,
            double limit
        );

        void withdraw(double amount) override;
};

#endif