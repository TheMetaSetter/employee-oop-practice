#include "Business/DailyEmployeeParser.hpp"
#include "Entity/DailyEmployee.hpp"

Object* DailyEmployeeParser::parse(string data)
{
    // DailyEmployee dayCount=20, paymentPerPay=1000000
    string dayCount = data.substr(0, data.find(","));
    string paymentPerDay = data.substr(data.find(",") + 1);

    return new DailyEmployee(
        stoi(dayCount.substr(dayCount.find("=") + 1)),
        stoi(paymentPerDay.substr(paymentPerDay.find("=") + 1))
    );
}