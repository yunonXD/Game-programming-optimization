#pragma once

struct Item
{
	Item() : id(-100){}

	int id;
};

class Inventory
{
public:
	Inventory(int itemNum);
	Inventory(const Inventory& Copy);
	~Inventory();

public:
	Inventory& operator=(const Inventory& rhs);
	Item& operator[](const int index);

public:
	void AddItem(int index, int itemID);
	void RemoveItem(int index);
	void SwapItem(int target1, int target2);

private:
	Item* mItems = nullptr;
	int mItemNum;
};

