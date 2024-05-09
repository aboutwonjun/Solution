

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
#pragma once
