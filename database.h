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
        bool dataBaseDownload();
        void returnProduct(std::string searched, product& returned);
        void dataBaseSourcing(std::stringstream& str);
};

#endif // DATABASE_H
