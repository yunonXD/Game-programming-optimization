#include <iostream>


namespace C::examples04 {

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

		bool before(Date& arg) { return false; }
		bool after(Date& arg) { return false; }
	};

	double quantity;
	double winterRate_;
	double summerRate_;
	double winterServiceCharge_;

	//Date date;
	Date SUMMER_START;
	Date SUMMER_END;

	//-----------------------------------------------------------------------------
	// 抗力 内靛
	double getSeasonCharge(Date& date)
	{
		double charge = 0;
		if (date.before(SUMMER_START) || date.after(SUMMER_END))
		{
			charge = quantity * winterRate_ + winterServiceCharge_;
		}
		else
		{
			charge = quantity * summerRate_;
		}

		return charge;
	}



	// 抗力 内靛
	//-----------------------------------------------------------------------------





}


