#pragma once
#include "Drink.h"
class Espresso:
    public Drink
{
public:
    virtual double cost() const {
        return 3000;
    }

    virtual const std::string description() const
    {
        return mName;
    }

private:
    std::string mName = "에스프레소";
};

