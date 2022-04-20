#include <iostream>


namespace C::examples02 {

	// member variables
	int quantity_;
	int itemPrice_;

	//-----------------------------------------------------------------------------
	// 예제 코드

	double getPrice() {
		int basePrice = quantity_ * itemPrice_;
		double discountFactor;
		if (basePrice > 1000)
		{
			discountFactor = 0.95;
		}
		else
		{
			discountFactor = 0.98;
		}
		return basePrice * discountFactor;
	}


	// 예제 코드
	//-----------------------------------------------------------------------------





}


