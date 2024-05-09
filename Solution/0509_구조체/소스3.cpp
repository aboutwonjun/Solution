#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

bool authenticate(const string& username, const string& password, string& tel) {
    ifstream file("member.txt");
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string stored_username, stored_password;
        ss >> stored_username >> stored_password;
        if (stored_username == username && stored_password == password) {
            return true;
        }
    }
    return false;
}

void loadTelDirectory(map<string, string>& telDirectory) {
    ifstream tel_file("member_tel.txt");
    string line;
    while (getline(tel_file, line)) {
        stringstream ss(line);
        string name, tel;
        ss >> name >> tel;
        telDirectory[name] = tel;
    }
}

void saveTelDirectory(const map<string, string>& telDirectory) {
    ofstream tel_file("member_tel.txt");
    for (const auto& entry : telDirectory) {
        tel_file << entry.first << " " << entry.second << endl;
    }
}

int main() {
    cout << "** 로그인 시스템 **" << endl;

    cout << "이름을 입력하세요: ";
    string username;
    cin >> username;

    cout << "비밀번호를 입력하세요: ";
    string password;
    cin >> password;

    string tel;
    if (authenticate(username, password, tel)) {
        cout << "로그인 성공!" << endl;
        map<string, string> telDirectory;
        loadTelDirectory(telDirectory);

        if (telDirectory.find(username) != telDirectory.end()) {
            cout << "전화번호를 업데이트 하겠습니다." << endl;
        }
        else {
            cout << "전화번호를 추가하겠습니다." << endl;
        }

        cout << "전화번호를 입력하세요: ";
        cin >> tel;

        telDirectory[username] = tel;
        saveTelDirectory(telDirectory);

        cout << "전화번호가 성공적으로 업데이트되었습니다." << endl;
    }
    else {
        cout << "로그인 실패. 이름 또는 비밀번호가 잘못되었습니다." << endl;
    }

    return 0;
}