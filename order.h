#ifndef ORDER_H
#define ORDER_H

#include "orderedproduct.h"
#include<vector>

class order
{
        std::vector<orderedProduct> listOfOrdered;
public:
    order();
    void addProductToOrder();
    void removeProductFromOrder(){};
};

#endif // ORDER_H
