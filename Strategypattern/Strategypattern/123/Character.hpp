//
//  Character.hpp
//  Optimization11_2
//
//  Created by 김웅비 on 2022/05/18.
//

#ifndef Character_hpp
#define Character_hpp

#include <stdio.h>

#include <memory>

class IWeaponBehavior
{
public:
    virtual void useWeapon() = 0;
};

class Sword : public IWeaponBehavior
{
public:
    void useWeapon() override;
};

class Axe : public IWeaponBehavior
{
public:
    void useWeapon() override;
};

class Bow : public IWeaponBehavior
{
public:
    void useWeapon() override;
};

using WeapnPtr = std::shared_ptr<IWeaponBehavior>;


class IRideBehavior
{
public:
    virtual void  move() = 0;
};

class Running : public IRideBehavior
{
public:
    void move() override;
};

class HorseRiding : public IRideBehavior
{
public:
    void move() override;
};

class BirdRiding : public IRideBehavior
{
public:
    void move() override;
};

using VehiclePtr = std::shared_ptr<IRideBehavior>;

class ICharacter
{
public:
    virtual void setWeapon(WeapnPtr) = 0;
    virtual void setVehicle(VehiclePtr) = 0;
    virtual void fight() = 0;
    virtual void move() = 0;
};

class Knight : public ICharacter
{
private:
    WeapnPtr _weapon;
    VehiclePtr _vehicle;
    
public:
    void setWeapon(WeapnPtr weapon) override {_weapon = weapon;}
    void setVehicle(VehiclePtr vehicle) override {_vehicle = vehicle;}

public:
    void fight() override;
    void move() override;
};

class Mage : public ICharacter
{
private:
    WeapnPtr _weapon;
    VehiclePtr _vehicle;
    
public:
    void setWeapon(WeapnPtr weapon) override {_weapon = weapon;}
    void setVehicle(VehiclePtr vehicle) override {_vehicle = vehicle;}
public:
    void fight() override;
    void move() override;
};

class Thief : public ICharacter
{
private:
    WeapnPtr _weapon;
    VehiclePtr _vehicle;
    
public:
    void setWeapon(WeapnPtr weapon) override {_weapon = weapon;}
    void setVehicle(VehiclePtr vehicle) override {_vehicle = vehicle;}
public:
    void fight() override;
    void move() override;
};

using CharacterPtr = std::shared_ptr<ICharacter>;


#endif /* Character_hpp */
