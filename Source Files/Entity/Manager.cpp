#include "Entity/Manager.hpp"

// Manager
Manager::Manager(int numOfManagedEmployees, int paymentPerEmployee, int baseSalary)
{
    _numOfManagedEmployees = numOfManagedEmployees;
    _baseSalary = baseSalary;
    _paymentPerEmployee = paymentPerEmployee;

    calcSalary();
}

void Manager::calcSalary()
{
    _salary = _numOfManagedEmployees * 500000 + _baseSalary;
}