#pragma once
#include <iostream>

using namespace std;

class Projectile {

public:
	virtual void make_projectile() = 0;

	virtual void Physics() = 0;
	virtual void Magic() = 0;
	virtual void Buff() = 0;

	virtual void effect() = 0;
private:

};
