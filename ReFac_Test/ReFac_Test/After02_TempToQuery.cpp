#include <iostream>


namespace C::examples02 {

	// member variables
	int quantity_;
	int itemPrice_;

	//-----------------------------------------------------------------------------
	// 抗力 内靛

	int getBasePrice() {
		return quantity_ * itemPrice_;;
	}

	double getDiscountFactor() {
		return getBasePrice() > 1000 ? 0.95 : 0.98;
	}

	double getPrice() {
		return getBasePrice() * getDiscountFactor();

	}


	// 抗力 内靛
	//-----------------------------------------------------------------------------





}


