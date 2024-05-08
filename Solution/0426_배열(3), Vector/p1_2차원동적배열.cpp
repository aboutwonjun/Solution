// 실습5 2차원 동적 배열
#include <iostream>

using namespace std;
int main() {

    // 1. 사용자로 부터 2개의 자연수 입력
    int x;
    int y;
    int value = 0;

    // * 입력값 타입 확인하기. 아래 함수는 한글자만 파악가능
    

    cout << "두개의 변수를 입력해주세요! \n"; 
    cout << "먼저,x를 입력해주세요 :";
    cin >> x;
    cout << "마지막으로, y를 입력해주세요 :";
    cin >> y;

    // 2. 0 혹은 음수를 입력하면 에러 출력 후 다시 진행 
    while (x <= 0 || y <= 0) { 
        cout << "에러: 두 개 자연수를 입력해주세요." << endl;
        cout << endl;
        cout << "두개의 변수를 입력해주세요 : ";
        cout << "x를 입력해주세요 :";
        cin >> x;
        cout << "y를 입력해주세요 :";
        cin >> y;
    } 

    // 3. x * y의 크기를 갖는 이차원 동적배열 선언 & 할당 
    int **arr2 = new int *[x];
    for (int i = 0; i < x; i++) {
        arr2[i] = new int[y]; //행마다 동적할당. 
    }

    // 4. arr[0][0]~[x][y] 까지 1 순서부터 저장. 
    for (int i = 0; i < x; i++) { //0부터 값 입력.
        for (int j = 0; j < y; j++) {
            arr2[i][j] = value++; //
        }
    }

    // 5. 저장되는 값 출력 
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    /*
    출력예시 : 

    arr[0][0] = 0  arr[0][1] = 1  arr[0][2] = 2
    arr[1][0] = 3  arr[1][1] = 4  arr[1][2] = 5
    arr[2][0] = 6  arr[2][1] = 7  arr[2][2] = 8

    0 1 2
    3 4 5
    6 7 8
    
    */

    // 메모리 해제 
    for (int i = 0; i < x; i++) {
        delete[] arr2[i];
    }

    delete[] arr2;

}
