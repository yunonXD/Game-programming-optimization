#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> testVector;
	vector<int> vectorPointer;
	int Counter = 0;

	const int* newVectorPointer = &(testVector[0]);		//pushback후 메모리 주소 확인

	cout << "Enter reserve Size: " << endl;

	cin >> testVector[0];

	while () {
		cout << "vectorSize :" << testVector[0] << "vectorPointer : " << vectorPointer[0] << endl;

			const bool pointerChanged = vectorPointer != newVectorPointer; // 비교

			cout << "enter count (0: exit) ";
			cin >> Counter;

			if (pointerChanged == true) {
				cout << "changed" << endl;
			}

	}
	


	cout << "vectorSize : " << testVector.size() << "vectorPointer : " << vectorPointer << (pointerChanged ? " (changed" " ") << endl;


	return;


}