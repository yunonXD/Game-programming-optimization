//
//  main.cpp
//  Optimization11_2
//
//  Created by 김웅비 on 2022/05/18.
//

#include <iostream>
#include "Character.hpp"

int main(int argc, const char * argv[]) {
    CharacterPtr knight = std::make_shared<Knight>();
    CharacterPtr mage = std::make_shared<Mage>();
    CharacterPtr thief = std::make_shared<Thief>();
    
    WeapnPtr sword = std::make_shared<Sword>();
    WeapnPtr axe = std::make_shared<Axe>();
    WeapnPtr bow = std::make_shared<Bow>();
    
    VehiclePtr run = std::make_shared<Running>();
    VehiclePtr horse = std::make_shared<HorseRiding>();
    VehiclePtr bird = std::make_shared<BirdRiding>();
    
    knight->setWeapon(axe);
    knight->setVehicle(bird);
    
    mage->setWeapon(bow);
    mage->setVehicle(horse);
    
    thief->setWeapon(sword);
    thief->setVehicle(run);
    
    knight->fight();
    knight->move();
    
    mage->fight();
    mage->move();
    
    thief->fight();
    thief->move();
    


    return 0;
}
