#pragma once

class IValueConverter;

#include "Entity/Object.hpp"

class IValueConverter : public Object
{
public:
    virtual string convert(Object*) = 0;
};