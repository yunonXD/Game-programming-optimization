#pragma once
#include "Projectile.h"

class Magic_Weapon_Poison : public Projectile {
public:
	void Magic() {
		cout << " ���� ���̴�\n " << endl;
	}

	void effect() {
		cout << "��Į ����Ʈ " << endl;
	}
private:
};


class Magic_Weapon_Curse : public Projectile {
public:
	void Magic() {
		cout << " ���� ���ִ�\n " << endl;
	}

	void effect() {
		cout << "��Į ����Ʈ " << endl;
	}
private:
};

