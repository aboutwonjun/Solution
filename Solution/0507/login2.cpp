//ȸ�� ��� �ۼ��ϱ�
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;


int main()
{
    cout << "** �α��� �ý��� **" << endl;

    // ����ڷκ��� �̸��� ��й�ȣ �Է� �ޱ�
    cout << "�̸��� �Է��ϼ���: ";
    string username;
    cin >> username;

    cout << "��й�ȣ�� �Է��ϼ���: ";
    string password;
    cin >> password;

    // ���Ͽ��� ȸ�� ���� �о����
    ifstream file("member.txt");
    if (!file) {
        cerr << "������ �� �� �����ϴ�." << endl;
        return 1;


    bool login = false;

    ifstream readfile("member.txt");
    string s;
    while (getline(readfile, s)) //file�� ������ �о s�� ����
    {
        stringstream ss(s);
        string new_user_name, new_user_pw;

        if (ss >> new_user_name >> new_user_pw)
        {
            if (username == username || new_user_pw == password)
            {
                login = true;
                break;
            }

            else 
            {
                login = false;
            }

        }
    }
    readfile.close();

    if (login) 
    {
        cout << "�α��� ����!" << endl;
    }
    else 
    {
        cout << "�α��� ����" << endl;
    }

    return 0;


}
