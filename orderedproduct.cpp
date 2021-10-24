#include "orderedproduct.h"

orderedProduct::orderedProduct()
{

}

void orderedProduct::setAmount()
{
    float numberOfProducts=0;
    std::cout<<"Podaj ilosc[szt] : ";
    std::cin>>numberOfProducts;
    this->amount=numberOfProducts;
}

//calculate the total price of single product(price*amount)
void orderedProduct::setTPrice()
{
    this->tPrice=this->amount*price;
}

