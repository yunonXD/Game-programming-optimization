#include "Inventory.h"

int main() {		//복사 생성자
	Inventory PlayerInven_1(10); {
		PlayerInven_1 = NULL;
		Inventory enemyInven = PlayerInven_1;

	}

	//대입 생성자
	Inventory PlayerInven_2(10);
	Inventory npcInven(5);
	npcInven = NULL;
	PlayerInven_2 = npcInven;
	


}