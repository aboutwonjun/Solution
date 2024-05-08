#include <iostream>
using namespace std;
int main()
{
	// 범용성 프로그래밍
	//
	// "읽기 쉬운" "보기 쉬운" "간단한" "논리" 함수
	//
	//
	// 0. 데이터 정의
	//
	string input;
	string city[] = { "미국", "영국", "한국", "일본", "중국" };
	int arrSize = sizeof(city) / sizeof(city[0]);
	cout << "list를 입력해 나라를 확인하세요." << endl;
	while (1) {
		//
		// 1. 입력단
		//
		cout << " ~나라이름 찾아주는 서비스~" << endl;
		cout << " list : 나라이름 전체 출력" << endl;
		cout << " 나라이름 입력 : 인덱스 출력" << endl;
		cout << " exit : 프로그램 종료" << endl;
		
		cout << endl << "입력: ";
		cin >> input;
		if (input == "exit")
		{
			break;
		}
		//
		// 2. 입력 판별
		//
		//
		//  type의 종류
		//  0 = 입력 오류
		//  1 = list 검출
		//  2 = 나라이름 검출
		//
		int type = 0;
		for (int i = 0; i < arrSize; i++)
		{
			if (input == "list")
			{
				type = 1;
			}
			else if (input == city[i])
			{
				type = 2;
			}
		}
		//
		// 3. 입력 처리
		//
		switch (type)
		{
		// Error
		case 0:
			cout << "오류입니다. 다시 입력해주세요." << endl;
			break;
		// list
		case 1:
			for (string country : city)
			{
				cout << country << endl;
			}
			break;
		// Country Name Match
		case 2:
			for (int i = 0; i < arrSize; i++)
			{
				if (input == city[i])
				{
					cout << "인덱스: " << i << ", 나라이름: " << city[i] << endl;					
					break;
				}
			}
			break;
		}
	return 0;
}
}