#include <iostream>
using namespace std;



int main () 
{
    // bool check = false; //불 변수 설정 
    //1. 배열 변수 만들기 
    string city[5] = {"Korea", "Osaka", "Moscow", "Boston", "New York"};
    string input; //input 이라는 변수 설정 
    cout << "나라 검색 (전체 list 보고 싶으면 list 입력) :";
    cin >> input;

    //배열의 크기를 지정 = 5
    int cityArraySize = sizeof(city) / sizeof(city[0]); 

    //2. list라고 입력하면 모든 원소 출력
    if (input == "list")
    {
        for (string item : city)  //이 부분 이해 안됨 아이템 하나하나 뺴오기
        {
            cout << item << "|";
        }
    }
    
    else //3. 배열 내 해당 인풋이 있으면 인덱스랑 같이 출력.
    {
        int i;
        for (int i = 0; i < cityArraySize; i++)
        {
            if (input == city [i])
            {
                // check = true;
                cout << "[" << i + 1 << "]" << city[i] << endl;
				break;
            }
        }

        // if (check == false) 
        if (input != city [i])
        {
            cout << "나라 이름을 제대로 입력하시오.";
        }
    }

}




