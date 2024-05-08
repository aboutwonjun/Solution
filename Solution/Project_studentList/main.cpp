
#include <iostream>
#include <string>
#include <vector>
#include "MyFunctions.h"

using namespace std; 


// main 함수 
int main() {
    cout << "학생들의 정보를 관리해주는 간단한 프로그램입니다." << endl;
    cout << "학생들의 숫자와 세부 정보를 입력해주세요." << endl;

    int student_num = 0;
    cout << "몇 명의 학생을 입력하시겠습니까? : ";
    cin >> student_num;

    // 벡터로 선언 
    vector<string> name(student_num);
    vector<int> age(student_num);
    vector<int> birth_year(student_num);
    vector<int> birth_month(student_num);
    vector<int> birth_day(student_num);

    // 학생 세부 정보 입력 
    getStudentInfo(name, age, birth_year, birth_month, birth_day, student_num);

    int loopCount = 0;

    // if 문으로 Loop count가 0일떄는 숫자를 추가하지는 않고 1일경우 추가

    while (1) {
        int option;
        cout << "기능 선택 1) 학생 정보 출력 2) 평균 나이 계산  3) 가장 빠른 생일 4) 정보 수정 5) 프로그램 종료" << endl;
        cin >> option;



        switch (option) 
        {
            case 1: // 학생 정보 출력
                cout << "학생 정보 출력을 선택하셨습니다." << endl;
                printStudentInfo(name, age, birth_year, birth_month, birth_day, student_num); 
                break;

            case 2: // 평균 나이 계산
                cout << "평균 나이 계산을 선택하셨습니다." << endl;
                printAverageStudentAge(age, student_num);
                break;

            case 3: // 가장 빠른 생일 
                cout << "가장 빠른 생일을 선택하셨습니다." << endl;
                printFindEarliestBday(name, age, birth_year, birth_month, birth_day, student_num);
                break;

            case 4: // 정보 수정
                if (loopCount == 0) 
                {
                    cout << "루프 카운트가 0이므로 이번에는 학생 정보 수정 옵션을 제공하지 않습니다." << endl;
                } 
                else 
                {
                    cout << "학생 정보 수정을 선택하셨습니다." << endl;
                    editStudentInfo(name, age, birth_year, birth_month, birth_day);
                } 
                
                break;

            case 5 : // 프로그램 종료
                cout << "프로그램이 종료되었습니다. "<< endl;
                return 0;

            default :
                cout << "올바른 옵션을 선택하세요." << endl;
                break;

        }
        loopCount++;



        // 한 번 더 실행 여부 확인
        cout << "한 번 더 실행하시겠습니까? (1: Yes, 0: No)" << endl;
        int option_answer;
        cin >> option_answer;
        if (option_answer == 0) {
            // 더 이상 반복하지 않음
            cout << "프로그램이 종료되었습니다." << endl;
            return 0;
        }
    }
    


}