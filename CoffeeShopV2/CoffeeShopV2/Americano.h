#pragma once
#include "Drink.h"
class Americano :
    public Drink
{
public:
    virtual double cost() const {
        return 1500;
    }

    virtual const std::string description() const
    {
        return mName;
    }

private:
    std::string mName = "아메리카노";
};

