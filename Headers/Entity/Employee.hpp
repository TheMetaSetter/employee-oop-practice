#pragma once

#include <string>

#include "Integer.hpp"
#include "Object.hpp"

using std::string;

class Employee : public Object
{
protected:
    string _name;
    Integer _salary;
public:
    virtual ~Employee() {};
public:
    Integer salary();
    virtual void calcSalary() = 0;

public:
    string toString() { return "Employee"; };
};