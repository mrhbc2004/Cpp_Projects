#include "Account.h"

Account::Account(int accNo, std::string name, double bal){
    accountNumber = accNo;
    holderName    = name;
    balance       = bal;
}

void Account::deposit(double amount){
    balance+=amount; // adding the amount to the existing balance

    // updating the transaction history
    transactionHistory.push_back(
        "Deposited:" + std::to_string(amount)
    );
    
    std::cout<<"Amount deposited successfully"<<std::endl;
    std::cout<<"Current Balance: "<< balance;
}

void Account::withdraw(double amount){
    if (amount <= balance){
        balance-=amount; // deducting the amount and updating the balance

        // updating the transaction history
        transactionHistory.push_back(
            "Withdrawn:" + std::to_string(amount)
        );
        std::cout<<"withdrawal successful\n";
        std::cout<<"Current Balance: "<< balance;
    }
    else {
        std::cout<<"Insufficient balance\n";
    }
}

void Account::showBalance() const {
    std::cout<<"Current Balance:"<<balance<<std::endl;
}

void Account::showTransactionHistory() const {
    std::cout<<"\nTransaction History\n";

    for(const auto &txn : transactionHistory){
        std::cout<< txn << std::endl;
    }
}

void Account::calculateInterest(){
    std::cout<<"No interest calculation for generic account\n";
}

int Account::getAccountNumber() const{
    return accountNumber;
}