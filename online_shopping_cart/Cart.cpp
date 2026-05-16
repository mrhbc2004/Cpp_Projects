#include "Cart.h"

#include <iostream>

void Cart::addProduct(const Product& p){
    
    products.push_back(p);

    std::cout
    << "Product added to cart\n";
}

void Cart::removeProduct(int productID){
    for(
        auto it = products.begin();
        it != products.end();
        it++
    ){
        if (it->getProductID() == productID){
            products.erase(it);

            std::cout
                << "Product removed\n";

            return;
        } 
    }
    std::cout
        << "Product not found\n";
}

void Cart::displayCart() const{
    if(products.empty()){
        std::cout
            << "Cart is empty\n";

        return;
    }

    std::cout << "\n Cart items: \n";
    
    for(const auto& p: products){
        p.displayProduct();
    }

    std::cout
        << "TOTAL: "
        << calculateTotal()
        << std::endl;
}

double Cart::calculateTotal() const{

    double total = 0;

    for (const auto& p : products){
        total += p.getPrice();
    }

    return total;
}

bool Cart::isEmpty() const{
    return products.empty();
}