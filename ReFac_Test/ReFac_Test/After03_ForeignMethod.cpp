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
	// 抗力 内靛

	Date* nextDay(Date& arg) {
		return new Date(arg& previousEnd.getYear(),
			previousEnd.getMonth(), previousEnd.getDate() + 1)
	}


	Date* newStart = nextDay(previousEnd);
	// 抗力 内靛
	//-----------------------------------------------------------------------------





}


