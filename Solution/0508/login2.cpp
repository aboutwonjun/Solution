#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    cout << "** 로그인 시스템 **" << endl;

    // 사용자로부터 이름과 비밀번호 입력 받기
    cout << "이름을 입력하세요: ";
    string username;
    cin >> username;

    cout << "비밀번호를 입력하세요: ";
    string password;
    cin >> password;

    // 파일에서 회원 정보 읽어오기
    ifstream file("member.txt");
    if (!file) {
        cerr << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    bool login = false;
    string s;
    while (getline(file, s)) {
        stringstream ss(s);
        string new_user_name, new_user_pw;

        if (ss >> new_user_name >> new_user_pw) {
            if (username == new_user_name && password == new_user_pw) {
                login = true;
                break;

            }
        }
    }
    file.close();

    if (login) {
        cout << "로그인 성공!" << endl;
    }
    else {
        cout << "로그인 실패" << endl;
    }

    return 0;
}
