#ifndef CART_H
#define CART_H

#include <vector>

#include "Product.h"

class Cart{

    private:
        std::vector<Product> products;

    public:
        void addProduct(const Product& p);

        void removeProduct(int productID);

        void displayCart() const;

        double calculateTotal() const;

        bool isEmpty() const;
};

#endif