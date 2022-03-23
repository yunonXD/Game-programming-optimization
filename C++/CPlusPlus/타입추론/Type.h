#pragma once
#include <iostream>
using namespace std;
class Type
{

	//포인터 및 레퍼런스 참조
	template<typename T>
	void f(T& param) {
		cout << "AAAA param -" << endl;
	}

	template<typename T>
	void f_1(T param) {
		cout << "AAAA param " << endl;
		param = "NOU";
	}

	template<typename T>
	void f_2(T& param) {
		cout << "AAAA param " << endl;
	}

	// 유니버셜 참조
	template<typename T>
	void f_3(T&& param) {
		cout << "AAAA param " << endl;
	}

	//레퍼런스 및 포인터가 아닌 경우
	template<typename T>
	void f_4(T param) {
		cout << "AAA param " << endl;
	}

	//추론붕괴
	template<typename T, size_t N>
	constexpr size_t arraySize(T(&)[N]) {
		return N;
	}



};

