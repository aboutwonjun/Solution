#include <iostream>
#include <string>
using namespace std;

// 학생 정보 입력 함수
void inputStudentInfo(string* name, int* age, int* birth, int student_num) {
    for (int i = 0; i < student_num; i++) {
        cout << i + 1 << "번째 학생의 이름을 입력하세요: ";
        cin >> name[i];
        cout << i + 1 << "번째 학생의 나이를 입력하세요: ";
        cin >> age[i];
        cout << i + 1 << "번째 학생의 생일을 입력하세요 (ex: YYYYMMDD): ";
        cin >> birth[i];
    }
}

// 학생 정보 출력 함수
void printStudentInfo(string* name, int* age, int* birth, int student_num) {
    for (int i = 0; i < student_num; i++) {
        cout << i + 1 << "번째 학생의 정보는 " << name[i] << ", " << age[i] << ", " << birth[i] << "입니다." << endl;
    }
}

// 평균 나이 계산 함수
double calculateAverageAge(int* age, int student_num) {
    int sum_age = 0;
    for (int i = 0; i < student_num; i++) {
        sum_age += age[i];
    }
    return sum_age / static_cast<double>(student_num);
}

// 가장 빠른 생일 학생 찾는 함수
string findEarliestBirthday(string* name, int* birth, int student_num) {
    int earliest_birth_index = 0;
    for (int i = 1; i < student_num; i++) {
        if (birth[i] < birth[earliest_birth_index]) {
            earliest_birth_index = i;
        }
    }
    return name[earliest_birth_index];
}

int main() {
    cout << "학생들의 정보를 관리해주는 간단한 프로그램입니다." << endl;

    string exit_option;

    while (true) {
        cout << "프로그램을 시작하시겠습니까? : 1 / (종료하려면 'exit'를 입력하세요): ";
        cin >> exit_option;
        if (exit_option == "exit") {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        else if (exit_option == "1") {
            cout << "프로그램을 시작합니다." << endl;
            break;
        }
    }

    // 학생 수 입력
    int student_num = 0;
    cout << "몇 명의 학생을 입력하시겠습니까? : ";
    cin >> student_num;

    // 동적 배열 생성
    string* name = new string[student_num];
    int* age = new int[student_num];
    int* birth = new int[student_num];

    // 학생 정보 입력
    inputStudentInfo(name, age, birth, student_num);

    // 학생 정보 출력
    printStudentInfo(name, age, birth, student_num);

    // 평균 나이 계산 및 출력
    double aver_age = calculateAverageAge(age, student_num);
    cout << "학생들의 평균 나이는? : " << aver_age << endl;

    // 가장 빠른 생일 학생 찾기 및 출력
    string earliest_birthday_student = findEarliestBirthday(name, birth, student_num);
    cout << "가장 빠른 생일을 가진 학생은 " << earliest_birthday_student << "입니다." << endl;

    // 동적 배열 해제
    delete[] name;
    delete[] age;
    delete[] birth;

    return 0;
}
