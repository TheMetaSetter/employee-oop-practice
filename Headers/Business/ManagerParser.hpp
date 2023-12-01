#pragma once

class ManagerParser;

#include "IParsable.hpp"

class ManagerParser : public IParsable
{
public:
    Object* parse(string) override;
    string parsedObjectName() override { return "Manager"; };

public:
    ~ManagerParser() {};

public:
    string toString() override { return "ManagerParser"; };
};