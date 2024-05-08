#include <iostream>
#include <algorithm>

using namespace std;

// 1. 문제 정의 
// 배열의 값을 받아 역순으로 출력하자.
// Reverse라는 이름으로 구현.


// 2. reverse 함수 구현
// 2.1 reverse 기능 사용 = O
void reverse_feature(int *arr, int size)
{
    std::reverse(arr, arr+size);
    //reverse (배열 시작 가리키는 포인터, 배열 + 요소 개수)
}

// 2.3 GPT Version.
void reverse_gptver(int arr[], int size) {// 정수형 배열과 사이즈를 받음
    
    //for문을 돌면서 배열의 절반까지 돔, 가운데 중복 피하기 위함
    for (int i = 0; i < size / 2; ++i){
        int temp = arr[i]; //배열의 요소를 임시 저장
        arr[i] = arr[size - i - 1]; 
        /* 
        Size가 10이고, 현재 i가 0일 때, 이 경우 arr[10 - 0 - 1].
        따라서 arr[9] = 배열의 마지막! 
        일종의 SWAP이다. O(n)을 줄여줄 수 있기 때문. 
        */
        arr[size - i - 1] = temp; // 템프를 덮어씀!
        
        /*
        1) 
        초기 배열: {1, 2, 3, 4, 5}
        첫 번째 반복 (i = 0):
        temp = arr[0] (temp = 1)
        arr[0] = arr[5 - 0 - 1] (arr[0] = arr[4], 따라서 arr[0] = 5)
        arr[5 - 0 - 1] = temp (arr[4] = temp, 따라서 arr[4] = 1)
        배열 상태: {5, 2, 3, 4, 1}

        2) 
        두 번째 반복 (i = 1):
        temp = arr[1] (temp = 2)
        arr[1] = arr[5 - 1 - 1] (arr[1] = arr[3], 따라서 arr[1] = 4)
        arr[5 - 1 - 1] = temp (arr[3] = temp, 따라서 arr[3] = 2)
        배열 상태: {5, 4, 3, 2, 1}
        반복문 종료

        #반으로 나눠 반복을 돌리는 이유 
        Origin : 1,2,3,4,5
        1. 5,2,3,4,1
        2. 5,4,3,2,1
        3. 5,4,3,2,1
        4. 5,2,3,4,1
        5. 1,2,3,4,5

        중간을 기점으로 나누지 않으면 역순으로 바꾸는 의미가 없어짐! 
        https://codegrimie.tistory.com/44
        */
    }
} 



//GPT ver.
// void reverse_gpt(int *arr, int size) {
//     // 배열의 시작 지점을 가리키는 포인터를 만듭니다.
//     int *start = arr;
//     // 배열의 끝 지점을 가리키는 포인터를 만듭니다.
//     int *end = arr + size - 1;

//     // 시작 포인터와 끝 포인터가 교차할 때까지 값을 교환합니다.
//     while (start < end) {
//         // 시작 포인터와 끝 포인터가 가리키는 값을 바꿉니다.
//         int temp = *start;
//         *start = *end;
//         *end = temp;

//         // 다음 요소로 이동합니다.
//         start++;
//         end--;
//     }
// }



int main() {
    //배열 임의로 생성
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    //배열 역순으로 생성
    reverse_gptver(array, 10);
    cout << "입력으로 받은 배열을 역순으로 출력합니다." << endl;

    //역순으로 수정된 배열 출력하기 
    for (int i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
    return 0;

}
