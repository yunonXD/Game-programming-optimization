#pragma once

#include "Price.h"

class RegularPrice : public Price
{
public:
	virtual int getPriceCode() const override;
	virtual double getCharge(int daysRented) const override;
};


class PopularPrice : public Price
{
public:
	virtual int getPriceCode() const override;
	virtual double getCharge(int daysRented) const override;
};

class NewReleasePrice : public Price
{


public:
	virtual int getPriceCode() const override;
	virtual double getCharge(int daysRented) const override;
	virtual int getFrequentRenterPoints(int daysRented) const override;
};

