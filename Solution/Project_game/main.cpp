#include <iostream>
#include <string>
#include "game.h"
using namespace std;

int main() {
    string user_name;
    int option;
    cout << "** 취준생 키우기 ^0^ **" << endl;

    cout << "취준생의.. 괴랄한 여정은 시작되었다." << endl;
    cout << "취준생의 이름을 입력하세요 : ";
    string chrname;
    cin >> chrname;

    Character chr(chrname);

    cout << chrname << "은 빈털터리다." << endl;
    chr.showStatus();

    while (true) {
        cout << "\n어떻게 성장시킬 것인가?\n"
            << "0. 죽음 (게임 종료)\n"
            << "1. 이름 변경\n"
            << "2. Level Up!\n"
            << "3. Item 줍기\n"
            << "4. Item 사용\n"
            << "5. 상태창 오픈!" << endl;

        cout << "당신의 선택은? :" << endl;
        cin >> option;
        chr.manipulateCharacter(option);

        if (option == 0) {
            break;
        }
    }
    return 0;
}
