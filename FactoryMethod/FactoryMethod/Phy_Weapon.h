#pragma once
#include "Projectile.h"

class Phy_Weapon_Bullet : public Projectile {
public:
	void Physics() {
		cout << " ���� ����\n " << endl;
	}

	void effect() {
		cout << "��Į ����Ʈ " << endl;
	}
private:
};

class Phy_Weapon_Arrow : public Projectile {
public:
	void Physics() {
		cout << "�� ������\n" << endl;
	}

	void effect() {
		cout << "��Į ����Ʈ " << endl;
	}
private:
	
};

class Phy_Weapon_Throwable : public Projectile {
public:
	void Physics() {
		cout << "������ �۾�\n" << endl;
	}

	void effect() {
		cout << "��Į ����Ʈ " << endl;
	}
private:

};

