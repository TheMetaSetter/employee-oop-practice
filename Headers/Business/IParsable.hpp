#pragma once

class IParsable;

#include "Entity/Object.hpp"

class IParsable : public Object
{
public:
    virtual Object* parse(string) = 0;
    virtual string parsedObjectName() = 0;

public:
    virtual ~IParsable() {};

public:
    string toString() { return "Interface Parsable"; }
};