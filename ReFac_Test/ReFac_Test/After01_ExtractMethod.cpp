#include <iostream>


namespace C::examples01 {

	std::string name_ = "tempName";
	void printBanner()
	{
	}

	void printDetail(int newLevel) {
		std::cout << "name : " + name_ << std::endl;
		std::cout << "level : " + newLevel << std::endl;
	}

	//-----------------------------------------------------------------------------
	// 예제 코드

	void printCharacter(int newLevel) {
		printBanner();
		printDetail(newLevel);

	}




	// 예제 코드
	//-----------------------------------------------------------------------------





}


