#ifndef ORDER_H
#define ORDER_H

class Order{
    private:
        double totalAmount;

    public:
        Order(double total);

        void displayOrder() const;

};

#endif