#include "GameTitle.h"
#include "Price.h"
#include "RegularPrice.h"

GameTitle::GameTitle(const std::wstring& title, int priceCode) : title_(title),
price_(nullptr)
{
	setPriceCode(priceCode);
}


double GameTitle::getCharge(int daysRented) const
{
	double result = 0;
	// 비디오 종류별 대여료 계산
	switch (getPriceCode())
	{
	case GameTitle::POPULAR:
		result += 2;
		if (daysRented > 2) {
			result += (daysRented - 2) * 1.5;
		}
		break;

	case GameTitle::REGULAR:
		result += daysRented * 3;
		break;

	case GameTitle::NEW_RELEASE:
		result += 1.5;
		if (daysRented > 3)
		{
			result += (daysRented - 3) * 1.5;
		}
	}

	return result;
}

int GameTitle::getFrequentRenterPoints(int daysRented) const
{
	// 적립 포인트를 1 포인트 증가
	int frequentRenterPoints = 1;
	// 신작 이틀 이상 대여시 보너스 포인트
	if ((getPriceCode() == GameTitle::NEW_RELEASE) &&
		daysRented > 1)
	{
		frequentRenterPoints++;
	}

	return frequentRenterPoints;
}

void GameTitle::setPriceCode(int priceCode)
{
	//priceCode_ = priceCode;
	switch (priceCode)
	{
	case REGULAR:
		price_ = new RegularPrice();
		break;
	case POPULAR:
		price_ = new PopularPrice();
		break;
	case NEW_RELEASE:
		price_ = new NewReleasePrice();
		break;
	default:
		throw;
	}
}

int GameTitle::getPriceCode() const {
	return price_->getPriceCode();
}