#include "Timer.h"
#include <thread>
#include <list>
#include <vector>
#include <cstdio>
using std::thread;
using std::vector;


//thread threadNo();

int main() {

    const int TEST_COUNT

    auto f = [](int theadNo, int testCount) {
        Timer timer(threadNo);
        std::list<int>testList;

        for (int i = 0; i < testCount; i++) {
            if (i <= testCount / 2)
                testList.push_back(i);
            else {
                testList.pop_Froint(i);
            }
          
        }

    };
}

//
//
//int main() {
//	vector<thread> threadVector;
//	for (int i = 0; i < threadCount; ++i) {
//		thread th(f, i, TEST_COIUNT / threadCount);
//		threadVector.push_back(move(th));
//	}
//
//	for (int i = 0; i < theadCount; ++i) {
//		cout << " thread " << i << "join()" << endl;
//		threadVector[i].join();
//	}
//}



void worker(vector<int>::iterator start, vector<int>::iterator end,
    int* result) {
    int sum = 0;
    for (auto itr = start; itr < end; ++itr) {
        sum += *itr;
    }
    *result = sum;

    // �������� id �� ���Ѵ�.
    thread::id this_id = std::this_thread::get_id();
    printf("������ %x ���� %d ���� %d ���� ����� ��� : %d \n", this_id, *start,
        *(end - 1), sum);
}

int main() {
    vector<int> data(10000);
    for (int i = 0; i < 10000; i++) {
        data[i] = i;
    }

    // �� �����忡�� ���� �κ� �յ��� �����ϴ� ����
    vector<int> partial_sums(4);

    vector<thread> workers;
    for (int i = 0; i < 4; i++) {
        workers.push_back(thread(worker, data.begin() + i * 2500,
            data.begin() + (i + 1) * 2500, &partial_sums[i]));
    }

    for (int i = 0; i < 4; i++) {
        workers[i].join();
    }

    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += partial_sums[i];
    }
    std::cout << "��ü �� : " << total << std::endl;
}



