#include "Bank.h"

#include "SavingsAccount.h"
#include "CurrentAccount.h"

#include <iostream>

using namespace std;

void Bank::createSavingsAccount(){

    int accNo;
    string name;
    double balance;
    double interestRate;

    cout<<"\n Enter Account Number: ";
    cin >> accNo;

    cout <<"Enter name: ";
    cin >> name;
    
    cout <<"Enter Initial Balance: ";
    cin >> balance;
    
    cout <<"Enter Interest Rate: ";
    cin >> interestRate;

    accounts.push_back(
        new SavingsAccount(
            accNo,
            name,
            balance,
            interestRate
        )
    );

    cout <<"Savings Account created successfully\n";
}

void Bank::createCurrentAccount() {
    int accNo;
    string name;
    double balance;
    double limit;

    cout <<"\nEnter Account Number: ";
    cin >> accNo;
    
    cout <<"\nEnter Name: ";
    cin >> name;
    
    cout <<"\nEnter Initial balance: ";
    cin >> balance;
    
    cout <<"\nEnter Overdraft Limit: ";
    cin >> limit;

    accounts.push_back(
        new CurrentAccount(
            accNo,
            name,
            balance,
            limit
        )
    );

    cout << "Current Account Created Successfully\n";
}

Account* Bank::findAccount(int accNo){
    for (auto acc: accounts){
        if(acc->getAccountNumber() == accNo){
            return acc;
        }
    }

    return nullptr;
}

void Bank::depositMoney(){
    int accNo;
    double amount;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    Account* acc = findAccount(accNo);

    if (acc == nullptr){
        cout << "Account not found\n";
        return;
    }

    cout << "Enter Amount: ";
    cin >> amount;

    acc->deposit(amount);
}

void Bank::withdrawMoney(){
    int accNo;
    double amount;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    Account* acc = findAccount(accNo);

    if(acc == nullptr){
        cout << "Account not found\n";
        return ;
    }

    cout << "Enter amount: ";
    cin >> amount;

    acc->withdraw(amount);
}

void Bank::displayAccount(){

    int accNo;

    cout <<"\nEnter Account Number: ";
    cin >> accNo;

    Account* acc = findAccount(accNo);

    if(acc == nullptr){
        cout << "Account not found\n";
        return ;
    }

    acc->showBalance();
    acc->showTransactionHistory();
}

void Bank::menu(){
    int choice;

    while(true){
        cout << "\n================BANK MENU================\n";

        cout << "1. Create a Savings Account\n";
        cout << "2. Create a Current Account\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Display Account\n";
        cout << "6. Exit\n";

        cout <<"Enter choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                createSavingsAccount();
                break;
            case 2:
                createCurrentAccount();
                break;
            case 3:
                depositMoney();
                break;
            case 4:
                withdrawMoney();
                break;
            case 5:
                displayAccount();
                break;
            case 6:
                cout << "Exiting System...\n";
                return ;
            default:
                cout << "Invalid Choice\n";
        }
    }
}

// Destructor 
Bank::~Bank(){
    for (auto acc: accounts){
        delete acc;
    }
}
