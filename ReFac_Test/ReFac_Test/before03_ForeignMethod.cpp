#include <iostream>


namespace C::examples03 {

	// member variables
	class Date {
	public:
		Date() = default;
		Date(int year, int month, int date) {}

		int getYear() {
			return 1;
		}
		int getMonth() {
			return 2;
		}
		int getDate() {
			return 3;
		}
	};

	Date previousEnd;

	//-----------------------------------------------------------------------------
	// 예제 코드

	Date* newStart = new Date(previousEnd.getYear(),
		previousEnd.getMonth(), previousEnd.getDate() + 1);


	// 예제 코드
	//-----------------------------------------------------------------------------





}


