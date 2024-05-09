// 클래스 실습 0. 클래스 구조 만들기
// 은행 관련 클래스 


#pragma once

#include <iostream>
#include <string> 
using namespace std;



// 유저단에서 사용할 수 있는 Feature, Method 모음
class UserService
{
private:
	string cutomerID; //고객ID
	string name; // 이름 
	int accountNum; // 계좌번호
	int phoneNum; //전화번호
	int manageBranchID; //관리 지점 ID 


public:
	void makeNewAccout(); // 신규 계좌개설
	void checkMyAccount(); //계좌 확인
	void transaction(); // 계좌 이체 
	void checkMyInfo(); //고객 정보 확인 기능을 유저, 은행으로 나눔. / 개인 정보 확인하기 

};


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
