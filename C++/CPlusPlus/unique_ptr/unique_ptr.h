#pragma once
#include <iostream>
#include <memory>

using namespace std;;

class Player {
public:
	Player() :id(10) {
		pHaveWeaponID = new int[10];
		cout << "�÷��̾� ���� �Ҵ�" << endl;
	}
	~Player() {
		cout << "�÷��̾� ���� ����" << endl;
		delete[] pHaveWeaponID;
		pHaveWeaponID = nullptr;
	}

	void printHaveWeapon() {
		cout << "�÷��̾� ���� ���� ID : " << id << endl;
	}

	void printid(Player* pPlayer) {
		if (pPlayer) {
			cout << " �Ķ���� �÷��̾� ���� ���� ID" << pPlayer->id << endl;
		}
	}

	void printidReference(unique_ptr<Player>& pPlayer) {
		cout << "�Ķ���� �÷��̾� ���� ���� ID " << pPlayer.id << endl;
	}

private:
	int id;
	int* pHaveWeaponID;
};