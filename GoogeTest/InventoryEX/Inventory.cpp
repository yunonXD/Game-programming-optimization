#include "Inventory.h"
#include <iostream>

namespace CK {


// 생성자
Inventory::Inventory(int inventorySize, INetworkInterface* net) : mNet(net)
{
	mItems = new Item[inventorySize];
	mSize = inventorySize;

	if (mNet)
	{
		mNet->Connect(111, 222);
	}
}

// 소멸자
Inventory::~Inventory()
{
	if (mItems)
	{
		delete[] mItems;
	}
	
}

// 복사생성자
Inventory::Inventory(const Inventory& rhs)
{
	auto inventorySize = Inventory::calcItemsCount(rhs.mItems);
	if (inventorySize != rhs.mSize)
	{
		throw "Invalid rhs.mSize";
	}

	mItems = new Item[inventorySize]; // 메모리 새로 할당
	mSize = inventorySize;

	// 아이템 복사
	for (size_t i = 0; i < inventorySize; i++)
	{
		mItems[i] = rhs.mItems[i];
	}
}


Inventory& Inventory::operator=(const Inventory& rhs)
{
	// 자기 자신에게 대입 방지
	if (this == &rhs)
	{
		return *this;
	}

	auto inventorySize = Inventory::calcItemsCount(rhs.mItems);
	if (inventorySize != rhs.mSize)
	{
		throw "Invalid rhs.mSize";
	}

	// 새로운 힙 메모리 할당
	auto tempItems = new Item[inventorySize];
	// 아이템들 복사
	for (size_t i = 0; i < inventorySize; i++)
	{
		tempItems[i] = rhs.mItems[i];
	}

	// 기존 메모리 해제
	if (this->mItems)
	{
		delete[] mItems;
	}

	// 최종적으로 메모리/Size 셋팅
	mItems = tempItems;
	mSize = inventorySize;

	return *this;
}

Item& Inventory::operator[](int slotNum)
{
	return mItems[slotNum];
}

int Inventory::AddItem(int slotNum, int itemID, int itemCount)
{
	if (slotNum < 0 || slotNum >= mSize) {
		return -1;
	}



	Item& itemSlot = mItems[slotNum];

	if (itemSlot.mItemID)
	{
		return 1; // already exist
	}

	itemSlot.mItemID = itemID;
	itemSlot.mCount = itemCount;
	return 0;
}


void Inventory::printItems() const
{
	for (size_t i = 0; i < mSize; ++i)
	{
		const Item& item = mItems[i];
		//auto item = mItems[i];

		std::cout << "[slot" << i << "] itemID:" << item.mItemID << ", itemCount: " << item.mCount << std::endl;
	}
}

size_t Inventory::calcItemsCount(Item items [])
{
	// 주의! _msize는 힙 메모리에 대해서만 사용해야한다
	return items ? _msize(items) / sizeof(items[0]) : 0;
}

}