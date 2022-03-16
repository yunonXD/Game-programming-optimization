#include <iostream>
using namespace std;

int width = 0;
int height = 0;
int checker = 0;

int main() {

	cout << "Enter buffer width : " << endl;
	cin >> width;

	cout << "Enter buffer heigh : " << endl;
	cin >> height;

	int* arrayW = new int[width];
	int* arrayH = new int[height];

	for (int i = 0; i < width; i++) {
		arrayW[i] = i;
		cout << " " << endl;

		for (int j = 0; j < height; j++) {
			arrayH[j] = i;
			cout << " " << endl;
			i = 0;
		}
	}


	while (checker != 0){
		cout << "enter print line (1-height. 0: exit) : " << endl;
		cin >> checker;
	}





	



	delete[] arrayW;
	delete[] arrayH;
	return 0;
}