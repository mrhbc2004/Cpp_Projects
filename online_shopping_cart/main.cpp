#include "Product.h"
#include "User.h"
#include "Order.h"

#include <iostream>

int main(){

    Product p1(1, "Laptop", 75000);
    Product p2(2, "Mouse", 1200);
    Product p3(3, "Keyboard", 2500);

    User user(101, "John");

    user.displayUser();

    user.getCart().addProduct(p1);
    user.getCart().addProduct(p2);
    user.getCart().addProduct(p3);

    user.getCart().displayCart();

    double total = user.getCart().calculateTotal();

    Order order(total);

    order.displayOrder();

    return 0;
}