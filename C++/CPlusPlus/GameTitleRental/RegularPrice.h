#pragma once
#include "Price.h"
class RegularPrice : public Price
{

    virtual int getPriceCode() const override;
    virtual double getCharge(int daysRented) const override;


};

class PopularPrice : public Price
{
    virtual int getPriceCode() const override;
    virtual double getCharge(int daysRented) const override;


};

class NewReleasPrice : public Price
{
    virtual int getPriceCode() const override;
    virtual double getCharge(int daysRented) const override;


};


