#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    cout << "** �α��� �ý��� **" << endl;

    // ����ڷκ��� �̸��� ��й�ȣ �Է� �ޱ�
    cout << "�̸��� �Է��ϼ���: ";
    string username;
    cin >> username;

    cout << "��й�ȣ�� �Է��ϼ���: ";
    string password;
    cin >> password;

    // ���Ͽ��� ȸ�� ���� �о����
    ifstream file("member.txt");
    if (!file) {
        cerr << "������ �� �� �����ϴ�." << endl;
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
        cout << "�α��� ����!" << endl;
    }
    else {
        cout << "�α��� ����" << endl;
    }

    return 0;
}
