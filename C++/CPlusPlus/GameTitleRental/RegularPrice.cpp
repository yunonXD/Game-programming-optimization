#include "RegularPrice.h"
#include "GameTitle.h"


int RegularPrice::getPriceCode() const {
	return GameTitle::REGULAR;
}

double RegularPrice::getCharge(int daysRented) const {
	return daysRented * 3;
}


int PopularPrice::getPriceCode() const {
	return GameTitle::POPULAR;
}

double PopularPrice::getCharge(int daysRented) const {

	double result = 2;
	if (daysRented > 2) {
		result += (daysRented - 2) * 1.5;
	}

	return result;
}


int NewReleasPrice::getPriceCode() const {
	return GameTitle::NEW_RELEASE;
}

double NewReleasPrice::getCharge(int daysRented) const {
	double result = 1.5;
	if (daysRented > 3) {
		result += (daysRented - 3) * 1.5;
	}

	return result;
}
