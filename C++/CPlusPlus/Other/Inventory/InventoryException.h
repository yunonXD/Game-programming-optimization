#pragma once
#include <exception>

class InventoryException : public std::exception
{
public:
	InventoryException(int itemIndex) : mItemIndex(itemIndex) { }
public:
	virtual const char* what() const override abstract;
public:
	int GetItemIndex() const { return mItemIndex; }
protected:
	int mItemIndex;
};