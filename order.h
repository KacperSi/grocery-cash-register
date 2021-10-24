#ifndef ORDER_H
#define ORDER_H

#include "orderedproduct.h"


#include<vector>

class order
{
    std::vector<orderedProduct> orderedProducts;
public:
    order();
    void addProductToOrder(orderedProduct& newOneProduct);
    float totalPriceCalculation();
    void printOrderOnScreen();
    void sendOrderToServer();//not added yet
};

#endif // ORDER_H
