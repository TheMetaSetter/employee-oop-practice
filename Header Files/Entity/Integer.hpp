#pragma once

#include <string>
#include <iostream>

#include "Object.hpp"

using std::string, std::to_string;
using std::ostream;

class Integer;

class Integer : public Object
{
private:
    int _value;

public:
    Integer() = default;
    Integer(int value);

public:
    ~Integer() {};

public:
    void setValue(int value);
    int value() const;

public:
    Integer &operator=(const int &other);
    Integer &operator=(const Integer &other);
    friend Integer operator+(const Integer &a, const int &b);
    friend Integer operator+(const Integer &a, const Integer &b);
    friend Integer operator-(const Integer &a, const int &b);
    friend Integer operator-(const Integer &a, const Integer &b);
    friend Integer operator*(const Integer &a, const int &b);
    friend Integer operator*(const Integer &a, const Integer &b);

public:
    friend ostream& operator<<(ostream& os, const Integer& obj);

public:
    string toString();
};