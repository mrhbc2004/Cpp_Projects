#include "Product.h"

#include <iostream>

Product::Product(
    int id,
    std::string n,
    double p
) {
    productID = id;
    name = n;
    price = p;
}

int Product::getProductID() const{
    return productID;
}

std::string Product::getName() const{
    return name;
}

double Product::getPrice() const{
    return price;
}

void Product::displayProduct() const{
    std::cout
    << "ID: "<< productID
    << " | Name: "<< name
    << " | Price: "<< price
    << std::endl;
}