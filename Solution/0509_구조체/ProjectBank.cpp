#include <iostream>

#include "userService.h"
#include "bankManageService.h"


int main()
{

	// 클래스 선언

	userService userService;
	bankManageService bankManageService;

	//유저단
	userService.makeNewAccout(); // 신규 계좌개설
	userService.checkMyAccount(); //계좌 확인
	userService.transaction(); // 계좌 이체 
	userService.checkMyInfo(); //고객 정보 확인 기능을 유저, 은행으로 나눔. / 개인 정보 확인하기 


	//관리자단 

	bankManageService.customerAddDel(); //고객 등록/삭제
	bankManageService.branchAddDel(); //지점 추가/삭제
	bankManageService.checkCustomerInfo(); //고객 정보 확인 기능을 유저, 은행으로 나눔. / 등록된 고객 정보확인
	bankManageService.checkBranchInfo(); //지점 정보 확인 


}

