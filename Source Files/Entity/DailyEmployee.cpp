#include "Entity/DailyEmployee.hpp"

// DailyEmployee
DailyEmployee::DailyEmployee(int days, int paymentPerDay)
{
    _days = days;
    _paymentPerDay = paymentPerDay;

    calcSalary();
}

void DailyEmployee::calcSalary()
{
    _salary = _days * _paymentPerDay;
}