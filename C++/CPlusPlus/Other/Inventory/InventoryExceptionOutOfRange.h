#pragma once

#include "InventoryException.h"

class InventoryExceptionOutOfRange : public InventoryException
{
public:
	InventoryExceptionOutOfRange(int itemIndex) : InventoryException(itemIndex) { }

public:
	virtual const char* what() const
	{
		return "Out of range";
	}
};