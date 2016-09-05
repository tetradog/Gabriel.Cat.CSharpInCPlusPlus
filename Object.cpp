#include "Object.h"

bool Object::Equals(Object other)
{
    void* objThis = this;
    void* objOther = &other;
    return objThis == objOther;
}

string Object::ToString()
{
    return typeid (this).name();
}