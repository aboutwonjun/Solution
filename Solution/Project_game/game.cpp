#include "game.h"
#include <fstream>
#include <iostream>

using namespace std;

Character::Character(string name)
{
    this->m_name = name;
    this->m_level = 1;
    this->m_hp = 100;
    this->m_mp = 50;
    this->m_str = 10;
    this->m_int = 10;
    this->m_def = 10;
    this->m_hp_item_num = 1;
    this->m_mp_item_num = 1;
    this->m_jobClass = "무직";

}



//Getter 

string Character::getName() 
{
    return m_name;
}

int Character::getLevel() 
{
    return m_level;
}

int Character::get_hp_item_num()
{
    return m_hp_item_num;
}

int Character::get_mp_item_num()
{
    return m_mp_item_num;
}

int Character::getHp() 
{
    return m_hp;
}

int Character::getMp()
{
    return m_mp;
}

int Character::getDef()
{
    return m_def;
}

string Character::getJobClass()
{
    return m_jobClass;
}


//Setter

void Character::setName(string name) 
{
    this->m_name = name;
}

void Character::setLevel(int level) 
{
    this->m_level = level;
}

void Character::set_hp_item_num(int hp_item_num)
{
    this->m_hp_item_num = hp_item_num;
}


void Character::set_mp_item_num(int mp_item_num)
{
    this->m_mp_item_num = mp_item_num;
}

void Character::setHp(int hp)
{
    this->m_hp = hp;
}

void Character::setMp(int mp)
{
    this->m_mp = mp;
}

void Character::setDef(int def)
{
    this->m_def = def;
}

void Character::setJobClass(string jobClass)
{

    this->m_jobClass = jobClass;
}


int Character::manipulateCharacter(int option) 
{
    string newName;
    switch (option) 
    {
    case 0:
        cout << "게임을 종료합니다." << endl;
        saveRecord();
        exitGame();
        break;
    case 1:
        cout << "이름을 변경합니다." << endl;
        cout << "새로운 이름을 입력하세요 : ";
        cin >> newName;
        setName(newName);
        break;
    case 2:
        cout << "Level up!" << endl;
        levelUp();
        break;
    case 3:
        cout << "빨간 포션을 얻었습니다!";
        checkHpItem();
        break;
    case 4:
        cout << "파란 포션을 얻었습니다!";
        checkMpItem();
        break;
    case 5:
        cout << "빨간포션을 사용합니다.";
        useHpItem();
        break;
    case 6:
        cout << "파란 포션을 사용합니다.";
        useMpItem();
        break;
    case 7:
        cout << "검술을 수련했습니다.";
        strTraining();
        break;
    case 8:
        cout << "마법서를 공부했습니다.";
        intTraining();
        break;
    case 9 :
        cout << "연병장을 뛰었습니다.";
        defTraining();
        break;
    case 10 :
        cout << "공격!";
        attack();

        break;
    case 11:
        cout << "나와라 상태창!";
        showStatus();
        break;

    //case 10:
    //    cout << "공격!";
    //    attack();
    //    break;
    }
    return option;
}

// 이름 변경 함수. 
void Character::changeName(string newName) 
{
    setName(newName);
    cout << "너의 이름은 : " << newName << endl;
}

//Level Up
//동시에 각종 능력치 증가

void Character::levelUp()
{
    m_level++;
    m_str += 5;
    m_int += 5;
    m_str += 1;
    m_int += 1;
    m_def += 1;
    cout << " 현재 레벨: " << m_level << endl;
    cout << "HP : " << m_hp << endl;
    cout << "MP : " << m_mp << endl;
    cout << "STR :" << m_str << endl;
    cout << "INT : " << m_int << endl;
    cout << "DEF : " << m_def << endl;
}

//현재 가지고 있는 HP 아이템 확인

void Character::checkHpItem()
{
    m_hp_item_num++;
    cout << "현재 빨간포션의 개수 " << m_hp_item_num << endl;
}

//현재 가지고 있는 MP 아이템 확인
void Character::checkMpItem()
{
    m_mp_item_num++;
    cout << "현재 파란포션의 개수: " << m_mp_item_num << endl;

}
    
// HP 아이템 사용
// 체력증가
// 예외처리 : 없으면 X
void Character::useHpItem()
{
    if (m_hp_item_num > 0) {
        cout << "빨간포션을 사용합니다." << endl;
        m_hp_item_num--; // 아이템 개수를 감소시킴
        m_hp += 20;
        cout << "체력이 증가했습니다. 현재 체력 : " << m_hp;
        cout << " 남은 빨간 포션의 수: " << m_hp_item_num << endl;
    }
    else {
        cout << "보유한 빨간포션이 없습니다." << endl;
    }
}


// MP 아이템 사용
// 마나 증가
// 예외처리 : 없으면 X

void Character::useMpItem()
{
    if (m_mp_item_num > 0) 
    {
        cout << "파란포션을 사용합니다." << endl;
        m_mp_item_num--; // 아이템 개수를 감소시킴
        m_mp += 20;
        cout << "마나가 증가했습니다. 현재 마나 : " << m_mp;
        cout << "남은 파란포션의 수: " << m_mp_item_num << endl;
    }
    else 
    {
        cout << "보유한 파란포션이 없습니다." << endl;
    }
}


