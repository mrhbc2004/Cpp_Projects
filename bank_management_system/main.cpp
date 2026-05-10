#include "SavingsAccount.h"
#include "CurrentAccount.h"

int main(){
    // Base class pointers
    Account* acc1 = new SavingsAccount(101, "Alice", 5000, 5);

    Account* acc2 = new CurrentAccount(102, "Bob", 3000, 2000);

    // Savings Account operation
    acc1->deposit(1000);
    acc1->withdraw(2000);
    acc1->calculateInterest();
    acc1->showBalance();

    // Current Account operations
    acc2->withdraw(4500);
    acc2->showBalance();

    // Transaction histories
    acc1->showTransactionHistory();
    acc2->showTransactionHistory();

    delete acc1;
    delete acc2;
    
    return 0;
}