#pragma once
#include <iostream>
using namespace std;
class Type
{

	//������ �� ���۷��� ����
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

	// ���Ϲ��� ����
	template<typename T>
	void f_3(T&& param) {
		cout << "AAAA param " << endl;
	}

	//���۷��� �� �����Ͱ� �ƴ� ���
	template<typename T>
	void f_4(T param) {
		cout << "AAA param " << endl;
	}

	//�߷кر�
	template<typename T, size_t N>
	constexpr size_t arraySize(T(&)[N]) {
		return N;
	}



};

