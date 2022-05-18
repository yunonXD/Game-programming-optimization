#pragma once
#include <iostream>
#include <string>

using namespace std;


class Strategy {
public:
	Strategy(int width) : width_(width){}

	void format() {
		cout << " Yeet Man " << endl;
	}

protected:
	int width_;

private:
	virtual void justify(char* line) = 0;
};
