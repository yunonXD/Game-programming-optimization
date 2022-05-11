#include "WhippingOption.h"


WhippingOption::WhippingOption(Drink& drink) : DrinkOption(drink)
{

}

double WhippingOption::cost() const
{
	return mDrink.cost() + 50;
}

const std::string WhippingOption::description() const
{
	return mDrink.description() + "+»÷«Œ";
}
