#pragma once

#include <string>

class Price;

class GameTitle
{
public:
	static const int POPULAR = 2;
	static const int REGULAR = 0;
	static const int NEW_RELEASE = 1;
public:
	GameTitle(const std::wstring& title, int priceCode);

	double getCharge(int daysRented) const;
	int getFrequentRenterPoints(int daysRented) const;

	int getPriceCode() const;
	const std::wstring& getTitle() const { return title_; }

private:
	void setPriceCode(int priceCode);
private:
	std::wstring title_;
	//int priceCode_;
	Price* price_;
};