int Character::attack() 
{
    // STR + 랜덤 데미지를 더해 상대방에게 가해
    int damage = rand() % 10 + 1; // 1에서 10 사이의 랜덤한 데미지

    if (this->m_jobClass == "전사")
    {
        damage +=  m_str;
    }

    else if (this->m_jobClass == "마법사")
    {
        damage += m_int;
    }
    else // 성기사일 경우 
    {
        damage += m_def;
    }

    return damage;
}




void Character::monsterAttack(Character& target) {
    int damage = rand() % 30 + 1;

    if (damage >= 20) {
        cout << "가논돌프의 특수 공격!" << endl;
        damage *= 1.5; // 특수 공격은 데미지 1.5배
    }
    else {
        cout << "가논돌프의 일반 공격!" << endl;
    }

    target.takeDamage(damage); // 몬스터가 공격하는 대상에게 데미지 적용

}

//몬스터 힐 함수 
//void Character::monsterHeal()
//{
//    if (m_hp <= 10) 
//    {
//        // 치료 실행
//        m_hp += 20; // 예를 들어 20만큼 회복한다고 가정
//        cout << getName() << "가 치료를 받아 " << 20 << "만큼 체력을 회복합니다. 현재 체력: " << m_hp << endl;
//    }
//}

void Character::takeDamage(int damage) 
{
    m_hp -= damage;

    if (m_hp < 0) {
        m_hp = 0;
    }

    cout << m_name << "가 " << damage << "의 피해를 입었습니다!" << m_name << "의 현재 체력 : " << m_hp << endl;
}




// 상태창 보여주기 
void Character::showStatus() 
{
    cout << "캐릭터 이름: " << m_name << endl;
    cout << "직업 클래스: " << m_jobClass << endl;
    cout << "레벨: " << m_level << endl;
    cout << "보유한 빨간포션 개수: " << m_hp_item_num << endl;
    cout << "보유한 파란포션 개수: " << m_mp_item_num << endl;
    cout << "STR :" << m_str << endl;
    cout << "INT : " << m_int << endl;
    cout << "DEF : " << m_def << endl;
    cout << "HP : " << m_hp << endl;
    cout << "MP : " << m_mp << endl;
}

// 게임 종료
void Character::exitGame() 
{
    exit(0);
}

//STR 증가 
void Character::strTraining()
{
    m_str += 5;
    cout << " STR이 증가했습니다! 현재 STR : " << m_str << endl;

}

// INT 증가 
void Character::intTraining()
{
    m_int += 5;
    cout << " INT가 증가했습니다! 현재 INT : " << m_int << endl;
}

//DEF 증가 
void Character::defTraining()
{
    cout << " DEF가 1 증가했습니다! 현재 DEF : " << m_def++ << endl;
}


// 직업 선택
// 선택지에 따라 초기 능력치 변경 
int Character::chooseJobClass(int option)
{
    switch (option)
    {
    case 0:
        cout << "전사로 전직합니다!" << endl;
        cout << "STR + 10 / DEF + 10 / HP + 50"<< endl;
        m_str += 10;
        m_def += 10;
        m_hp += 50;
        m_jobClass = "전사";
        break;

    case 1:
        cout << "마법사로 전직합니다!" << endl;
        cout << "INT + 20 / MP + 50" << endl;
        m_int += 20;
        m_mp += 50;
        m_jobClass = "마법사";
        break;

    case 2:
        cout << "성기사로 전직합니다!" << endl;
        cout << "DEF + 20 / HP + 25 / MP + 25" << endl;
        m_def += 20;
        m_hp += 25;
        m_mp += 25;
        m_jobClass = "성기사";
        break;
    }
    return option;

}


// Save 저장 
void Character::saveRecord()
{
    // 프로젝트 폴더 내에 record.txt 파일을 생성하고 저장. 
    string filePath = "record.txt";
    ofstream outFile(filePath, ios::app); // 쓰기 모드로 파일을 열기
    if (outFile.is_open())
    {
        outFile << " =====================" << endl;
        outFile << "캐릭터 이름: " << m_name << endl;
        outFile << "직업 클래스: " << m_jobClass << endl;
        outFile << "레벨: " << m_level << endl;
        outFile << "보유한 빨간포션 개수: " << m_hp_item_num << endl;
        outFile << "보유한 파란포션 개수: " << m_mp_item_num << endl;
        outFile << "STR :" << m_str << endl;
        outFile << "INT : " << m_int << endl;
        outFile << "DEF : " << m_def << endl;
        outFile << "HP : " << m_hp << endl;
        outFile << "MP : " << m_mp << endl;
        outFile << " =====================";
        outFile.close(); // 파일을 닫음
        cout << "최종 기록이 저장되었습니다." << endl;

    }
    else
    {
        cout << "파일을 열 수 없습니다." << endl;
    }
}









