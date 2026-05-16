#include "Order.h"

#include <iostream>

Order::Order(double total){
    totalAmount = total;
}

void Order::displayOrder() const{
    std::cout << "\n Order placed Successfully\n";

    std::cout << "Total Amount: "<< totalAmount << std::endl;
}