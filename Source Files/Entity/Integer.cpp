#include "Entity/Integer.hpp"

using std::to_string;

Integer::Integer(int value)
{
    _value = value;
}

void Integer::setValue(int value)
{
    _value = value;
}

int Integer::value() const
{
    return _value;
}

Integer &Integer::operator=(const int &other)
{
    if (_value != other)
    {
        _value = other;
    }

    return *this;
}

Integer &Integer::operator=(const Integer &other)
{
    if (_value != other.value())
    {
        _value = other.value();
    }

    return *this;
}

Integer operator+(const Integer &a, const int &b)
{
    return Integer(a.value() + b);
}

Integer operator+(const Integer &a, const Integer &b)
{
    return Integer(a.value() + b.value());
}

Integer operator-(const Integer &a, const int &b)
{
    return Integer(a.value() - b);
}

Integer operator-(const Integer &a, const Integer &b)
{
    return Integer(a.value() - b.value());
}

Integer operator*(const Integer &a, const int &b)
{
    Integer result(a.value() * b);

    return result;
}

Integer operator*(const Integer &a, const Integer &b)
{
    Integer result(a.value() * b.value());

    return result;
}

string Integer::toString()
{
    return to_string(_value);
}

ostream& operator<<(ostream& os, const Integer& obj)
{
    os << obj._value;
    return os;
}