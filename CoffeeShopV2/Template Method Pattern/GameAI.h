#pragma once
#include <string>
#include <iostream>

class GameAI
{
public:
	void takeTure() const{
		this -> collectResources();
		this->buildStructures();
		this->buildUnit();
		this->attack();
	}

	virtual void collectResources() const{		
	}

	virtual void buildStructures() const {};
	virtual void buildUnit() const {};

	void attack() const{
		//enemy = clostEnemy();
		//if (enemy == nullptr)
			//sendScouts(position);
		//else
			//sendWarriors(position); ´ëÃæ °ø°ÝÇÏ´Â ³»¿ë Çª½¹ºü½¹

	}

private:
	virtual const std::string sendScouts() const = 0;
	virtual const std::string sendWarriors() const = 0;

};

class OrcsAI
{
public:
	virtual void buildStructures() const {};
	virtual void buildUnit() const {};


private:
	virtual const std::string sendScouts() const = 0;
	virtual const std::string sendWarriors() const = 0;

};

class MonsterAI {
public:
	virtual void CollecionResource() {
		std::cout << "Iam Collecting Someting!\n";
	}
	virtual void buildStructures() const {};
	virtual void buildUnit() const {};

};


