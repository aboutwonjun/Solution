
// �α��� ������, ����ڿ��� ��ȭ��ȣ�� �Է��ϼ����� �޼����� ����� �� ��ȭ��ȣ �Է¹ޱ�
// ����ڷκ��� �Է� ���� ��ȭ��ȣ�� �̸��� �Բ� member_tel.txt�� ����ϱ�
// ���ο� ����� �α��� ���� �� member_tel.txt�� ��ȭ��ȣ �߰��ϱ� 
// member_tel.txt�� �̹� �����ϴ� ����� �α��ν� ��ȭ��ȣ �����ϱ� 



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
    ifstream file("member_tel.txt");

    string s;

    while (getline(file, s)) 
    {
        stringstream ss(s);
        string stored_username, stored_password, stored_tel;

        if (ss >> stored_username >> stored_password >> stored_tel)
        {
            string tel;
            if (username == stored_username && password == stored_password)
            {
   
                cout << "�α��� ����!" << endl;

                //�α��� ������ ��ȭ��ȣ�� �Է¹ޱ�
                cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
                cin >> tel;

                // �̸��� ��ȭ��ȣ���� membel_tel.txt�� �Է��ϱ� 
                ofstream tel_file("member_tel.txt");
                tel_file << stored_username << " " << tel << endl;
                tel_file.close();

            }

            else if (username == stored_username && stored_tel != tel)
            {
                // �̸��� ������ ��ȣ�� �ٸ� ��� �Է¹��� ��ȭ��ȣ �߰��ϱ�
                cout << "�̸��� �̹� �����մϴ�. ��ȭ��ȣ�� ������Ʈ �ϰڽ��ϴ�." << endl;
                cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
                cin >> tel;

                // �Է¹��� ��ȭ��ȣ�� ���Ͽ� �߰�
                ofstream tel_file("member_tel.txt", ios_base::app); // ���� ���� ���� �߰�
                tel_file << stored_username << " " << tel << endl;
                tel_file.close();

            }

        }
    }

}
