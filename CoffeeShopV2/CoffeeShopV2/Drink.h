#pragma once

#include <string>


// Component
class Drink
{
public:
	virtual ~Drink() = default;
	virtual double cost() const = 0;
	virtual const std::string description() const = 0;
};

