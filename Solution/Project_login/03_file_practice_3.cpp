#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool checkFileOpen(std::ifstream& file)
{
	if (file.fail()) return false;
	else return true;
}

bool checkFileOpen(std::ofstream& file) 
{
	if (file.fail()) 
	{
		cout << "���� ����" << endl;
		return false;
	}
	else return true;
}

int main() 
{
	std::ifstream member_file;
	std::string name, pw, name_in, pw_in;

	member_file.open("member.txt");
	if (!checkFileOpen(member_file)) return -1;


	std::cout << "�̸��� �Է��ϼ���. ";
	std::cin >> name_in;

	std::cout << "����� �Է��ϼ���. ";
	std::cin >> pw_in;

	// ȫ�浿 1234
	// ������ 4321
	// �ڵ� 1111
	bool flag = false; // �α��� ���� ���θ� ��� ����
	while (member_file >> name >> pw) 
	{
		if (name == name_in && pw == pw_in) 
		{
			flag = true;
			break;
		}
	}
	member_file.close();

	if (flag) 
	{
		std::string tel_in, tel;
		cout << "�α��� ����" << endl;
		cout << "��ȭ��ȣ�� �Է��ϼ���. ";
		cin >> tel_in;

		std::ifstream member_tel_file_r("member_tel.txt");
		std::string member_tel_temp = "";

		bool is_modify = false; // ���� ���� ���� or �߰��� �Ǵ��ϴ� ����
		if (!member_tel_file_r.fail()) 
		{
			// ȫ�浿 010-2222-3333 -> 010-4444-5555
			// ������ 010-3213-4212
			// string line : ȫ�浿 010-4444-5555\n
			// string member_tel_temp += line + "\n";
			// -> ȫ�浿 010-4444-5555\n
			// -> ������ 010-3213-4212\n
			// ...
			while (member_tel_file_r >> name >> tel) 
			{
				std::string line = name + " ";
				if (name == name_in) 
				{					
					line += tel_in;
					is_modify = true;
				}
				else line += tel;
				member_tel_temp += line + "\n";
			}
			member_tel_file_r.close();
		}

		std::ofstream member_tel_file_w;
		
		if (is_modify) 
		{
			member_tel_file_w.open("member_tel.txt");
			member_tel_file_w << member_tel_temp;
		}
		else 
		{
			member_tel_file_w.open("member_tel.txt", std::ios::app);
			member_tel_file_w << name_in + " " + tel_in + "\n";
		}
		
		member_tel_file_w.close();
	}
	else cout << "�α��� ����";

	return 0;
}