#pragma once

class DailyEmployeeParser;

#include "IParsable.hpp"

class DailyEmployeeParser : public IParsable
{
public:
    Object* parse(string) override;
    string parsedObjectName() override { return "DailyEmployee"; };

public:
    ~DailyEmployeeParser() {};

public:
    string toString() override { return "DailyEmployeeParser"; };
};