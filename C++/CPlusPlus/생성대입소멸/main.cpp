#include "Inventory.h"

int main() {		//���� ������
	Inventory PlayerInven_1(10); {
		PlayerInven_1 = NULL;
		Inventory enemyInven = PlayerInven_1;

	}

	//���� ������
	Inventory PlayerInven_2(10);
	Inventory npcInven(5);
	npcInven = NULL;
	PlayerInven_2 = npcInven;
	


}