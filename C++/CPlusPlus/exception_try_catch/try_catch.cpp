#include <iostream>
#include <exception>
#include <vector>
using namespace std;

vector<int> MyVector{ 1,2,3,4 };

int main() {
	int index;
	cout << "enter index : ";
	cin >> index;

	try {
		cout << "myVctor [ " << index << " ] : " << endl;
		cout << MyVector.at(index) << endl;
	}
	catch (const std::exception& e) {
		cout << "unkown error. " << endl;
		cout << "Pls try again later. " << endl;
		cout << "expection : " << e.what() << endl;
	}
}