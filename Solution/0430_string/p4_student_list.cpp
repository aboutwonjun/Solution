#include <iostream>
#include <string>
using namespace std;


// 함수 선언
void startOrExit(string& exit_option);
void studentInfo(string* name, int* age, int* birth_year, int* birth_month, int* birth_day, int student_num);
void printStudentInfo(string* name, int* age, int* birth_year, int* birth_month, int* birth_day, int student_num);
void averageStudentAge(int* age, int student_num);
void findEarliestBday(string* name, int* age, int* birth_year, int* birth_month, int* birth_day, int student_num);


// main 함수 
int main() {

    cout << "학생들의 정보를 관리해주는 간단한 프로그램입니다." << endl;

    // 0. Start Option
    string exit_option;
    startOrExit(exit_option);

    
    // 1. 몇명의 학생을 입력할 것인지 묻기
    int student_num = 0;
    cout << "몇 명의 학생을 입력하시겠습니까? : ";
    cin >> student_num;

    // 1-1. 동적 배열 생성
    string* name = new string[student_num];
    int* age = new int[student_num];
    int* birth_year = new int[student_num];
    int* birth_month = new int[student_num];
    int* birth_day = new int[student_num];

    // 학생 정보 입력
    studentInfo(name, age, birth_year, birth_month, birth_day, student_num);


    // 학생 정보 출력
    printStudentInfo(name, age, birth_year, birth_month, birth_day, student_num); 

    // 평균 나이 출력
    averageStudentAge(age, student_num); 

    // 가장 빠른 생일 출력
    findEarliestBday(name, age, birth_year, birth_month, birth_day, student_num);

    //동적 배열 삭제
    delete[] name;
    delete[] age;
    delete[] birth_year;
    delete[] birth_month;
    delete[] birth_day;

    return 0;
}



// 0. 시작 여부 묻는 함수 
void startOrExit(string& exit_option)
    {
    while (true) 
        {
        cout << "프로그램을 시작하려면 '1'을 종료하려면 'exit'를 입력하세요): ";
        cin >> exit_option;
        if (exit_option == "exit") {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }
        else if (exit_option == "1") 
        {
            cout << "프로그램을 시작합니다." << endl;
            break;
        }
        }
    }


// 1. 학생 정보 입력 함수
void studentInfo(string* name, int* age, int* birth_year, int* birth_month, int* birth_day, int student_num) 
{
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

//2. 학생 정보 출력함수
void printStudentInfo(string* name, int* age, int* birth_year, int* birth_month, int* birth_day, int student_num) 
{
    for (int i = 0; i < student_num; i++) {
        cout << i + 1 << "번째 학생의 정보는 " << name[i] << ", " << age[i] << ", "
            << birth_year[i] << "." << birth_month[i] << "." << birth_day[i] << "입니다." << endl;
    }
}

//3. 평균 나이 출력함수
void averageStudentAge(int* age, int student_num) 
{
    int sum_age = 0;
    for (int i = 0 ; i < student_num; i++)
    {
        sum_age += age[i];
    } 
    double aver_age = sum_age / student_num;
    cout << "학생들의 평균 나이는? : " << aver_age << endl;
}



//4. 가장 빠른 생일 찾아주는 함수 
void findEarliestBday(string* name, int* age, int* birth_year, int* birth_month, int* birth_day, int student_num) 
{
    int earliest_birth_index = 0; // 가장 먼저 입력 받은 학생부터 비교

    for (int i = 1; i < student_num; i++) 
    {
        if (birth_year[i] > birth_year[earliest_birth_index]) // 수정
        {
            earliest_birth_index = i; // 더 빠른 연도를 가진 학생의 인덱스 저장
        } 
        else if (birth_year[i] == birth_year[earliest_birth_index]) 
        {
            if (birth_month[i] < birth_month[earliest_birth_index]) 
            {
                earliest_birth_index = i; // 연도가 같고 월이 더 빠른 학생의 인덱스 저장
            } 
            else if (birth_month[i] == birth_month[earliest_birth_index]) 
            {
                if (birth_day[i] < birth_day[earliest_birth_index]) 
                {
                    earliest_birth_index = i; // 연도와 월이 같고 일이 더 빠른 학생의 인덱스 저장
                }
            }
        }
        
    }
    cout << "가장 빠른 생일(어린)을 가진 학생은 " << name[earliest_birth_index] << "입니다." << endl;

}