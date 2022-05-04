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


//���� class (��1)����������, ��, �帳 ...
//�ɼ� class (���ϴ� ��ŭ)����, ��, ����, ļ��� ...
//�ֹ�(����)->���->������(�Ҹ�) : loop
//cost() // ����
//description() // ���� ����
