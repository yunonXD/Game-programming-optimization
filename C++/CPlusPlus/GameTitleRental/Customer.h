#pragma once

#include <string>
#include <vector>
#include "Rental.h"

class Customer
{
public:
	Customer(const std::wstring& name);

	void addRental(const Rental& rental);

	std::wstring statement();

	const std::wstring& getName() { return name_; }
private:
	double getTotalCharge() const;
	int getTotalFrequentRenterPoints() const;
private:
	std::wstring name_;
	std::vector<Rental> rentals_;
};

