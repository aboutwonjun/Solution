#include <iostream>
#include <string>
using namespace std;

class character
{
public:
    //������ ����
    character(string name)
    {
        this->m_name = name;
        this->m_level = 0;
        this->m_item_num = 0;
    }

    //getter �Լ� ���� 
    string getName()
    {
        return m_name;
    }
    int getlevel()
    {
        return m_level;
    }
    int getitem_num()
    {
        return m_item_num;
    }
    //setter �Լ� ���� 
    void setName(string name)
    {
        this->m_name = name;
    }
    void setlevel(int level)
    {
        this->m_level = level;
    }
    void setItem_num(int item_num)
    {
        this->m_item_num = item_num;
    }

    // �޼ҵ� 
    // ����� ���� �Լ� ����� �ڵ� ����. ����!!!!
    int manipulateCharacter(int option);

    // �̸� ���� �Լ� 
    void changeName(string newName)
    {
        setName(newName);
        cout << "���� �̸��� : " << newName << endl;
    }
    // ������ �Լ�
    void levelUp()
    {
        m_level++;
        cout << " ���� ����: " << m_level << endl;
    }

    // item �ݴ� �Լ�
    void pickUpItem()
    {
        m_item_num++;
        cout << "���� ������ ��: " << m_item_num << endl;
    }

    // item ��� �Լ�
    void useItem()
    {
        if (m_item_num > 0)
        {
            cout << "�������� ����մϴ�." << endl;
            m_item_num--; // ������ ������ ���ҽ�Ŵ
            cout << "�������� ��� �� ���� ������ ��: " << m_item_num << endl;
        }
        else
        {
            cout << "������ �������� �����ϴ�." << endl;
        }
    }


    // ����â ��� �Լ� 
    void showStatus()
    {
        cout << "ĳ���� �̸�: " << m_name << endl;
        cout << "����: " << m_level << endl;
        cout << "���� ������ ��: " << m_item_num << endl;
    }

    // ���� �Լ� 
    void exitGame()
    {
        cout << "���� ������ �������ϴ�." << endl;
        exit(0);
    }

private:
    string m_name;
    int m_level;
    int m_item_num;
};



//����ġ �� 
int character::manipulateCharacter(int option)
{
    string newName;
	switch (option)
	{
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



int main()
{
	string user_name;
	int option;
	cout << "** ���ػ� Ű��� ^0^ **" << endl;


	cout << "���ػ���.. ������ ������ ���۵Ǿ���." << endl;
	cout << "���ػ��� �̸��� �Է��ϼ��� : ";
	string chrname;
	cin >> chrname;

	character chr(chrname);

	cout << chrname << "�� �����͸���." << endl;
	chr.showStatus();

	while (1)
	{
		cout << "\n"
            << "��� �����ų ���ΰ�?\n"
			<< "0. ���� (���� ����)\n"
			<< "1. �̸� ����\n"
			<< "2. Level Up!\n"
			<< "3. Item �ݱ�\n"
			<< "4. Item ���\n"
			<< "5. ����â ����!" << endl;

		cout << "����� ������? :" << endl;
		cin >> option;
		chr.manipulateCharacter(option);

		if (option == 0)
		{
			break;
		}
	}
}


