#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 함수 원형 선언
void getStudentInfo(vector<string>& name, vector<int>& age, vector<int>& birth_year, vector<int>& birth_month, vector<int>& birth_day, int student_num);
void printStudentInfo(const vector<string>& name, const vector<int>& age, const vector<int>& birth_year, const vector<int>& birth_month, const vector<int>& birth_day, int student_num);
void printAverageStudentAge(const vector<int>& age, int student_num);
void printFindEarliestBday(const vector<string>& name, const vector<int>& age, const vector<int>& birth_year, const vector<int>& birth_month, const vector<int>& birth_day, int student_num);
void editStudentInfo(vector<string>& name, vector<int>& age, vector<int>& birth_year, vector<int>& birth_month, vector<int>& birth_day);

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

        // // 한 번 더 실행 여부 확인
        // cout << "한 번 더 실행하시겠습니까? (1: Yes, 0: No)" << endl;

        // int option_answer;
        // cin >> option_answer;
        // if (option_answer == 0) {
        //     // 더 이상 반복하지 않음
        //     cout << "종료 되었습니다.";
        //     return 0;
        // }


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
