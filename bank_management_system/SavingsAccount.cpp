#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(
    int accNo,
    std::string name,
    double bal,
    double rate
) : Account(accNo, name, bal){
    interestRate = rate;

    transactionHistory.push_back(
        "Initial Deposit: "+std::to_string(bal)
    );
}

void SavingsAccount::calculateInterest(){
    double interest = balance *(interestRate/ 100);

    balance+=interest; // Adding the interest to balance

    transactionHistory.push_back(
        "Interest Added:" + std::to_string(interest)
    );

    std::cout<<"Interest credited successfully\n";
}

