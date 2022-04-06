#pragma once
#include <iostream>
#include <memory>

using namespace std;;

class Player {
public:
	Player() :id(10) {
		pHaveWeaponID = new int[10];
		cout << "플레이어 무기 할당" << endl;
	}
	~Player() {
		cout << "플레이어 무기 해제" << endl;
		delete[] pHaveWeaponID;
		pHaveWeaponID = nullptr;
	}

	void printHaveWeapon() {
		cout << "플레이어 무기 장착 ID : " << id << endl;
	}

	void printid(Player* pPlayer) {
		if (pPlayer) {
			cout << " 파라미터 플레이어 무기 장착 ID" << pPlayer->id << endl;
		}
	}

	void printidReference(unique_ptr<Player>& pPlayer) {
		cout << "파라미터 플레이어 무기 장착 ID " << pPlayer.id << endl;
	}

private:
	int id;
	int* pHaveWeaponID;
};