#pragma once
#include "Drink.h"




class DrinkOption : public Drink
{
public:
	DrinkOption(Drink& drink);
	virtual const std::string description() const = 0;
protected:
	Drink& mDrink;
};
