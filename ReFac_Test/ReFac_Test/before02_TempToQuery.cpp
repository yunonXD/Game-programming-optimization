#include <iostream>


namespace C::examples02 {

	// member variables
	int quantity_;
	int itemPrice_;

	//-----------------------------------------------------------------------------
	// ���� �ڵ�

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


	// ���� �ڵ�
	//-----------------------------------------------------------------------------





}


