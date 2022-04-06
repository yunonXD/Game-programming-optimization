#pragma once
#include<string>

class Customer
{
public:
	Customer(const std::string& name) : name_(name){}

	const std::string& getName() const
	{

		return name_;
		//return std::string();
	
	}

private:
	std::string name_;

};

