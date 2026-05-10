#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(
    int accNo,
    std::string name,
    double bal,
    double limit
) : Account(accNo, name, bal) 
{
    overdraftLimit = limit;
    
    transactionHistory.push_back(
        "Initial Deposit: "+std::to_string(bal)
    );
}

void CurrentAccount:: withdraw(double amount){

    if (amount <= (balance + overdraftLimit)){
        balance -= amount;

        transactionHistory.push_back(
            "Withdrawn:" + std::to_string(amount)
        );
        std::cout<<"Withdrawn successfully\n";
    } else {
        std::cout<<"Overdraft Limit Exceeded\n";
    }
}