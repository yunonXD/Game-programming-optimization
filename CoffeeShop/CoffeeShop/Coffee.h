#pragma once
#include <iostream>

using namespace std;

class Coffee
{

public:
	int mCost;
	int mItemID;
	int mCount;

	Coffee() : mItemID(0) , mCost(0) , mCount(0) {}
};

class Option {


public:
	int mCost;
	int mOptionID;
	int mCount;

	Option() : mCost(0) , mOptionID(0) , mCount(0) {}


};

class Order {
public:
	virtual ~Order() {};

	virtual int PrintList(int itemNum) = 0;
	virtual int PrintCost(int ItemCost) = 0;
	virtual int PrintOption(int ItemNum) = 0;
	virtual int printOptincost(int optionCost) = 0;

private:
};

class InventoryItem {
public:
	InventoryItem(const string& itemName, const double itemPrice);
		~InventoryItem();

		string getname() const;
		double getPrice() const;

private:
	std::string name;
	double price;
};


//음료 class (택1)에스프레소, 라떼, 드립 ...
//옵션 class (원하는 만큼)휘핑, 샷, 얼음, 캬라멜 ...
//주문(생성)->출력->버리기(소멸) : loop
//cost() // 가격
//description() // 내용 설명
