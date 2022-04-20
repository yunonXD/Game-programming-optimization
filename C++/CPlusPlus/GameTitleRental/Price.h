#pragma once
class Price
{
public:
	virtual int getPriceCode() const = 0;
	virtual double getCharge(int daysRented) const = 0;
	virtual int getFrequentRenterPoints(int daysRented) const;
};

