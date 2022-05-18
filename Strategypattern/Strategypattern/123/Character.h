#pragma once
#include "Strategy.h"

class Strategy;
class TestBed {
public:
	enum ICharacter {
		Knight,
		Mage,
		Thief
	};
	TestBed() {
		strategy_ = NULL;
	}

	void SetFight(int type, int widht);
	void SetMove();
private:
	Strategy* strategy_;

};


class KnightCha : public Strategy {
public:
	KnightCha(int width ) : Strategy(width){}

private:
	virtual void justify(char* line){

	cout << "Iam Thicc Knigt" << endl;
	}
};

class MageCha : public Strategy {
public:
	MageCha(int width) : Strategy(width) {}

private:
	virtual void justify(char* line) {

		cout << "Iam Thicc Mage" << endl;
	}
};

class ThiefCha : public Strategy {
public:
	ThiefCha(int width) : Strategy(width) {}

private:
	virtual void justify(char* line) {

		cout << "Iam Thicc Thief" << endl;
	}
};


void TestBed::SetFight(int type, int width) {
	delete strategy_;

	if (type == Knight)
		strategy_ = new KnightCha(width);
	if(type == Mage)
		strategy_ = new MageCha(width);
	if(type == Thief)
		strategy_ = new ThiefCha(width);
}

void TestBed::SetMove() {
	strategy_->format();
}