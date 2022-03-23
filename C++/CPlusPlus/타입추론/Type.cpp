#include "Type.h"


int main() {
	int x = 27;
	const int cx = x;
	const int& rx = x;

	

	//f(x);  //T 는 int, param 타입은 const int&
	//f(cx);  //T 는 const int, param 타입은 const int&
	//f(rx);  //T 는 const int, param 타입은 const int&

	//추론붕괴
	int keyVals[] = { 1,2,3,4,5,6,7,8 };
	int mappedVals[arraySize(keyVals)];

	cout << "keyVals size : " << size(keyVals) << endl;
	cout << "mappedVals size : " << size(mappedVals) << endl;

}