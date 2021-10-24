#include "order.h"
#include"productbyweight.h"

order::order()
{

}

/*Adds the product to your order. If it is sold by weight it is added as productByWeight and if not it remains orderedProduct.
 * This will overload the function responsible for retrieving the product amount.
 * In the future, the function from the productByWeight class can be transformed into a function that automatically reads the product weight from the store scale.*/

void order::addProductToOrder(orderedProduct &newOneProduct)
{
    if(newOneProduct.getByWeight()==0)
    {
        newOneProduct.setAmount();
        newOneProduct.setTPrice();
        orderedProducts.push_back(newOneProduct);
    }
    if(newOneProduct.getByWeight()==1)
    {
        productByWeight newByWeight(newOneProduct);
        newByWeight.setAmount();
        newByWeight.setTPrice();
        orderedProducts.push_back(newByWeight);
    }
}

//calculates the total price for an order
float order::totalPriceCalculation()
{
    float total=0;
    for(auto &item:orderedProducts)
    {
        total=total+item.getTPrice();
    }

    return total;
}

void order::printOrderOnScreen()
{
    for(auto &item:orderedProducts)
    {
        std::cout<<item.getName()<<"  x"<<item.getAmount()<<"[szt/kg]     "<<item.getTPrice()<<std::endl;
    }
}

void order::sendOrderToServer()
{
    //future sending order to server
}



