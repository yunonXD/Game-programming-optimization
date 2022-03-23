#include <iostream>

#include "Inventory.h"

void pause()
{
	std::cout << "Paused" << std::endl;
}

template <typename Container, typename Index>
decltype(auto) pauseAndAccess(Container&& c, Index i)
{
	pause();
	return std::forward<Container>(c)[i];
}

Inventory makeInventory()
{
	return Inventory(10);
}

int main()
{
	auto slot = pauseAndAccess(makeInventory(), 5);
	Inventory myInven2(10);
	auto slot2 = pauseAndAccess(myInven2, 5);
}