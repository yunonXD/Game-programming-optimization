#pragma once
#include "DrinkOption.h"



class WhippingOption :
    public DrinkOption
{
public:
    WhippingOption(Drink& drink);

    double cost() const override;
    const std::string description() const override;
private:
    //Drink& mDrink;
};

