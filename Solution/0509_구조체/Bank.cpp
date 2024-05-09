// Ŭ���� �ǽ� 0. Ŭ���� ���� �����
// ���� ���� Ŭ���� 


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


// �����ڴ�(����)���� ����� �� �ִ� Feature, Method ����
class bankManageService
{
private:
	int branchId; // ���� ID 
	string  bankCustomerId; //��ϵ� �� ID ���� Ȯ���� ����.
	int bankCustomerNum; //��  - ��ϵ� �� �� 
	int activeAccounts; // Ȱ������ �� 

public:
	string address; //���� �ּ�

	void customerAddDel(); //�� ���/����
	void branchAddDel(); //���� �߰�/����
	void checkCustomerInfo(); //�� ���� Ȯ�� ����� ����, �������� ����. / ��ϵ� �� ����Ȯ�� 
	void checkBranchInfo(); //���� ���� Ȯ�� 

}; 
