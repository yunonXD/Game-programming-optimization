#include <iostream>


namespace C::examples01 {

	std::string name_ = "tempName";
	void printBanner()
	{
	}

	//-----------------------------------------------------------------------------
	// ���� �ڵ�

	void printCharacter(int newLevel) {
		printBanner();

		// ���� ���� ���
		std::cout << "name : " + name_ << std::endl;
		std::cout << "level : " + newLevel << std::endl;
	}


	// ���� �ڵ�
	//-----------------------------------------------------------------------------





}


