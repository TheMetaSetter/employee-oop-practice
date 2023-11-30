#pragma once

#include <map>
#include <string>

class ParserFactory;

#include "Entity/Object.hpp"
#include "IParsable.hpp"

using std::map;
using std::string;

class ParserFactory : public Object
{
private:
    map<string, IParsable*> _container;
public:
    void registerWith(IParsable* parser)
    {
        _container.insert(
            {parser->parsedObjectName(), parser}
        );
    }

    IParsable* create(string type)
    {
        return _container[type];
    }

public:
    string toString() override { return "ParserFactory"; };
};