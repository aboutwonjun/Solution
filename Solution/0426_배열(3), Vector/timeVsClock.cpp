// 시간 측정 함수
// time vs clock 

#include <iostream>
#include <time.h>
#include <time.h>
using namespace std;

int main() {

    //time 
    // time_t start, end;
    // double result;


    // start = time (NULL);
    // end = time (NULL);
    // result = (double)(end - start);

    // //casting : 원하는 자료로 바꾸는것.
    // // end, start 변수를 double로 변환하여 변수에 할당하는 . 

    // cout << "수행 시간 :" << result << "second" << "\n";

    // return 0;

    //clock
    clock_t start, end;
    double result;

    start = clock();

    end = clock();
    result = (double)(end-start);

    cout << "수헹시간 : " << result << "millisecond" << "\n";

    return 0;
}


// 2mm 세컨드의 차이!