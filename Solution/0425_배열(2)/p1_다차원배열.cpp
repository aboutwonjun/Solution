//다차원 배열 실습
// 1. 표 내용으로 다차원 배열 만들기
// 2. 사용자에게 나이를 입력받기
// 3. 나이에 해당하는 모든 이름과 수학점수를 출력하기 

#include <iostream>
using namespace std;
// 코드 가독성을 위해 Define 
#define ROW_SIZE 5
#define COL_SIZE 4


int main() 
{
    // 리스트 생성
    string list[5][4] =
    {
        {"이름", "나이", "국어", "수학"},
        {"방지턱", "19", "66", "68"},
        {"정직한", "20", "73", "94"},
        {"김가루", "19", "58", "37"},
        {"조나단", "20", "82","29"},
    };

    // 행, 열 변수 설정
    // row = (sizeof(list)/col) / sizeof(list[0][0]); //가로
    // col = sizeof(list[0]) / sizeof(list[0][0]); //세로

    int arrSize = sizeof(list) / sizeof(list[0][0]);
    int age = 0;

    cout << "나이를 입력하세요: ";
    cin >> age;

    for (int i = 1; i < ROW_SIZE; i++) // 헤더 행은 건너뛰기.
    {
        if (age == stoi(list[i][1])) // 나이를 문자열에서 숫자로 강제 변환하여 비교 stoi == string to int
        {
            cout << "이름: " << list[i][0] << " | 수학: " << list[i][3] << endl;
        }
    }

    // 망한 이전 시도
    // for (int i =0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (int age = stoi(list[i][1])) //강제 변환 
    //         {
    //             cout << list[i][1] << list[3][i];

    //         }
    //     }
    // }
    return 0;
}











