#include "database.h"
void dataBase::dataBaseSourcing(std::stringstream& str)
{
    //std::cout << "Uzyskano dostep do pliku!" << std::endl;
    std::string line;
    while (getline(str, line))
    {

        std::smatch smatchData;
        std::regex productLineRegex("(\\d{6}),(1|0),(\\d*\\.\\d*),(\\w*)");

        while (regex_search(line, smatchData, productLineRegex))
        {
            // tą część do oddzielnej funkcji

            bool byWeight;
            float price;
            std::string barCode=smatchData[1];
            std::istringstream(smatchData[2])>>byWeight;
            std::istringstream(smatchData[3]) >>price;
            std::string name=smatchData[4];
            product singleProduct(barCode,byWeight,price,name);


            this->baseOfProducts.push_back(singleProduct);
            //do tąd
            line= smatchData.suffix();
        }

    }
}

void dataBase::dataBaseDownload()
{
        //DOWNLOADING DATA FROM A FILE
        std::fstream data;
        data.open("/home/paro/cpprepo/grocery/database.txt", std::ios_base::in);
        std::stringstream str;
        str << data.rdbuf();
        //CREATION OF PRODUCTS
        if (data.good() == true)
        {
            this->dataBaseSourcing(str);
            std::cout<<"Baza pomyślnie pobrana"<<std::endl;
        }
        else std::cout << "Dostep do pliku nie zostal uzyskany!" << std::endl;


}

void dataBase::returnProduct(std::string searched, product& returned)
{
    returned=*find_if(baseOfProducts.begin(),baseOfProducts.end(),[&searched](product& s) { return s.getBarCode()==searched;});
}

void dataBase::printDataBase()
{
    for(auto &item:baseOfProducts)
    {
        std::cout<<item.getBarCode()<<","<<item.getByWeight()<<","<<item.getName()<<","<<item.getPrice()<<"."<<std::endl;
    }
}
