#pragma once

#include <string>
#include <vector>
#include "Rental.h"

class Customer
{
public:
	Customer(const std::string& name);

	void addRental(const Rental& rental);

	std::string statement();
	std::string htmlStatement();

	const std::string& getName() { return name_; }
private:
	double getTotalCharge() const;
	int getTotalfrequentRenterPoints() const;

private:
	std::string name_;
	std::vector<Rental> rentals_;
};

