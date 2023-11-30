#include <sstream>
#include <regex>

#include "UI/IntegerToCurrencyConverter.hpp"

using std::stringstream, std::reverse;
using std::regex, std::regex_replace;

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
        }

        value /= 10;
    }

    string numberSeparated = builder.str();
    reverse(numberSeparated.begin(), numberSeparated.end());

    string format = info.currencyPositiveFormat();
    string symbol = info.currencySymbol();

    string result = regex_replace(format, regex("n"), numberSeparated);
    result = regex_replace(symbol, regex("\\$"), numberSeparated);

    return result;
}
