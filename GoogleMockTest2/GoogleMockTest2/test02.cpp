
#include "pch.h"


#include "../InventoryApplication/Inventory.h"


TEST(InventoryTest2, AddTest3) {
	CK::Inventory inven1(10); // 생성

	int slotNum = 2;
	int itemID = 222;
	int count = 5;
	auto success = inven1.AddItem(slotNum, itemID, count);

	ASSERT_EQ(success, 0);
	if (success == 0) {
		const CK::Item& itemSlot = inven1[slotNum];
		ASSERT_EQ(itemSlot.mItemID, itemID);
		ASSERT_EQ(itemSlot.mCount, count);
	}

	success = inven1.AddItem(slotNum, itemID, count);
	ASSERT_EQ(success, 1);
}




class InventoryTest : public testing::Test
{
protected:
	virtual void SetUp() override
	{
		mInventory = new CK::Inventory(10);
		mInventory2 = new CK::Inventory(5);
		std::cout << "InventoryTest::SetUp()" << std::endl;
	}

	virtual void TearDown() override
	{
		delete mInventory;
		delete mInventory2;
		std::cout << "InventoryTest::TearDown()" << std::endl;
	}

	CK::Inventory* mInventory = nullptr;
	CK::Inventory* mInventory2 = nullptr;
};

struct ItemTestInfo
{
	int slotNum = 0;
	int itemID = 0;
	int itemCount = 0;
	int success = 0;

	friend std::ostream& operator<<(std::ostream& os, const ItemTestInfo& info)
	{
		return os << "slot: " << info.slotNum << ", item: " << info.itemID << ", Count: " << info.itemCount
			<< ", success:" << info.success;
	}
};

class InventoryItemTest : public InventoryTest, public testing::WithParamInterface<ItemTestInfo>
{

};




TEST_F(InventoryTest, Init1) {
	ASSERT_EQ(mInventory->getSize(), 10);
}

TEST_F(InventoryTest, Init2) {
	ASSERT_EQ(mInventory->getSize(), 10);
	ASSERT_EQ(mInventory2->getSize(), 5);
}

TEST_F(InventoryTest, Init3) {
	ASSERT_GE(mInventory->getSize(), 10);
	ASSERT_LE(mInventory2->getSize(), 10);
}

TEST_F(InventoryTest, Init4) {
	ASSERT_EQ(mInventory->getSize(), 10);
}



TEST_P(InventoryItemTest, AddItem) {
	const ItemTestInfo& info = GetParam();
	auto success = mInventory->AddItem(info.slotNum, info.itemID, info.itemCount);

	ASSERT_EQ(success, info.success);
	if (success == 0) {
		const CK::Item& itemSlot = (*mInventory)[info.slotNum];
		ASSERT_EQ(itemSlot.mItemID, info.itemID);
		ASSERT_EQ(itemSlot.mCount, info.itemCount);
	}
}


INSTANTIATE_TEST_CASE_P(
	Inventory,
	InventoryItemTest,
	testing::Values(
		ItemTestInfo{ 1, 100, 1, 0 },
		ItemTestInfo{ 2, 200, 2, 0 },
		ItemTestInfo{ 5, 400, 3, 0 },
		ItemTestInfo{ 8, 700, 10, 0 }, // 0은 성공
		ItemTestInfo{ 100, 800, 10, -1 }) // 100번 슬롯은 없다, -1은 실패
);

