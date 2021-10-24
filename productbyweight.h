#ifndef PRODUCTBYWEIGHT_H
#define PRODUCTBYWEIGHT_H

#include "orderedproduct.h"

class productByWeight : public orderedProduct
{
public:
    productByWeight(){};
    productByWeight(orderedProduct old):orderedProduct(old){};
    virtual void setAmount() override;
};

#endif // PRODUCTBYWEIGHT_H
