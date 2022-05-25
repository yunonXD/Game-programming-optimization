#pragma once
#include <chrono>
#include <iostream>

using namespace std::chrono;
using namespace std;

class Timer {
public:
	Timer();
	~Timer() {
		Stop();
	}
	void Stop();

private:
	time_point<high_resolution_clock > mStartTime;
};