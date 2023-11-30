#include "Entity/ProductEmployee.hpp"

// ProductEmployee
ProductEmployee::ProductEmployee(int products, int paymentPerProduct)
{
    _products = products;
    _paymentPerProduct = paymentPerProduct;

    calcSalary();
}

void ProductEmployee::calcSalary()
{
    _salary = _products * _paymentPerProduct;
}