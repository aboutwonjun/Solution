
#include <iostream>
#include <string>
#include <vector>
#include "MyFunctions.h"

using namespace std;


// 학생 정보 입력 함수
void getStudentInfo(vector<string>& name, vector<int>& age, vector<int>& birth_year, vector<int>& birth_month, vector<int>& birth_day, int student_num) {
    for (int i = 0; i < student_num; i++) {
        cout << i + 1 << "번째 학생의 이름을 입력하세요: ";
        cin >> name[i];
        cout << i + 1 << "번째 학생의 나이를 입력하세요: ";
        cin >> age[i];
        cout << i + 1 << "번째 학생의 생일 연도를 입력하세요 (ex: YYYY): ";
        cin >> birth_year[i];
        cout << i + 1 << "번째 학생의 생일 월을 입력하세요 (ex: MM): ";
        cin >> birth_month[i];
        cout << i + 1 << "번째 학생의 생일 일을 입력하세요 (ex: DD): ";
        cin >> birth_day[i];
    }
}

// 학생 정보 출력함수
void printStudentInfo(const vector<string>& name, const vector<int>& age, const vector<int>& birth_year, const vector<int>& birth_month, const vector<int>& birth_day, int student_num) {
    for (int i = 0; i < student_num; i++) {
        cout << i + 1 << "번째 학생의 정보는 " << name[i] << ", " << age[i] << ", "
            << birth_year[i] << "." << birth_month[i] << "." << birth_day[i] << "입니다." << endl;
    }
}

// 평균 나이 출력함수
void printAverageStudentAge(const vector<int>& age, int student_num) {
    int sum_age = 0;
    for (int i = 0 ; i < student_num; i++) {
        sum_age += age[i];
    } 
    double aver_age = static_cast<double>(sum_age) / student_num; // 형변환 추가
    cout << "학생들의 평균 나이는? : " << aver_age << endl;
}

// 가장 빠른 생일 찾아주는 함수 
void printFindEarliestBday(const vector<string>& name, const vector<int>& age, const vector<int>& birth_year, const vector<int>& birth_month, const vector<int>& birth_day, int student_num) {
    int earliest_birth_index = 0; // 가장 먼저 입력 받은 학생부터 비교

    for (int i = 1; i < student_num; i++) {
        if (birth_year[i] > birth_year[earliest_birth_index]) {
            earliest_birth_index = i;
        } else if (birth_year[i] == birth_year[earliest_birth_index]) {
            if (birth_month[i] < birth_month[earliest_birth_index]) {
                earliest_birth_index = i;
            } else if (birth_month[i] == birth_month[earliest_birth_index]) {
                if (birth_day[i] < birth_day[earliest_birth_index]) {
                    earliest_birth_index = i;
                }
            }
        }
    }
    cout << "가장 빠른 생일(어린)을 가진 학생은 " << name[earliest_birth_index] << "입니다." << endl;
}

// 학생 정보 수정 함수
//Shout to 이나경님!
void editStudentInfo(vector<string>& name, vector<int>& age, vector<int>& birth_year, vector<int>& birth_month, vector<int>& birth_day) 
{
    int editStudentNum;
    cout << endl << "정보 수정을 원하는 학생 번호는?";
    cin >> editStudentNum;

    while (true) 
    {
        if (editStudentNum <= 0 || editStudentNum > name.size()) {
            cout << endl << "* 해당 번호의 학생은 존재하지 않습니다. " << endl
                << endl << "[재입력]" << endl
                << "정보 수정을 원하는 학생 번호는? ";
            cin >> editStudentNum;
        } else {
            break;
        }
    }

    int i = 0;

    cout << "학생 " << editStudentNum << "의 새로운 정보를 입력하세요." << endl;
    cout << editStudentNum << "번째 학생의 이름을 입력하세요: ";
    cin >> name[editStudentNum - 1];
    cout << editStudentNum << "번째 학생의 나이를 입력하세요: ";
    cin >> age[editStudentNum - 1];
    cout << editStudentNum << "번째 학생의 생일 연도를 입력하세요 (ex: YYYY): ";
    cin >> birth_year[editStudentNum - 1];
    cout << editStudentNum << "번째 학생의 생일 월을 입력하세요 (ex: MM): ";
    cin >> birth_month[editStudentNum - 1];
    cout << editStudentNum << "번째 학생의 생일 일을 입력하세요 (ex: DD): ";
    cin >> birth_day[editStudentNum - 1];
    cout << "학생 " << editStudentNum << "의 정보가 업데이트되었습니다." << endl;
}