#pragma once
#include <iostream>

using namespace std;

class Action
{
public:
	Action() {}
	virtual ~Action() {}

public:
	static Action* CreateAction(int code);

public:
	virtual void ActionEvent() = 0;
};

class NormalAttack : public Action
{
public:
	void ActionEvent() override {
		cout << "물리 공격" << endl;
	}
};

class MagicAttack : public Action
{
public:
	void ActionEvent() override {
		cout << "마법 공격" << endl;
	}
};

class HealBuff : public Action
{
public:
	void ActionEvent() override {
		cout << "힐 버프" << endl;
	}
};