
#include "String.h"

String::String()
{
    str = "";
}

String::String(string string)
{
    str = string;
}

String::~String()
{
}

char String::operator[](int index)
{
    return str[index];
}

string String::ToString()
{
    return str;
}

bool String::Equals(Object obj)
{
    return ToString() == obj.ToString();
}

String String::operator+(String other)
{
    return *this+other.str;
}

String String::operator+(string other)
{
    String total;
    total.str = str + other;
    return total;
}

String String::operator+(char other)
{
    String total;
    total.str = str + other;
    return total;
}

String::operator char*()
{
    char * writable = new char[str.length() + 1];
    std::copy(str.begin(), str.end(), writable);
    writable[str.length()] = '\0'; // don't forget the terminating 0
    return writable;
}

String::operator string()
{
    return str;
}

