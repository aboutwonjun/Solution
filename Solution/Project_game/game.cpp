#include "game.h"
#include <fstream>
#include <iostream>

Character::Character(string name) 
{
    this->m_name = name;
    this->m_level = 0;
    this->m_hp = 100;
    this->m_mp = 50;
    this->m_str = 5;
    this->m_int = 5;
    this->m_hp_item_num = 0;
    this->m_mp_item_num = 0;
}

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
        cout << "파란포션을 사용합니다.";
        useMpItem();
        break;
    case 7:
        cout << "체력 훈련을 수행합니다.";
        hpTraining();
        break;
    case 8:
        cout << "운기조식을 수행합니다.";
        mpTraining();
        break;
    case 9:
        cout << "나와라 상태창!";
        showStatus();
        break;

    case 10:
        cout << "공격!";
        attack();
        break;
    }
    return option;
}

void Character::changeName(string newName) 
{
    setName(newName);
    cout << "너의 이름은 : " << newName << endl;
}

void Character::levelUp()
{
    m_level++;
    m_str += 5;
    m_int += 5;
    cout << " 현재 레벨: " << m_level << endl;
    cout << "공격력: " << m_str << endl;
    cout << "지력:" << m_int << endl;
}


void Character::checkHpItem()
{
    m_hp_item_num++;
    cout << "현재 빨간포션의 개수 " << m_hp_item_num << endl;
}

void Character::checkMpItem()
{
    m_mp_item_num++;
    cout << "현재 파란포션의 개수: " << m_mp_item_num << endl;

}
    

void Character::useHpItem()
{
    if (m_hp_item_num > 0) {
        cout << "빨간포션을 사용합니다." << endl;
        m_hp_item_num--; // 아이템 개수를 감소시킴
        m_hp += 5;
        cout << "체력이 증가했습니다. 현재 체력 : " << m_hp;
        cout << " 남은 빨간 포션의 수: " << m_hp_item_num << endl;
    }
    else {
        cout << "보유한 빨간포션이 없습니다." << endl;
    }
}

void Character::useMpItem()
{
    if (m_mp_item_num > 0) 
    {
        cout << "파란포션을 사용합니다." << endl;
        m_mp_item_num--; // 아이템 개수를 감소시킴
        m_mp += 5;
        cout << "마나가 증가했습니다. 현재 마나 : " << m_mp;
        cout << "남은 파란포션의 수: " << m_mp_item_num << endl;
    }
    else 
    {
        cout << "보유한 파란포션이 없습니다." << endl;
    }
}
/*
void character::attack() {
     랜덤한 데미지를 계산하여 상대방에게 입힘
    int damage = rand() % 10 + 1; // 1에서 10 사이의 랜덤한 데미지
    m_opponent->defend(damage); // 상대방에게 공격을 가함
}
*/


void Character::defend(int damage) {
    // 데미지만큼 체력을 감소시킴
    m_hp -= damage;
    if (m_hp < 0) {
        m_hp = 0;
    }
    cout << m_name << "가 " << damage << "의 피해를 입었습니다! 현재 체력: " << m_hp << endl;
}

void Character::showStatus() 
{
    cout << "캐릭터 이름: " << m_name << endl;
    cout << "레벨: " << m_level << endl;
    cout << "보유한 빨간포션 개수: " << m_hp_item_num << endl;
    cout << "보유한 파란포션 개수: " << m_mp_item_num << endl;
    cout << "공격력 :" << m_str << endl;
    cout << "마법 공격력 : " << m_int << endl;
    cout << "HP : " << m_hp << endl;
    cout << "MP : " << m_mp << endl;
}

void Character::exitGame() 
{
    exit(0);
}

void Character::hpTraining()
{
    cout << " HP가 1 올랐습니다! 현재 HP : " << m_hp++ << endl;
}

void Character::mpTraining()
{
    cout << " MP가 1 올랐습니다! 현재 MP : " << m_mp++ << endl;
}




void Character::saveRecord()
{
    // 프로젝트 폴더 내에 record.txt 파일을 생성하고 저장합니다.
    string filePath = "record.txt";
    ofstream outFile(filePath, ios::app); // 쓰기 모드로 파일을 열기
    if (outFile.is_open())
    {
        outFile << " =====================" << endl;
        outFile << "캐릭터 이름: " << m_name << endl;
        outFile << "레벨: " << m_level << endl;
        outFile << "보유한 빨간포션 개수: " << m_hp_item_num << endl;
        outFile << "보유한 파란포션 개수: " << m_mp_item_num << endl;
        outFile << "공격력 :" << m_str << endl;
        outFile << "마법 공격력 : " << m_int << endl;
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









