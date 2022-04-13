#pragma once

#include "GameTitle.h"

class Rental
{
public:
	Rental(GameTitle gameTitle, int daysRented);

	int getDaysRented() { return daysRented_;  }
	const GameTitle& getGameTitle() const { return gameTitle_; }
	double getCharge() const;
	int getFrequentRenterPoints() const;

private:
	GameTitle gameTitle_;
	int daysRented_;
};

