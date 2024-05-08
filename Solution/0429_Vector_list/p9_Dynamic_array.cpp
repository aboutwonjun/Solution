// 2차원 배열 복습 - 행렬 합

#include <iostream>
using namespace std; 

int main () {

    // 1. 사용자로 부터 행과 열 입력 받기
    int x;
    int y;

    //2. 행과 열의 수를 입력받기
    cout << "행과 열의 수를 입력해주세요. \n"; 
    cin >> x >> y;

    //2차원 동적 배열 설정 
    cout << "행렬 원소를 입력해주세요. \n"; 

    int **arr2 = new int *[x]; //행 할당  
    
    for (int i = 0; i < x; i++) {
        arr2[i] = new int[y]; //열 할당
        for (int j = 0;  j < y; j++){
            cin >> arr2[i][j];
        }
    }
    /* 
    리더님 설명
    왜 이차원 동적배열은 **이 붙을까? 
    어떤 값의 주소값 -> 주소값을 거쳐 값을 가져오기 때문에 2개!
    기본적으로 X 사이즈 만큼의 주소값을 설정하고 
    이후 그 사이즈 만큼의 Y 배열을 할당해주는게 이 코드의 의미
    */

    //이중 for 문 돌면서 [0][0] ~ [n][n]에 입력값 집어넣기, 

    //3. 행렬 출력하기 
    for (int i = 0; i < x; i++) { 
        for (int j = 0; j < y; j++){
            cout << arr2[i][j] << " "; // 값을 출력하고 공백을 추가
        }
        cout << endl; // 한 행이 끝나면 줄바꿈합니다.
    }

    // 5. 각 행의 합 
    cout << endl << "각 행의 합 : " << endl;
	for (int i = 0; i < x; i++)
	{
		int rowSum = 0;
		cout << "행 " << i+1 << ": ";

		for (int j = 0; j < x; j++)
		{
			rowSum += arr2[i][j];
		}
		cout << rowSum << endl;
	}


    //6. 각 열의 합
	cout << endl << "각 열의 합: " << endl;
	for (int i = 0; i < y; i++)
	{
		int colSum = 0;
		cout << "열 " << i+1 << ": ";

		for (int j = 0; j < y; j++)
		{
			colSum += arr2[j][i];
		}
		cout << colSum << endl;

	}
    

    //7. 동적할당 해제 
    for (int i = 0; i < x; i++) {
        delete[] arr2[i];
    } //행만 해주면 돔

    

    return 0;
}
