#include "database.h"
#include"order.h"

int main()
{
    dataBase DataBase;
    bool dataBaseDownloaded=DataBase.dataBaseDownload();

    bool cashOpened=1;
    bool orderOpened=1;
    std::string exitButton="";

    while(cashOpened && dataBaseDownloaded) //main loop of cash register
    {
        std::cout<<"Aby otworzyć nowy rachunek wpisz dowolny znak i wciśnij enter. Aby zamknąć kasę wpisz exit: ";
        std::cin>>exitButton;
        if(exitButton=="exit") //closing the cash register
        {
            cashOpened=0;
            break;
        }

        order actualOrder;
        std::string newOneCode;

        std::cout<<"Utworzono nowy rachunek."<<std::endl;
        while(orderOpened)   //open the order loop
        {
            std::cout<<"Podaj kod produktu lub wpisz \"x\" aby zamknąć rachunek:"<<std::endl;
            std::cin>>newOneCode;
            if(newOneCode=="x") //breaking the order loop,order summary
            {
                actualOrder.printOrderOnScreen();
                float a=actualOrder.totalPriceCalculation();
                std::cout<<"Calkowity koszt: "<<a<<"zl"<<std::endl;
                break;
            }
            orderedProduct returned;
            DataBase.returnProduct(newOneCode,returned);
            actualOrder.addProductToOrder(returned);
            std::cout<<"Lista zakupów:"<<std::endl;
            actualOrder.printOrderOnScreen();
        }

    }
    return 0;
}


