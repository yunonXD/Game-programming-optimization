#include <iostream>


namespace C::examples01 {

	std::string name_ = "tempName";
	void printBanner()
	{
	}

	//-----------------------------------------------------------------------------
	// 예제 코드

	void printCharacter(int newLevel) {
		printBanner();

		// 세부 정보 출력
		std::cout << "name : " + name_ << std::endl;
		std::cout << "level : " + newLevel << std::endl;
	}


	// 예제 코드
	//-----------------------------------------------------------------------------





}


