// String 실습 1


#include <iostream>
#include <string>
using namespace std;

int main () {
    string str = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

    //2. s 문자열 길이 출력
    cout << "입력 문자값의 길이 출력 : ";
    cout << str.length() << endl;

    //3. 100번째 문자 출력.
    cout << "100번째 문자출력 : ";
    cout << str.at(99) << endl;

    //4. find 
    cout << "two 문자가 처음 나오는 Index 출력 : ";
    cout << str.find("two") << endl;

    //5. two라는 문자가 두번째 나오는 인덱스 출력
    cout << "two 문자가 두번째 나오는 Index 출력 : ";
    cout << str.find("two", str.find("two")+1) << endl;

    //cout << "two라는 문자가 처음 나오는 index: " << str.find("two", str.find("two")+1) << endl;


    return 0;






}