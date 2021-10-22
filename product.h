#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class product
{
    std::string barCode;
    bool byWeight;
    float price;
    std::string name;
public:
    product(){};
    product(std::string& _barCode,bool _byWeight,float& _price,std::string& _name):barCode(_barCode),byWeight(_byWeight),price(_price),name(_name){};

    //GETTERS
    std::string getBarCode(){return this->barCode;}
    bool getByWeight(){return this->byWeight;}
    float getPrice(){return this->price;}
    std::string getName(){return this->name;}

//pobierz wagę całkowicie wirtualna
};

class productByWeight:public product
{
public:
    //metoda wirtualna do wagi
};
class productByItem:public product
{
public:
    //pobierz wagę
};

#endif // PRODUCT_H
