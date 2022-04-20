
#include "pch.h"


#include "../InventoryEX/Inventory.h"
#include "MockNetInterface.h"


using ::testing::AtLeast;
TEST(MockNetInterfaceTest, SomeCalling) {
	MockNetInterface mockNet;
	EXPECT_CALL(mockNet, Connect(111, 222))
		.Times(AtLeast(1));

	CK::Inventory inventory(10, &mockNet);
	inventory.AddItem(1, 2, 3);

	EXPECT_TRUE(inventory[1].mItemID, 2);
}
