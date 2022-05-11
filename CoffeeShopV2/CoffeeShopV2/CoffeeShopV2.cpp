
#include <iostream>
#include "Latte.h"
#include "IceOption.h"
#include "Espresso.h"
#include "WhippingOption.h"

int main()
{
    std::cout << "Hello World!\n";

    Drink* todayPick1 = nullptr;
    todayPick1 = new Latte();
    std::cout << "Today's Pick: " << todayPick1->description() << std::endl;
    std::cout << "cost: " << todayPick1->cost() << std::endl;
    delete todayPick1;
    todayPick1 = nullptr;

    Drink* todayPick2 = new Espresso();
    todayPick2 = new IceOption(*todayPick2);
    todayPick2 = new IceOption(*todayPick2);
    todayPick2 = new IceOption(*todayPick2);
    todayPick2 = new WhippingOption(*todayPick2);
    std::cout << "Today's Pick2: " << todayPick2->description() << std::endl;
    std::cout << "cost: " << todayPick2->cost() << std::endl;
    delete todayPick2;
    todayPick2 = nullptr;
}

