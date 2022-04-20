#include "Rental.h"

Rental::Rental(GameTitle gameTitle, int daysRented) : gameTitle_(gameTitle), daysRented_(daysRented)
{

}

double Rental::getCharge() const
{
	return getGameTitle().getCharge(daysRented_);
}

int Rental::getFrequentRenterPoints() const
{
	//// 적립 포인트를 1 포인트 증가
	//int frequentRenterPoints = 1;
	//// 신작 이틀 이상 대여시 보너스 포인트
	//if ((getGameTitle().getPriceCode() == GameTitle::NEW_RELEASE) &&
	//	daysRented_ > 1)
	//{
	//	frequentRenterPoints++;
	//}

	return getGameTitle().getFrequentRenterPoints(daysRented_);
}