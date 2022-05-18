#pragma once
#include "Projectile.h"

class Phy_Weapon_Bullet : public Projectile {
public:
	void Physics() {
		cout << " »§¾ß »§¾ß\n " << endl;
	}

	void effect() {
		cout << "µ¥Ä® ÀÌÆåÆ® " << endl;
	}
private:
};

class Phy_Weapon_Arrow : public Projectile {
public:
	void Physics() {
		cout << "½µ ½´½´½µ\n" << endl;
	}

	void effect() {
		cout << "µ¥Ä® ÀÌÆåÆ® " << endl;
	}
private:
	
};

class Phy_Weapon_Throwable : public Projectile {
public:
	void Physics() {
		cout << "½´¿ì¿ì¿õ ÆÛ¾ï\n" << endl;
	}

	void effect() {
		cout << "µ¥Ä® ÀÌÆåÆ® " << endl;
	}
private:

};

