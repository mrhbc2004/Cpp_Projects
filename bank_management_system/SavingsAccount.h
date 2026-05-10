#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account{
    private:
        double interestRate;

    public:
        // constructor
        SavingsAccount(
            int accNo,
            std::string name,
            double bal,
            double rate
        );

        void calculateInterest() override;
};

#endif