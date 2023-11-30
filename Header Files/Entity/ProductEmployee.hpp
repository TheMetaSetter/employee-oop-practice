#pragma once

class ProductEmployee;

#include "Employee.hpp"
#include "Integer.hpp"

class ProductEmployee : public Employee
{
private:
    Integer _products;
    Integer _paymentPerProduct;

public:
    ~ProductEmployee() {};

public:
    ProductEmployee(int products, int paymentPerProduct);
    void calcSalary();

public:
    string toString() { return "ProductEmployee"; };
};