#pragma once

class IntegerToCurrencyConverter;

#include "IValueConverter.hpp"
#include "Entity/Object.hpp"

class IntegerToCurrencyConverter : public IValueConverter
{
public:
    string convert(Object*) override;

public:
    string toString() override { return "IntegerToCurrencyConverter"; };
};