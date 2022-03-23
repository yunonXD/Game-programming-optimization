#pragma once

#include "InventoryException.h"

class InventoryExceptionEmptyIndex : public InventoryException
{
public:
	InventoryExceptionEmptyIndex(int itemIndex) : InventoryException(itemIndex) { }
public:
	virtual const char* what() const
	{
		return "The inventory index is empty";
	}
};