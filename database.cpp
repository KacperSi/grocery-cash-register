#include "database.h"

//function to extract products from a stream
void dataBase::dataBaseSourcing(std::stringstream& str)
{
    std::string line;
    while (getline(str, line))  //fetch a line of text representing a single product
    {
        std::smatch smatchData;
        std::regex productLineRegex("(\\d{6}),(1|0),(\\d*\\.\\d*),(\\w*)");

        while (regex_search(line, smatchData, productLineRegex))  //extraction of product attributes
        {
            bool byWeight;
            float price;
            std::string barCode=smatchData[1];
            std::istringstream(smatchData[2])>>byWeight;
            std::istringstream(smatchData[3]) >>price;
            std::string name=smatchData[4];
            product singleProduct(barCode,byWeight,price,name);


            this->baseOfProducts.push_back(singleProduct); //creating a product vector
            line= smatchData.suffix();
        }
    }
}

//gets data from a file
bool dataBase::dataBaseDownload()
{
        //DOWNLOADING DATA FROM A FILE
        std::fstream data;
        data.open("./database.txt", std::ios_base::in);
        std::stringstream str;
        str << data.rdbuf();
        data.close();
        //CREATION OF PRODUCTS
        if (data.good() == true)
        {
            this->dataBaseSourcing(str);
            std::cout<<"Baza pomyślnie pobrana"<<std::endl;
            return 1;
        }
        else std::cout << "Błąd pobierania bazy!" << std::endl;
        return 0;
}

//returns a product("returned") with the "indicated "searched" barcode
void dataBase::returnProduct(std::string searched, product& returned)
{
    returned=*find_if(baseOfProducts.begin(),baseOfProducts.end(),[&searched](product& s) { return s.getBarCode()==searched;});
}


