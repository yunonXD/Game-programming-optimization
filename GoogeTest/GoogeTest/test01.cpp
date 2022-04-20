#include "pch.h"

#include "../InventoryEX/Inventory.h"

TEST(InventoryBasicTest, Create) {
	CK::Inventory inventory1(10); // 积己
	CK::Inventory inventory2(inventory1); // 汗荤 积己
	CK::Inventory inventory3(0); // 积己

	EXPECT_EQ(10, inventory1.getSize());
	EXPECT_EQ(10, inventory2.getSize());
	EXPECT_EQ(0, inventory3.getSize());

	inventory3 = inventory1; // 措涝
	EXPECT_EQ(10, inventory3.getSize());
}


TEST(InventoryTest2, AddTest2) {
	CK::Inventory inven1(10); // 积己

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


