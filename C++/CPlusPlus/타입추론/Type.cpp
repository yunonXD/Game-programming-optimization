#include "Type.h"


int main() {
	int x = 27;
	const int cx = x;
	const int& rx = x;

	

	//f(x);  //T �� int, param Ÿ���� const int&
	//f(cx);  //T �� const int, param Ÿ���� const int&
	//f(rx);  //T �� const int, param Ÿ���� const int&

	//�߷кر�
	int keyVals[] = { 1,2,3,4,5,6,7,8 };
	int mappedVals[arraySize(keyVals)];

	cout << "keyVals size : " << size(keyVals) << endl;
	cout << "mappedVals size : " << size(mappedVals) << endl;

}