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
        cout << "������ �����մϴ�." << endl;
        saveRecord();
        exitGame();
        break;
    case 1:
        cout << "�̸��� �����մϴ�." << endl;
        cout << "���ο� �̸��� �Է��ϼ��� : ";
        cin >> newName;
        setName(newName);
        break;
    case 2:
        cout << "Level up!" << endl;
        levelUp();
        break;
    case 3:
        cout << "���� ������ ������ϴ�!";
        checkHpItem();
        break;
    case 4:
        cout << "�Ķ� ������ ������ϴ�!";
        checkMpItem();
        break;
    case 5:
        cout << "���������� ����մϴ�.";
        useHpItem();
        break;
    case 6:
        cout << "�Ķ������� ����մϴ�.";
        useMpItem();
        break;
    case 7:
        cout << "ü�� �Ʒ��� �����մϴ�.";
        hpTraining();
        break;
    case 8:
        cout << "��������� �����մϴ�.";
        mpTraining();
        break;
    case 9:
        cout << "���Ͷ� ����â!";
        showStatus();
        break;

    case 10:
        cout << "����!";
        attack();
        break;
    }
    return option;
}

void Character::changeName(string newName) 
{
    setName(newName);
    cout << "���� �̸��� : " << newName << endl;
}

void Character::levelUp()
{
    m_level++;
    m_str += 5;
    m_int += 5;
    cout << " ���� ����: " << m_level << endl;
    cout << "���ݷ�: " << m_str << endl;
    cout << "����:" << m_int << endl;
}


void Character::checkHpItem()
{
    m_hp_item_num++;
    cout << "���� ���������� ���� " << m_hp_item_num << endl;
}

void Character::checkMpItem()
{
    m_mp_item_num++;
    cout << "���� �Ķ������� ����: " << m_mp_item_num << endl;

}
    

void Character::useHpItem()
{
    if (m_hp_item_num > 0) {
        cout << "���������� ����մϴ�." << endl;
        m_hp_item_num--; // ������ ������ ���ҽ�Ŵ
        m_hp += 5;
        cout << "ü���� �����߽��ϴ�. ���� ü�� : " << m_hp;
        cout << " ���� ���� ������ ��: " << m_hp_item_num << endl;
    }
    else {
        cout << "������ ���������� �����ϴ�." << endl;
    }
}

void Character::useMpItem()
{
    if (m_mp_item_num > 0) 
    {
        cout << "�Ķ������� ����մϴ�." << endl;
        m_mp_item_num--; // ������ ������ ���ҽ�Ŵ
        m_mp += 5;
        cout << "������ �����߽��ϴ�. ���� ���� : " << m_mp;
        cout << "���� �Ķ������� ��: " << m_mp_item_num << endl;
    }
    else 
    {
        cout << "������ �Ķ������� �����ϴ�." << endl;
    }
}
/*
void character::attack() {
     ������ �������� ����Ͽ� ���濡�� ����
    int damage = rand() % 10 + 1; // 1���� 10 ������ ������ ������
    m_opponent->defend(damage); // ���濡�� ������ ����
}
*/


void Character::defend(int damage) {
    // ��������ŭ ü���� ���ҽ�Ŵ
    m_hp -= damage;
    if (m_hp < 0) {
        m_hp = 0;
    }
    cout << m_name << "�� " << damage << "�� ���ظ� �Ծ����ϴ�! ���� ü��: " << m_hp << endl;
}

void Character::showStatus() 
{
    cout << "ĳ���� �̸�: " << m_name << endl;
    cout << "����: " << m_level << endl;
    cout << "������ �������� ����: " << m_hp_item_num << endl;
    cout << "������ �Ķ����� ����: " << m_mp_item_num << endl;
    cout << "���ݷ� :" << m_str << endl;
    cout << "���� ���ݷ� : " << m_int << endl;
    cout << "HP : " << m_hp << endl;
    cout << "MP : " << m_mp << endl;
}

void Character::exitGame() 
{
    exit(0);
}

void Character::hpTraining()
{
    cout << " HP�� 1 �ö����ϴ�! ���� HP : " << m_hp++ << endl;
}

void Character::mpTraining()
{
    cout << " MP�� 1 �ö����ϴ�! ���� MP : " << m_mp++ << endl;
}




void Character::saveRecord()
{
    // ������Ʈ ���� ���� record.txt ������ �����ϰ� �����մϴ�.
    string filePath = "record.txt";
    ofstream outFile(filePath, ios::app); // ���� ���� ������ ����
    if (outFile.is_open())
    {
        outFile << " =====================" << endl;
        outFile << "ĳ���� �̸�: " << m_name << endl;
        outFile << "����: " << m_level << endl;
        outFile << "������ �������� ����: " << m_hp_item_num << endl;
        outFile << "������ �Ķ����� ����: " << m_mp_item_num << endl;
        outFile << "���ݷ� :" << m_str << endl;
        outFile << "���� ���ݷ� : " << m_int << endl;
        outFile << "HP : " << m_hp << endl;
        outFile << "MP : " << m_mp << endl;
        outFile << " =====================";
        outFile.close(); // ������ ����
        cout << "���� ����� ����Ǿ����ϴ�." << endl;

    }
    else
    {
        cout << "������ �� �� �����ϴ�." << endl;
    }
}









