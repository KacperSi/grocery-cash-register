#ifndef PRODUCTBYWEIGHT_H
#define PRODUCTBYWEIGHT_H

#include "orderedproduct.h"

class productByWeight : public orderedProduct
{
public:
    productByWeight(){};
    productByWeight(std::string& _barCode,bool _byWeight,float& _price,std::string& _name):orderedProduct(_barCode,_byWeight,_price,_name){};
    virtual void setAmount() override;
};

#endif // PRODUCTBYWEIGHT_H
