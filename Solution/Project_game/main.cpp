#include <iostream>
#include <string>
#include "game.h"
using namespace std;

int main() {
    string user_name;
    int option;
    cout << "** ���ػ� Ű��� ^0^ **" << endl;

    cout << "���ػ���.. ������ ������ ���۵Ǿ���." << endl;
    cout << "���ػ��� �̸��� �Է��ϼ��� : ";
    string chrname;
    cin >> chrname;

    Character chr(chrname);

    cout << chrname << "�� �����͸���." << endl;
    chr.showStatus();

    while (true) {
        cout << "\n��� �����ų ���ΰ�?\n"
            << "0. ���� (���� ����)\n"
            << "1. �̸� ����\n"
            << "2. Level Up!\n"
            << "3. Item �ݱ�\n"
            << "4. Item ���\n"
            << "5. ����â ����!" << endl;

        cout << "����� ������? :" << endl;
        cin >> option;
        chr.manipulateCharacter(option);

        if (option == 0) {
            break;
        }
    }
    return 0;
}
