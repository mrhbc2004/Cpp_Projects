#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {

    private:
        int productID;
        std::string name;
        double price;
    
    public:
        Product(
            int id,
            std::string n,
            double p
        );

        int getProductID() const;

        std::string getName() const;

        double getPrice() const;

        void displayProduct() const;
};

#endif