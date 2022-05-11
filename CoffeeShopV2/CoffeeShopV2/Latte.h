#pragma once
#include "Drink.h"
class Latte :
    public Drink
{
public:

    virtual double cost() const
    {
        return 2600;
    }

    virtual const std::string description() const
    {
        return mName;
    }
private:
    std::string mName = "¶ó¶¼";
};

