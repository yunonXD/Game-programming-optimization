#include "Inventory.h"


Inventory::Inventory(int itemNum) : mItemNum(itemNum)
{
	mItems = new Item[itemNum];
}