#include "GameTitle.h"
#include"price.h"
#include "Customer.h"
#include "Rental.h"
#include "RegularPrice.h"

GameTitle::GameTitle(const std::string& title, int priceCode) : title_(title), price_(nullptr)
{
	setPriceCode(priceCode);
}

double GameTitle::getCharge(int daysRented_) const
{
	double result = 0;
	//���� ������ �뿩�� ���
	switch (getPriceCode())
	{

	case GameTitle::POPULAR:
		result += 2;
		if (daysRented_ > 2) {
			result += (daysRented_ - 2) * 1.5;
		}
		break;


	case GameTitle::REGULAR:
		result += daysRented_ * 3;
		break;

	case GameTitle::NEW_RELEASE:
		result += 1.5;
		if (daysRented_ > 3) {
			result += (daysRented_ - 3) * 1.5;
		}
	}

	return result;
}

int GameTitle::getFrequentRenterPoints(int dayRented) const {

	//���� ����Ʈ�� 1 ����Ʈ ����
	int frequentRenterPoints = 1;
	//���� ��Ʋ �̻� �뿩�� ���ʽ� ����Ʈ
	if ((getPriceCode() == GameTitle::NEW_RELEASE) &&
		dayRented > 1)
	{
		frequentRenterPoints++;
	}

	return frequentRenterPoints;
}

void GameTitle::setPriceCode(int priceCode) {
	switch (priceCode) {
	case REGULAR:
		price_ = new RegularPrice();
		break;
	case POPULAR:
		price_ = new PopularPrice();
		break;
	case NEW_RELEASE:
		price_ = new NewReleasPrice();
		break;
	default:
		throw;
	}
}

int GameTitle::getPriceCode() const
{
	return price_->getPriceCode();
}