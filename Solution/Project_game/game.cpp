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
    this->m_jobClass = "����";

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
        cout << "�Ķ� ������ ����մϴ�.";
        useMpItem();
        break;
    case 7:
        cout << "�˼��� �����߽��ϴ�.";
        strTraining();
        break;
    case 8:
        cout << "�������� �����߽��ϴ�.";
        intTraining();
        break;
    case 9 :
        cout << "�������� �پ����ϴ�.";
        defTraining();
        break;
    case 10 :
        cout << "����!";
        attack();

        break;
    case 11:
        cout << "���Ͷ� ����â!";
        showStatus();
        break;

    //case 10:
    //    cout << "����!";
    //    attack();
    //    break;
    }
    return option;
}

// �̸� ���� �Լ�. 
void Character::changeName(string newName) 
{
    setName(newName);
    cout << "���� �̸��� : " << newName << endl;
}

//Level Up
//���ÿ� ���� �ɷ�ġ ����

void Character::levelUp()
{
    m_level++;
    m_str += 5;
    m_int += 5;
    m_str += 1;
    m_int += 1;
    m_def += 1;
    cout << " ���� ����: " << m_level << endl;
    cout << "HP : " << m_hp << endl;
    cout << "MP : " << m_mp << endl;
    cout << "STR :" << m_str << endl;
    cout << "INT : " << m_int << endl;
    cout << "DEF : " << m_def << endl;
}

//���� ������ �ִ� HP ������ Ȯ��

void Character::checkHpItem()
{
    m_hp_item_num++;
    cout << "���� ���������� ���� " << m_hp_item_num << endl;
}

//���� ������ �ִ� MP ������ Ȯ��
void Character::checkMpItem()
{
    m_mp_item_num++;
    cout << "���� �Ķ������� ����: " << m_mp_item_num << endl;

}
    
// HP ������ ���
// ü������
// ����ó�� : ������ X
void Character::useHpItem()
{
    if (m_hp_item_num > 0) {
        cout << "���������� ����մϴ�." << endl;
        m_hp_item_num--; // ������ ������ ���ҽ�Ŵ
        m_hp += 20;
        cout << "ü���� �����߽��ϴ�. ���� ü�� : " << m_hp;
        cout << " ���� ���� ������ ��: " << m_hp_item_num << endl;
    }
    else {
        cout << "������ ���������� �����ϴ�." << endl;
    }
}


// MP ������ ���
// ���� ����
// ����ó�� : ������ X

void Character::useMpItem()
{
    if (m_mp_item_num > 0) 
    {
        cout << "�Ķ������� ����մϴ�." << endl;
        m_mp_item_num--; // ������ ������ ���ҽ�Ŵ
        m_mp += 20;
        cout << "������ �����߽��ϴ�. ���� ���� : " << m_mp;
        cout << "���� �Ķ������� ��: " << m_mp_item_num << endl;
    }
    else 
    {
        cout << "������ �Ķ������� �����ϴ�." << endl;
    }
}


int Character::attack() 
{
    // STR + ���� �������� ���� ���濡�� ����
    int damage = rand() % 10 + 1; // 1���� 10 ������ ������ ������

    if (this->m_jobClass == "����")
    {
        damage +=  m_str;
    }

    else if (this->m_jobClass == "������")
    {
        damage += m_int;
    }
    else // ������� ��� 
    {
        damage += m_def;
    }

    return damage;
}




void Character::monsterAttack(Character& target) {
    int damage = rand() % 30 + 1;

    if (damage >= 20) {
        cout << "�������� Ư�� ����!" << endl;
        damage *= 1.5; // Ư�� ������ ������ 1.5��
    }
    else {
        cout << "�������� �Ϲ� ����!" << endl;
    }

    target.takeDamage(damage); // ���Ͱ� �����ϴ� ��󿡰� ������ ����

}

//���� �� �Լ� 
//void Character::monsterHeal()
//{
//    if (m_hp <= 10) 
//    {
//        // ġ�� ����
//        m_hp += 20; // ���� ��� 20��ŭ ȸ���Ѵٰ� ����
//        cout << getName() << "�� ġ�Ḧ �޾� " << 20 << "��ŭ ü���� ȸ���մϴ�. ���� ü��: " << m_hp << endl;
//    }
//}

void Character::takeDamage(int damage) 
{
    m_hp -= damage;

    if (m_hp < 0) {
        m_hp = 0;
    }

    cout << m_name << "�� " << damage << "�� ���ظ� �Ծ����ϴ�!" << m_name << "�� ���� ü�� : " << m_hp << endl;
}




// ����â �����ֱ� 
void Character::showStatus() 
{
    cout << "ĳ���� �̸�: " << m_name << endl;
    cout << "���� Ŭ����: " << m_jobClass << endl;
    cout << "����: " << m_level << endl;
    cout << "������ �������� ����: " << m_hp_item_num << endl;
    cout << "������ �Ķ����� ����: " << m_mp_item_num << endl;
    cout << "STR :" << m_str << endl;
    cout << "INT : " << m_int << endl;
    cout << "DEF : " << m_def << endl;
    cout << "HP : " << m_hp << endl;
    cout << "MP : " << m_mp << endl;
}

// ���� ����
void Character::exitGame() 
{
    exit(0);
}

//STR ���� 
void Character::strTraining()
{
    m_str += 5;
    cout << " STR�� �����߽��ϴ�! ���� STR : " << m_str << endl;

}

// INT ���� 
void Character::intTraining()
{
    m_int += 5;
    cout << " INT�� �����߽��ϴ�! ���� INT : " << m_int << endl;
}

//DEF ���� 
void Character::defTraining()
{
    cout << " DEF�� 1 �����߽��ϴ�! ���� DEF : " << m_def++ << endl;
}


// ���� ����
// �������� ���� �ʱ� �ɷ�ġ ���� 
int Character::chooseJobClass(int option)
{
    switch (option)
    {
    case 0:
        cout << "����� �����մϴ�!" << endl;
        cout << "STR + 10 / DEF + 10 / HP + 50"<< endl;
        m_str += 10;
        m_def += 10;
        m_hp += 50;
        m_jobClass = "����";
        break;

    case 1:
        cout << "������� �����մϴ�!" << endl;
        cout << "INT + 20 / MP + 50" << endl;
        m_int += 20;
        m_mp += 50;
        m_jobClass = "������";
        break;

    case 2:
        cout << "������ �����մϴ�!" << endl;
        cout << "DEF + 20 / HP + 25 / MP + 25" << endl;
        m_def += 20;
        m_hp += 25;
        m_mp += 25;
        m_jobClass = "�����";
        break;
    }
    return option;

}


// Save ���� 
void Character::saveRecord()
{
    // ������Ʈ ���� ���� record.txt ������ �����ϰ� ����. 
    string filePath = "record.txt";
    ofstream outFile(filePath, ios::app); // ���� ���� ������ ����
    if (outFile.is_open())
    {
        outFile << " =====================" << endl;
        outFile << "ĳ���� �̸�: " << m_name << endl;
        outFile << "���� Ŭ����: " << m_jobClass << endl;
        outFile << "����: " << m_level << endl;
        outFile << "������ �������� ����: " << m_hp_item_num << endl;
        outFile << "������ �Ķ����� ����: " << m_mp_item_num << endl;
        outFile << "STR :" << m_str << endl;
        outFile << "INT : " << m_int << endl;
        outFile << "DEF : " << m_def << endl;
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









