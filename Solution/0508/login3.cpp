
// 1. �α��� ������, ����ڿ��� ��ȭ��ȣ�� �Է��ϼ����� �޼����� ����� �� ��ȭ��ȣ �Է¹ޱ�
// 2. ����ڷκ��� �Է� ���� ��ȭ��ȣ�� �̸��� �Բ� member_tel.txt�� ����ϱ�
// 3.  ����� �α��� ���� �� member_tel.txt�� ��ȭ��ȣ �߰��ϱ� 
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
    ifstream file("member.txt"); //�α��� ���� �������. 

    string s;
    bool found = false;
    string tel = "";
    int retryCount = 0;

    cin.ignore();

    while (getline(file, s))
    {
        stringstream ss(s);
        string stored_username, stored_password, stored_tel;
        ss >> stored_username >> stored_password >> stored_tel;


        // ����ڰ� �Է��� �̸��� ��й�ȣ�� ���Ͽ��� �о�� ȸ�� ������ ���Ͽ� �α��� Ȯ��
        if (stored_username == username && stored_password == password)
        {
            found = true; // ����� ������ ã������ ǥ��

            cout << "�α��� ����!" << endl;


            //member_tel�� ID�� �����ϴ���? �����ϸ� ��ȣ�� ������Ʈ �ϱ� 
            if (stored_tel != tel)
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

            //member_tel�� ���� ����� ��� ���� �̸�, ��ȭ��ȣ �߰����ֱ�. 
            else if (stored_username != username)
            {
                cout << "���� ������ ���� �� �����ϴ�. �̸��� ��ȭ��ȣ�� �߰��ϰڽ��ϴ�. " << endl;
                cout << "�̸��� �Է��ϼ���. :";
                cin >> username;
                cout << "��ȭ��ȣ�� �Է��ϼ���. :";
                cin >> tel;

                // �Է¹��� ��ȭ��ȣ�� ���Ͽ� �߰�
                ofstream tel_file("member_tel.txt", ios_base::app); // ���� ���� ���� �߰�
                tel_file << stored_username << " " << tel << endl;
                tel_file.close();
            }
            break;

        }


        // �α��� ���н�.
        else if (stored_username == username && stored_password != password)
        {
            cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է��ϼ���. " << endl;

            retryCount++;

            if (retryCount >= 3)
            {
                cout << "��й�ȣ�� 3ȸ �̻� �߸� �Է��Ͽ� ���α׷��� �����մϴ�.";
                return 0;
            }

            else
            {
                cout << "��й�ȣ�� �Է��ϼ��� : ";
                cin >> password;

                continue;
            }
        }


    }

    return 0;
}



