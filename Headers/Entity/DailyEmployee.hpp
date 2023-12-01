#pragma once

class DailyEmployee;

#include "Employee.hpp"
#include "Integer.hpp"

class DailyEmployee : public Employee
{
private:
    Integer _days;
    Integer _paymentPerDay;

public:
    ~DailyEmployee() {};

public:
    DailyEmployee(int days, int paymentPerDay);
    void calcSalary();

public:
    string toString() { return "DailyEmployee"; };
};