#pragma once

#include <iostream>
#include <string> 

using namespace std;

// 관리자단(지점)에서 사용할 수 있는 Feature, Method 모음
class bankManageService
{
private:
	int branchId; // 지점 ID 
	string  bankCustomerId; //등록된 고객 ID 정보 확인을 위함.
	int bankCustomerNum; //고객  - 등록된 고객 수 
	int activeAccounts; // 활성계좌 수 

public:
	string address; //은행 주소

	void customerAddDel(); //고객 등록/삭제
	void branchAddDel(); //지점 추가/삭제
	void checkCustomerInfo(); //고객 정보 확인 기능을 유저, 은행으로 나눔. / 등록된 고객 정보확인 
	void checkBranchInfo(); //지점 정보 확인 

}; 
