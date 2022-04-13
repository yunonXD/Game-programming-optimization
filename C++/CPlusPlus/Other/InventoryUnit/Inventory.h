#pragma once

struct Item
{
	int mItemID;
	int mCount;

	Item() : mItemID(0), mCount(0) {}

};

class Inventory
{
public:
	
	Item& operator[](int itemNum);
	Inventory(const Inventory& rhs);
	~Inventory();
	Inventory& operator=(const Inventory& rhs);

	void printItem() const;

	unsigned getInvenSize(return mSize;)

	static size_t calcItemCount(Item item[]);
	
private:
	unsigned nSize;
	Item* mItem = nullptr;
};

