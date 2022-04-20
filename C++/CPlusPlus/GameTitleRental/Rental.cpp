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
	//// ���� ����Ʈ�� 1 ����Ʈ ����
	//int frequentRenterPoints = 1;
	//// ���� ��Ʋ �̻� �뿩�� ���ʽ� ����Ʈ
	//if ((getGameTitle().getPriceCode() == GameTitle::NEW_RELEASE) &&
	//	daysRented_ > 1)
	//{
	//	frequentRenterPoints++;
	//}

	return getGameTitle().getFrequentRenterPoints(daysRented_);
}