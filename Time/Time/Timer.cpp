#include "Timer.h"



Timer::Timer(int timerNo) : timerNo(timerNo) {
	mStartTime = high_resolution_clock::now();
}

void Timer::Stop() {
	auto endTime = high_resolution_clock::now();
	auto start = time_point_cast<microseconds>(mStartTime).time_since_epoch().count();
	auto end = time_point_cast<chrono::microseconds>(endTime).time_since_epoch().count();

	auto duration = end - start;
	double durationMsec = duration * 0.001;

	cout << duration << "timerNo (" << durationMsec << "msec)" << endl;

}