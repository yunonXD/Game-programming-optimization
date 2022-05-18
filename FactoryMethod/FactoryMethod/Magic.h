#pragma once
#include "Projectile.h"

class Magic_Weapon_Poison : public Projectile {
public:
	void Magic() {
		cout << " À¸¾Ç µ¶ÀÌ´Ù\n " << endl;
	}

	void effect() {
		cout << "µ¥Ä® ÀÌÆåÆ® " << endl;
	}
private:
};


class Magic_Weapon_Curse : public Projectile {
public:
	void Magic() {
		cout << " À¸¾Ç ÀúÁÖ´Ù\n " << endl;
	}

	void effect() {
		cout << "µ¥Ä® ÀÌÆåÆ® " << endl;
	}
private:
};

