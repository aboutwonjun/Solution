#include <iostream> // 필요한 헤더 파일 추가

using namespace std; // 네임스페이스를 사용하겠다고 선언

int main() // main 함수의 반환 유형은 int여야 합니다.
{
	int intArray[5] = { 6, 7, 8, 9, 10 };
	int arraySize = sizeof(intArray) / sizeof(intArray[0]); //=5
	// for-each: 배열의 모든 요소를 처음부터 끝까지 탐색
	int target_min = 2; // 인덱스 번호 최소값
	int target_max = 4; // 인덱스 번호 최대값
	int loop_count = 0;
    
	for (int num : intArray) // 인덱스 0번부터, 1씩 증가
	{
		if (loop_count > target_min && loop_count < target_max)
		{
			cout << num << endl;
		}
		loop_count++;
	}
    // 위 for 문과 같은 코드지만 더 효율적임, 사용 용도에 따라 다르게!
	for (int i = 0; i < arraySize; i++)
	{
		cout << intArray[i] << endl;
	}
	
	return 0; // main 함수의 반환 값을 명시
}
