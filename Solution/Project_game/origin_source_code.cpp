#include <iostream>
#include <string>
using namespace std;

class character
{
public:
    //생성자 선언
    character(string name)
    {
        this->m_name = name;
        this->m_level = 0;
        this->m_item_num = 0;
    }

    //getter 함수 생성 
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
    //setter 함수 생성 
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

    // 메소드 
    // 사용자 선택 함수 나경님 코드 참고. 감사!!!!
    int manipulateCharacter(int option);

    // 이름 변경 함수 
    void changeName(string newName)
    {
        setName(newName);
        cout << "너의 이름은 : " << newName << endl;
    }
    // 레벨업 함수
    void levelUp()
    {
        m_level++;
        cout << " 현재 레벨: " << m_level << endl;
    }

    // item 줍는 함수
    void pickUpItem()
    {
        m_item_num++;
        cout << "현재 아이템 수: " << m_item_num << endl;
    }

    // item 사용 함수
    void useItem()
    {
        if (m_item_num > 0)
        {
            cout << "아이템을 사용합니다." << endl;
            m_item_num--; // 아이템 개수를 감소시킴
            cout << "아이템을 사용 후 현재 아이템 수: " << m_item_num << endl;
        }
        else
        {
            cout << "보유한 아이템이 없습니다." << endl;
        }
    }


    // 상태창 사용 함수 
    void showStatus()
    {
        cout << "캐릭터 이름: " << m_name << endl;
        cout << "레벨: " << m_level << endl;
        cout << "보유 아이템 수: " << m_item_num << endl;
    }

    // 종료 함수 
    void exitGame()
    {
        cout << "그의 여정은 끝났습니다." << endl;
        exit(0);
    }

private:
    string m_name;
    int m_level;
    int m_item_num;
};



//스위치 문 
int character::manipulateCharacter(int option)
{
    string newName;
	switch (option)
	{
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



int main()
{
	string user_name;
	int option;
	cout << "** 취준생 키우기 ^0^ **" << endl;


	cout << "취준생의.. 괴랄한 여정은 시작되었다." << endl;
	cout << "취준생의 이름을 입력하세요 : ";
	string chrname;
	cin >> chrname;

	character chr(chrname);

	cout << chrname << "은 빈털터리다." << endl;
	chr.showStatus();

	while (1)
	{
		cout << "\n"
            << "어떻게 성장시킬 것인가?\n"
			<< "0. 죽음 (게임 종료)\n"
			<< "1. 이름 변경\n"
			<< "2. Level Up!\n"
			<< "3. Item 줍기\n"
			<< "4. Item 사용\n"
			<< "5. 상태창 오픈!" << endl;

		cout << "당신의 선택은? :" << endl;
		cin >> option;
		chr.manipulateCharacter(option);

		if (option == 0)
		{
			break;
		}
	}
}


