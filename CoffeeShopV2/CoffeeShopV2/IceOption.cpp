#include "IceOption.h"


IceOption::IceOption(Drink& drink): DrinkOption(drink)
{

}

double IceOption::cost() const
{
	return mDrink.cost() + 200;
}

const std::string IceOption::description() const
{
	return mDrink.description() + "+æ∆¿ÃΩ∫";
}
