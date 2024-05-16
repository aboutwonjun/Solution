#include <iostream>
#include <string>
#include "game.h"
using namespace std;

int main()
{

    string user_name;
    int option;

    cout << "** 모험가 키우기  **" << endl;
    cout << " =======================================================================";
    cout << R"(
             /_\
_            )_(            _
|`-.___,.-~'`|=|`'~-.,___,-'|
|  __________|=|__________  |
| |    ______|=|__________| | ___      _      _  _   _             _
| |   |  ____|=|_____     / |  |  |_| |_  |  |_ | _ |_ |\| |\  /\ |_
| |   | /    |=|    /    /| |  |  | | |_  |_ |_ |_| |_ | | |/  \/ |
| |   |/   ,-|_|-. / /  /_|_|______ ______     _______        ____
| |      ,' _____ / // / \    ___  |\    /     \      `.      \   \
| |     / ,'| A |/ // /   |  |   \ | |  |       |  |`.  \     /    \
| |    /_// |/V\/ // /    |  |    \| |  |       |  |  \  \   /  /\  \
| |      /__| |/  / /     |  |       |  |       |  |   \  | /  /  \  \
| |     /\  | / /| /\     |  |__/|   |  |       |  |   |  ||  |    |  |
| |    /  \ |/ // // \    |   __ |   |  |       |  |   |  ||  |____|  |
| |   /    \/ |/ //   \   |  |  \|   |  |       |  |   |  ||   ____   |
| |  /     /    //     \  |  |       |  |       |  |   /  ||  |    |  |
| | /     / /  /|       \ |  |    /| |  |    /| |  |  /  / |  |    |  |
| |/_____/ // / |________\|  |___/ | |  |___/ | |  |,'  /  |  |    |  |
| |     / // /| |        /_________|/_________|/______,'  /____\  /____\
\ \    / // / | |       /|/ /_               ___  ___    _   _  _  _ ___
 \ \  /  / /| | |______/ | //_\  |  | |\| |/  |/\  | |_||_  |_)/_\(_` |
  \ \/______| | |________|/ | |  |_ | | | |\  |\/  | | ||_  |  | |._) |
   `.`.     | | |     ,','
     `.`.   | | |   ,','    _        _        _        _
       `.`-.| | |,-','     |.\      |.\      |.\      |.\  
         `-.| | |,-'        \\\      \\\      \\\      \\\ 
            | | |    ________\\\______\\\______\\\______\\\_____________
            | | |   | .--  __        __    ,--.        __   __   __| _  |
            | | |   | |-  /  \ |  | |  `   `--. | | | /  \ |  ` /  |(_` |
            | | |   | |   \__/ \_/| |      .__/ \/ \/ \__/ |    \__|._) |
            | | |   '---------------------------------------------------'
             \|/                  \\\ /|   \\\ /|   \\\ /|   \\\ /|
              V                  __\\V /  __\\V /  __\\V /  __\\V /
                                 \___O/   \___O/   \___O/   \___O/
                                     \/\      \/\      \/\      \/\
                                      \/\      \/\      \/\      \/\
                                       (O)      (O)      (O)      (O)
)";
    cout << " =======================================================================";


    cout << endl;
    cout << "모험가의 이름을 입력하세요 : ";
    string chrname;
    cin >> chrname;

    string monster_name = "가논돌프";
   
    Character chr(chrname);
    Character monster(monster_name);



    cout << endl;
    chr.showStatus();
    cout << endl;

    cout << "<직업을 선택해주세요>\n"
        << "|============================================|\n"
        << "|▶ 0. 전사 (STR + 10 / DEF + 10 / HP + 50)  |\n"
        << "|▶ 1. 마법사 (INT + 20 / MP + 50)           |\n"
        << "|▶ 2. 성기사 (DEF + 20 / HP + 25 / MP + 25) |\n"
        << "|============================================|\n";
    cout << endl;
    cout << "당신의 선택은? :" << endl;
    cin >> option;
    chr.chooseJobClass(option);

    cout << "모험은 시작됐다." << endl;
    cout << endl;
    cout << "운도 없군요ㅠㅠ 시작부터 최종보스를 만난 불쌍한 " << chrname << "........" << endl;
    cout << endl;
    cout << "야생의 대마왕 가논돌프가 나타났다! " << endl;
    
    cout << R"(
   , ,, ,                              
   | || |    ,/  _____  \.             
   \_||_/    ||_/     \_||             
     ||       \_| . . |_/              
     ||         |  L  |                
    ,||         |`==='|                
    |>|      ___`>  -<'___             
    |>|\    /             \            
    \>| \  /  ,    .    .  |           
     ||  \/  /| .  |  . |  |           
     ||\  ` / | ___|___ |  |     (     
  (( || `--'  | _______ |  |     ))  ( 
(  )\|| (  )\ | - --- - | -| (  ( \  ))
(\/  || ))/ ( | -- - -- |  | )) )  \(( 
 ( ()||((( ())|         |  |( (( () ))
)";

    while (true)
    {
        // 전투 돌입, 플레이어의 선택에 따라 진행. 몬스터를 죽이거나, 죽으면 끝 -> Save Data 저장

        cout << "<다음 동작을 선택해 주세요>\n"
            << "|===========================================|\n"
            << "|▶ 0. 자살 (게임 종료)                     |\n"
            << "|▶ 1. 이름 변경                            |\n"
            << "|▶ 2. Level Up!                            |\n"
            << "|▶ 3. 빨간 포션 줍기                       |\n"
            << "|▶ 4. 파란 포션 줍기                       |\n"
            << "|▶ 5. 빨간 포션을 사용합니다. (체력 5 회복)|\n"
            << "|▶ 6. 파란 포션을 사용합니다. (마나 5 회복)|\n"
            << "|▶ 7. 검술 수련 (STR 5 증가)               |\n"
            << "|▶ 8. 마법서 공부 (INT 5 증가)             |\n"
            << "|▶ 9. 연병장 뺑뻉이(DEF 5 증가)            |\n"
            << "|▶ 9. 상태창 오픈!                         |\n"
            << "|▶ 10. 공격!                               |\n"
            << "|▶ 11. 상태창!                               |\n"
            << "|===========================================|\n" << endl;


        cout << endl;
        cout << "당신의 선택은? :" << endl;
        cin >> option;

        if (option == 10) {
            // 플레이어의 공격
            int damage = chr.attack();
            // 몬스터를 공격하여 피해를 입힘
            monster.takeDamage(damage);
            /*cout << "몬스터에게" << damage << "의 피해를 입혔습니다!" << endl;*/
        }
        else {
            // 플레이어의 선택에 따른 동작 실행
            chr.manipulateCharacter(option);
        }

        // 몬스터 턴
        monster.monsterAttack(chr);

        // 몬스터 처치 여부 확인
        if (monster.getHp() <= 0) {
            cout << "몬스터를 처치했습니다! 축하합니다!" << endl;
            // 승리 처리
            chr.saveRecord(); // 게임 기록 저장
            cout << "게임을 종료합니다." << endl;
            break; // 게임 종료
        }

        // 플레이어 사망 여부 확인
        if (chr.getHp() <= 0 || chr.getMp() <= 0) {
            chr.saveRecord(); // 게임 기록 저장
            cout << "죽고 말았습니다..." << endl;
            cout << "게임을 종료합니다." << endl;
            break; // 게임 종료
        }
    }
    return 0;
}

