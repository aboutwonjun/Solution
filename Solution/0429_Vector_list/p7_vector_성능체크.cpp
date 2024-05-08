// 실습 7. Vector 성능체크 
// Time, Chrono 말고 Clock 사용해보기 


#include <iostream>
#include <time.h>
#include <vector>

using namespace std;



int main() {

    // 1. 크기가 1인 test_vec 생성

    // 2. push_back 1억회 수행, ms 단위로 측정 후 출력
    clock_t start, end;
    double result;


    vector<int> test_vec1 (1);
    start = clock();
    for (int i = 0; i < 100000000; ++i) {
        test_vec1.push_back(i);
    }
    end = clock();

    result = (double)(end-start);

    cout << "test_vec 1 수헹시간 : " << result << "millisecond" << "\n";

    // 3. 크기가 1인 벡터 생성
    vector<int> test_vec2 (1);
    // 4. reserve() 1억개 만큼의 공간을 예약.
    test_vec1.reserve(100000000);
    start = clock();
    for (int i = 0; i < 100000000; ++i) {
        test_vec1.push_back(i);
    }
    end = clock();

    result = (double)(end-start);

    cout << "test_vec 2 수헹시간 : " << result << "millisecond" << "\n";

    return 0;

}


