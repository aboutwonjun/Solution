//실습 8.vector 중복삭제
//iterator를 이용해서 문제 해결
//Unique라는 함수가 있다! 

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std; // Sort, Unique 함수를 쓰기 위함


int main(){
    // 오류로 인해 Push_back으로 요소 추가. 
    vector<int> myVector;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(20);
    myVector.push_back(40);
    myVector.push_back(10);
    myVector.push_back(50);
    
    cout << "원 함수 ";
    for (int i = 0; i < myVector.size(); i++)
    cout << myVector[i] << " ";
    cout << endl;

    cout << "중복 원소 제거 ";

    // 1) Sort 함수로 배열 정렬 
    sort(myVector.begin(), myVector.end());
    // 2) Unique 함수 이용해서 중복 값 맨 마지막으로 이동
    auto newEnd = unique(myVector.begin(), myVector.end());
    // 3) erase 함수 이용해서 중복 값 범위 삭제
    myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end());

    //v.erase(first, last); // 범위는 [first,last)
    //v.unique = 중복된 함수를 맨 뒤로 이동시키는 역할. 

    for (int i = 0; i < myVector.size(); i++)
    cout << myVector[i] << " ";


    return 0;
    
}

// 참고 : https://sanghyu.tistory.com/78

// 함수화  - 이나경님 
void printVector(vector<int> vector)
{
	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << " ";
	}
	cout << endl << endl;
}

void uniqueVector(vector<int> vector)
{
	sort(vector.begin(), vector.end());

	cout << "myVector sorted: ";
	printVector(vector);

	vector.erase(unique(vector.begin(), vector.end()), vector.end());

	cout << "myVector unique: ";
	printVector(vector);
}