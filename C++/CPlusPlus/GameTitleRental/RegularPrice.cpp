#include "RegularPrice.h"
#include "GameTitle.h"

//-----------------------------------------------------------------------------
// RegularPrice
int RegularPrice::getPriceCode() const
{
	return GameTitle::REGULAR;
}

//double RegularPrice::getCharge(int daysRented) const
//{
//	return daysRented * 3;
//}


//-----------------------------------------------------------------------------
// PopularPrice
int PopularPrice::getPriceCode() const
{
	return GameTitle::POPULAR;
}
//double PopularPrice::getCharge(int daysRented) const
//{
//	double result = 2;
//	if (daysRented > 2) {
//		result += (daysRented - 2) * 1.5;
//	}
//	return result;
//}


//-----------------------------------------------------------------------------
// NewReleasePrice
int NewReleasePrice::getPriceCode() const
{
	return GameTitle::NEW_RELEASE;
}
//double NewReleasePrice::getCharge(int daysRented) const
//{
//	double result = 1.5;
//	if (daysRented > 3)
//	{
//		result += (daysRented - 3) * 1.5;
//	}
//	return result;
//}