#ifndef ORDEREDPRODUCT_H
#define ORDEREDPRODUCT_H

#include "product.h"

class orderedProduct : public product
{
    int amount=0;
public:
    orderedProduct();
    orderedProduct(std::string& _barCode,bool _byWeight,float& _price,std::string& _name):product(_barCode,_byWeight,_price,_name){};// do poprawy
    virtual void setAmount();
};

#endif // ORDEREDPRODUCT_H
