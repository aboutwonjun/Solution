#include <iostream>
#include <string>
using namespace std;



// 문자열이 숫자인지, 아닌지 검사하는 함수 
int main() {
    string one;
    string two;

    cout << "두 문자열을 입력하세요!";
    cin >> one >> two;

    cout << typeid(one).name() << endl << endl;
    cout << typeid(int).name() << endl << endl;

    // 애초에 오류가 큼.. typeid로 비교하는 게 아닌거 같다! 

    if (typeid(one) == typeid(int) && typeid(two) == typeid(int)) {
        cout << "OK";
    }
    else {
        cout << "입력된 값이 문자열이 숫자열이 아닙니다. 재 입력하세요" << endl;
        cin >> one >> two; 
    }

    string result = one + two;
    cout << "두 숫자를 이어붙인 결과: " << result << endl;

    // 3. 앞에서 입력받은 두 숫자의 합을 출력
    int sum = stoi(one) + stoi(two);
    cout << "두 숫자의 합: " << sum << endl;

    return 0;
}
        
        











