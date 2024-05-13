#include "game.h"

Character::Character(string name) {
    this->m_name = name;
    this->m_level = 0;
    this->m_item_num = 0;
}

string Character::getName() {
    return m_name;
}

int Character::getLevel() {
    return m_level;
}

int Character::getItemNum() {
    return m_item_num;
}

void Character::setName(string name) {
    this->m_name = name;
}

void Character::setLevel(int level) {
    this->m_level = level;
}

void Character::setItemNum(int item_num) {
    this->m_item_num = item_num;
}

int Character::manipulateCharacter(int option) {
    string newName;
    switch (option) {
    case 0:
        cout << "������ �����մϴ�.";
        exitGame();
        break;
    case 1:
        cout << "�̸��� �����մϴ�." << endl;
        cout << "���ο� �̸��� �Է��ϼ��� : ";
        cin >> newName;
        setName(newName);
        break;
    case 2:
        cout << "level up!";
        levelUp();
        break;
    case 3:
        cout << "item�� �ݽ��ϴ�.";
        pickUpItem();
        break;
    case 4:
        cout << "item�� ����մϴ�.";
        useItem();
        break;
    case 5:
        cout << "���Ͷ� ����â!";
        showStatus();
        break;
    }
    return option;
}

void Character::changeName(string newName) {
    setName(newName);
    cout << "���� �̸��� : " << newName << endl;
}

void Character::levelUp() {
    m_level++;
    cout << " ���� ����: " << m_level << endl;
}

void Character::pickUpItem() {
    m_item_num++;
    cout << "���� ������ ��: " << m_item_num << endl;
}

void Character::useItem() {
    if (m_item_num > 0) {
        cout << "�������� ����մϴ�." << endl;
        m_item_num--; // ������ ������ ���ҽ�Ŵ
        cout << "�������� ��� �� ���� ������ ��: " << m_item_num << endl;
    }
    else {
        cout << "������ �������� �����ϴ�." << endl;
    }
}

void Character::showStatus() {
    cout << "ĳ���� �̸�: " << m_name << endl;
    cout << "����: " << m_level << endl;
    cout << "���� ������ ��: " << m_item_num << endl;
}

void Character::exitGame() {
    cout << "���� ������ �������ϴ�." << endl;
    exit(0);
}
