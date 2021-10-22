#ifndef DATABASE_H
#define DATABASE_H

#include<vector>
#include<regex>
#include<fstream>

#include "product.h"

class dataBase
{
        std::vector<product> baseOfProducts;
public:
        void dataBaseDownload();
        void returnProduct(std::string searched, product& returned);
        void dataBaseSourcing(std::stringstream& str);//może do innej klasy?
        void printDataBase();//shouldn't be here so delete before final version!!!!!!!!!!!
};

#endif // DATABASE_H
