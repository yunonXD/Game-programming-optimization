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
	return price_->getCharge(daysRented);
}


int GameTitle::getFrequentRenterPoints(int dayRented) const {
	return price_->getFrequentRenterPoints(dayRented);
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