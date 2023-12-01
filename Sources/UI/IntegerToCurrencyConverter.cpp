#include <sstream>
#include <regex>

#include <iostream>

#include "UI/IntegerToCurrencyConverter.hpp"
#include "Entity/NumberFormatInfo.hpp"
#include "Entity/Integer.hpp"

using std::stringstream, std::reverse;
using std::regex, std::regex_replace;
using std::cout, std::endl;

string IntegerToCurrencyConverter::convert(Object* object)
{
    Integer* integer = dynamic_cast<Integer*>(object);
    int value = integer->value();

    stringstream builder;
    NumberFormatInfo info;
    int count = 0;

    while (value != 0)
    {
        int lastDigit = value % 10;
        builder << lastDigit;

        count++;

        if (count == 3)
        {
            builder << info.currencyDecimalSeparator();
            count = 0;
        }

        value /= 10;
    }

    string numberSeparated = builder.str();
    reverse(numberSeparated.begin(), numberSeparated.end());

    string format = info.currencyPositiveFormat();
    string symbol = info.currencySymbol();

    

    string result = regex_replace(format, regex("n"), numberSeparated);
    result = regex_replace(result, regex("\\$"), symbol);

    return result;
}
