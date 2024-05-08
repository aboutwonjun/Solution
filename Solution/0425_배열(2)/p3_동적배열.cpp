// 1. 몇 명의 학생 성적 평균을 구할지 입력받기
// 2. 입력 받은 학생 수 만큼 성적을 입력받기
// 3. 학생들의 성적 평균 산출하기

#include <iostream>
using namespace std;


int main(){
    //몇 명의 학생 성적 평균을 구할지 입력받기
    cout << "몇 명의 학생 성적 평균을 알려줄까 : ";
    int num;
    cin >> num;

    //학생 수 만큼 성적 입력받기
    //동적 배열 할당 
    int* arr = new int[num];
    int total = 0;

    for (int i=0; i < num; i++) {
        cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
        double grade;
        cin >> grade;
        total += grade;
    } 

    cout << num << " 명의 학생의 평균 총합은 " << total / num << "입니다. ";
    delete[] arr; //메모리 해제
    return 0;
}