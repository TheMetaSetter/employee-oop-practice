#pragma once

class Manager;

#include "Employee.hpp"
#include "Integer.hpp"

class Manager : public Employee
{
private:
    Integer _numOfManagedEmployees;
    Integer _paymentPerEmployee;
    Integer _baseSalary;

public:
    ~Manager() {};

public:
    Manager(int numOfManagedEmployees, int paymentPerEmployee, int baseSalary);
    void calcSalary();

public:
    string toString() { return "Manager"; };
};