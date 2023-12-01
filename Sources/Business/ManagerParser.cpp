#include "Business/ManagerParser.hpp"
#include "Entity/Manager.hpp"

Object* ManagerParser::parse(string data)
{
    // Manager employeeCount=30, paymentPerEmployee=500000, baseSalary=5000000
    string employeeCount = data.substr(0, data.find(","));
    string paymentPerEmployee = data.substr(data.find(",") + 1, data.find_last_of(",") - data.find(",") - 1);
    string baseSalary = data.substr(data.find_last_of(",") + 1);

    return new Manager(
        stoi(employeeCount.substr(employeeCount.find("=") + 1)),
        stoi(paymentPerEmployee.substr(paymentPerEmployee.find("=") + 1)),
        stoi(baseSalary.substr(baseSalary.find("=") + 1))
    );
}