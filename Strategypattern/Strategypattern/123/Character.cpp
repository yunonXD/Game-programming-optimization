//
//  Character.cpp
//  Optimization11_2
//
//  Created by 김웅비 on 2022/05/18.
//

#include "Character.hpp"
#include <iostream>

void Sword::useWeapon()
{
    std::cout << "칼을 사용" << std::endl;
}

void Axe::useWeapon()
{
    std::cout << "도끼를 사용" << std::endl;
}

void Bow::useWeapon()
{
    std::cout << "활을 사용" << std::endl;
}

void Running::move()
{
    std::cout << "달려간다" << std::endl;
}

void HorseRiding::move()
{
    std::cout << "말을 타고 간다" << std::endl;
}

void BirdRiding::move()
{
    std::cout << "새를 타고 간다." << std::endl;
}

void Knight::fight()
{
    std::cout << "기사는 ";
    _weapon->useWeapon();
}

void Knight::move()
{
    std::cout << "기사는 ";
    _vehicle->move();
}

void Mage::fight()
{
    std::cout << "마법사는 ";
    _weapon->useWeapon();
}

void Mage::move()
{
    std::cout << "마법사는 ";
    _vehicle->move();
}


void Thief::fight()
{
    std::cout << "도적은 ";
    _weapon->useWeapon();
}

void Thief::move()
{
    std::cout << "도적은 ";
    _vehicle->move();
}


