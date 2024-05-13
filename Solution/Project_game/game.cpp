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
        cout << "게임을 종료합니다.";
        exitGame();
        break;
    case 1:
        cout << "이름을 변경합니다." << endl;
        cout << "새로운 이름을 입력하세요 : ";
        cin >> newName;
        setName(newName);
        break;
    case 2:
        cout << "level up!";
        levelUp();
        break;
    case 3:
        cout << "item을 줍습니다.";
        pickUpItem();
        break;
    case 4:
        cout << "item을 사용합니다.";
        useItem();
        break;
    case 5:
        cout << "나와라 상태창!";
        showStatus();
        break;
    }
    return option;
}

void Character::changeName(string newName) {
    setName(newName);
    cout << "너의 이름은 : " << newName << endl;
}

void Character::levelUp() {
    m_level++;
    cout << " 현재 레벨: " << m_level << endl;
}

void Character::pickUpItem() {
    m_item_num++;
    cout << "현재 아이템 수: " << m_item_num << endl;
}

void Character::useItem() {
    if (m_item_num > 0) {
        cout << "아이템을 사용합니다." << endl;
        m_item_num--; // 아이템 개수를 감소시킴
        cout << "아이템을 사용 후 현재 아이템 수: " << m_item_num << endl;
    }
    else {
        cout << "보유한 아이템이 없습니다." << endl;
    }
}

void Character::showStatus() {
    cout << "캐릭터 이름: " << m_name << endl;
    cout << "레벨: " << m_level << endl;
    cout << "보유 아이템 수: " << m_item_num << endl;
}

void Character::exitGame() {
    cout << "그의 여정은 끝났습니다." << endl;
    exit(0);
}
