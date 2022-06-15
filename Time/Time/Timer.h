#pragma once
#include <chrono>
#include <iostream>

using namespace std::chrono;
using namespace std;

class Timer {
public:
	Timer(int timerNo);
	~Timer() {
		Stop();
	}
	void Stop();

private:
	const int timerNo;
	time_point<high_resolution_clock > mStartTime;
};