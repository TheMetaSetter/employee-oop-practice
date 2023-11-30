#pragma once

class ProductEmployeeParser;

#include "IParsable.hpp"

class ProductEmployeeParser : public IParsable
{
public:
    Object* parse(string) override;
    string parsedObjectName() override { return "ProductEmployee"; };

public:
    ~ProductEmployeeParser() {};

public:
    string toString() override { return "ProductEmployeeParser"; };
};