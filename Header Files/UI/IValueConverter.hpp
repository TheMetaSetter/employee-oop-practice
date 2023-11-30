#pragma once

class IValueConverter;



class IValueConverter : public Object
{
public:
    virtual string convert(Object*) = 0;
};