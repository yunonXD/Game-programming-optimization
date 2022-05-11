#pragma once
#include "DrinkOption.h"



class IceOption :
    public DrinkOption
{
public:
    IceOption(Drink& drink);

    double cost() const override;
    const std::string description() const override;

};

