#pragma once
class Price
{
	virtual int getPriceCode() const = 0;
	virtual double getCharge(int daysRented) const = 0;

};

