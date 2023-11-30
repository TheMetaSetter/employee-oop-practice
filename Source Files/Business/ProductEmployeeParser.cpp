#include "Business/ProductEmployeeParser.hpp"

Object* ProductEmployeeParser::parse(string data)
{
    // ProductEmployee productCount=20, paymentPerProduct=1000000
    string productCount = data.substr(0, data.find(","));
    string paymentPerProduct = data.substr(data.find(",") + 1);

    return new ProductEmployee(
        stoi(productCount.substr(productCount.find("=") + 1)),
        stoi(paymentPerProduct.substr(paymentPerProduct.find("=") + 1))
    );
}