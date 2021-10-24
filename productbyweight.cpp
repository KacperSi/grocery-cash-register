#include "productbyweight.h"



void productByWeight::setAmount()
{
    float numberOfProducts=0;
    std::cout<<"Podaj ilosc[kg] : ";
    std::cin>>numberOfProducts;
    this->amount=numberOfProducts;
}
