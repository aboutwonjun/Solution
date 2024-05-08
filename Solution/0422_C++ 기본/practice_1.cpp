#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;


/*
1. 이름을 입력하세요. 라는 문구를 출력하고 사용자로부터 이름을 입력받기
2. 나이를 입력받기
3. 최종 출력! */

int main() {
    cout << "이름을 입력하세요 :\n";
    string name;
    cin >> name;

    cout << "나이를 입력하세요 :\n";
    int age;
    cin >> age;

    cout << "안녕하세요!" << name << "님"<<"(" << age <<"세" <<")";
    return 0;
}