

#pragma once

#include <iostream>
#include <string> 
using namespace std;



// �����ܿ��� ����� �� �ִ� Feature, Method ����
class UserService
{
private:
	string cutomerID; //��ID
	string name; // �̸� 
	int accountNum; // ���¹�ȣ
	int phoneNum; //��ȭ��ȣ
	int manageBranchID; //���� ���� ID 


public:
	void makeNewAccout(); // �ű� ���°���
	void checkMyAccount(); //���� Ȯ��
	void transaction(); // ���� ��ü 
	void checkMyInfo(); //�� ���� Ȯ�� ����� ����, �������� ����. / ���� ���� Ȯ���ϱ� 

};
#pragma once
