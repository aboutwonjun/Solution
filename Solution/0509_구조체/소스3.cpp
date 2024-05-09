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
    cout << "** �α��� �ý��� **" << endl;

    cout << "�̸��� �Է��ϼ���: ";
    string username;
    cin >> username;

    cout << "��й�ȣ�� �Է��ϼ���: ";
    string password;
    cin >> password;

    string tel;
    if (authenticate(username, password, tel)) {
        cout << "�α��� ����!" << endl;
        map<string, string> telDirectory;
        loadTelDirectory(telDirectory);

        if (telDirectory.find(username) != telDirectory.end()) {
            cout << "��ȭ��ȣ�� ������Ʈ �ϰڽ��ϴ�." << endl;
        }
        else {
            cout << "��ȭ��ȣ�� �߰��ϰڽ��ϴ�." << endl;
        }

        cout << "��ȭ��ȣ�� �Է��ϼ���: ";
        cin >> tel;

        telDirectory[username] = tel;
        saveTelDirectory(telDirectory);

        cout << "��ȭ��ȣ�� ���������� ������Ʈ�Ǿ����ϴ�." << endl;
    }
    else {
        cout << "�α��� ����. �̸� �Ǵ� ��й�ȣ�� �߸��Ǿ����ϴ�." << endl;
    }

    return 0;
}