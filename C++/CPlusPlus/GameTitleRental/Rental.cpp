#include "Rental.h"

Rental::Rental(GameTitle gameTitle, int daysRented) : gameTitle_(gameTitle), daysRented_(daysRented)
{

}


double Rental::getCharge() const
{
	return getGameTitle().getCharge(daysRented_);
}

int Rental::getFrequentRenterPoints() const{


	return getGameTitle().getFrequentRenterPoints(daysRented_);
}
