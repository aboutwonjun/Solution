#include <iostream>

#include "userService.h"
#include "bankManageService.h"


int main()
{


	// Ŭ���� ����

	userService userService;

	bankManageService bankManageService;

	// userService
	userService.makeNewAccout(); // �ű� ���°���
	userService.checkMyAccount(); //���� Ȯ��
	userService.transaction(); // ���� ��ü 
	userService.checkMyInfo(); //�� ���� Ȯ�� ����� ����, �������� ����. / ���� ���� Ȯ���ϱ� 




	bankManageService.customerAddDel(); //�� ���/����
	bankManageService.branchAddDel(); //���� �߰�/����
	bankManageService.checkCustomerInfo(); //�� ���� Ȯ�� ����� ����, �������� ����. / ��ϵ� �� ����Ȯ��
	bankManageService.checkBranchInfo(); //���� ���� Ȯ�� 


}

