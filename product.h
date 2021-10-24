#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class product
{
protected:
    std::string barCode="000000";
    bool byWeight=0;
    float price=0;
    std::string name="no-named";

public:
    product(){};
    product(std::string& _barCode,bool _byWeight,float& _price,std::string& _name):barCode(_barCode),byWeight(_byWeight),price(_price),name(_name){};

    //GETTERS
    std::string getBarCode(){return this->barCode;}
    bool getByWeight(){return this->byWeight;}
    float getPrice(){return this->price;}
    std::string getName(){return this->name;}
};



#endif // PRODUCT_H
