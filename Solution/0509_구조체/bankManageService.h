#pragma once

#include <iostream>
#include <string> 

using namespace std;

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
