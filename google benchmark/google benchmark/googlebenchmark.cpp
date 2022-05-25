#include "googlebenchmark.h"

#include <benchmark/benchmark.h>

// 벤치마크 할 함수 정의
static void BM_StringCreation(benchmark::State& state) {
    for (auto _ : state)
        std::string empty_string;
}
// 벤치마크 함수로 등록
BENCHMARK(BM_StringCreation) -> DenseRange(10,20);

// 또다른 벤치마크 함수 정의
static void BM_StringCopy(benchmark::State& state) {
    std::string x = "hello";
    for (auto _ : state)
        std::string copy(x);
}
BENCHMARK(BM_StringCopy);

BENCHMARK_MAIN();


//sort
//static void BM_sort(benchmark::State& state) {
//    int result = 0;
//    for (auto _ : state)
//    {
//        vector<int> v(vectorSize);
//        initV(v, vectorSize);
//        sort(v.begin(), v.end());
//    }
//}
//BENCHMARK(BM_sort)->Unit(benchmark::kMillisecond);


//push back
//static void BM_vector_pushback(benchmark::State& state) {
//    std::vector<TestData> v1;
//    std::vector<TestData> v2(state.range(0));
//
//    for (auto _ : state)
//    {
//        v1.clear();
//        for (auto ci = v2.begin() + v2.size() / 2; ci != v2.end(); ++ci)
//        {
//            v1.push_back(*ci);
//        }
//    }
//}
//BENCHMARK(BM_vector_pushback)->Range(10, 10000);
//
//
////copy
//static void BM_vector_copy(benchmark::State& state) {
//    std::vector< TestData> v1;
//    std::vector< TestData> v2(state.range(0));
//
//    for (auto _ : state)
//    {
//        v1.clear();
//        copy(v2.begin() + v2.size() / 2, v2.end(), back_inserter(v1));
//    }
//}
//BENCHMARK(BM_vector_copy)->Range(10, 10000);
//
//
//
////insert
//static void BM_vector_copy(benchmark::State& state) {
//    std::vector< TestData> v1;
//    std::vector< TestData> v2(state.range(0));
//
//    for (auto _ : state)
//    {
//        v1.clear();
//        copy(v2.begin() + v2.size() / 2, v2.end(), back_inserter(v1));
//    }
//}
//BENCHMARK(BM_vector_copy)->Range(10, 10000);
//
//
//
////assign
//static void BM_vector_assign(benchmark::State& state) {
//    std::vector< TestData> v1;
//    std::vector< TestData> v2(state.range(0));
//
//    for (auto _ : state)
//    {
//        v1.clear();
//        v1.assign(v2.begin() + v2.size() / 2, v2.end());
//    }
//
//}
//BENCHMARK(BM_vector_assign)->Range(10, 10000);


//RVO
//static void BM_testMove2_noMove(benchmark::State& state) {
//    
//    
//    for (auto _ : state) {
//        std::vector<int> data = MakeData1();
//        int result = data[0] + data[1] + data[2] + data[2];
//
//    }
//}
//BENCHMARK(BM_testMove2_noM);
//
//static void BM_testMove2_move(benchmark::State& state) {
//    for (auto _ : state)
//    {
//        std::vector<int> data = MakeData2();
//        int result = data[0] + data[1] + data[2] + data[2];
//    }
//}
//BENCHMARK(BM_testMove2_move);

