#ifndef ORDEREDPRODUCT_H
#define ORDEREDPRODUCT_H

#include "product.h"

class orderedProduct : public product
{
protected:
    float amount=0;
    float tPrice=0;// total price of single product(price*amount)
public:
    orderedProduct();
    orderedProduct(product old):product(old){};

    virtual void setAmount();

    void setTPrice();
    float getTPrice(){return tPrice;}
    float getAmount(){return amount;}
};

#endif // ORDEREDPRODUCT_H
