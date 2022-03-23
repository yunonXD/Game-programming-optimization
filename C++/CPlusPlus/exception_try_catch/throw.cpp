#include <iostream>
#include <vector>




int main() {
	double SafeDivid(double num, double den)
	{
		if (den == 0)
			throw invalid_argument("Divide by zero");
		return num / deb;
	}

		try {
			cout << SafeDivide(5, 2) << endl;
			cout << SafeDivide(10, 0) << endl;//!!
			cout << SafeDivide(3, 2) << endl;
		}
		catch (const std::exception& e) {
			cout << "error excection : " << e.what() << endl;
		}
		return 1;

}