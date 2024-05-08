
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //1. 벡터 선언
    vector<int> v;

    //2. 사용자로부터 입력 받을 정수의 개수 입력
    int count;
    cout << "입력할 정수의 개수를 입력하세요: ";
    cin >> count;

    // 정수 개수만큼 반복하며 정수 입력 받기
    cout << count << "개의 정수를 입력하세요:" << endl;
    for (int i = 0; i < count; ++i) {
        int num;
        cin >> num;
        v.push_back(num); // 입력 받은 정수를 벡터에 추가
    }

    //3. 벡터의 크기 출력 
    cout << "벡터의 크기는: " << v.size() << endl;

    //4. 벡터의 모든 원소 출력 
    cout << "벡터의 모든 원소: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    //5. 가장 큰 값을 찾아 출력
    int max_value = *max_element(v.begin(), v.end());
    cout << "가장 큰 값은: " << max_value << endl;

    //6. 벡터의 모든 원소를 두배로 하기 
    for (int i = 0; i < v.size(); i++) {
        v[i] *= 2;
    }
    cout << "모든 원소를 두배로 했습니다. ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    //7. 사용자에게 인덱스를 입력받아 해당 인덱스에 있는 원소 제거하기
    cout << "어떤 인덱스에 있는 원소를 지워볼까요? :";
    int rm_index;
    cin >> rm_index;
    v.erase(v.begin() + rm_index);
    cout << "결과는 다음과 같습니다. :";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    //8. 사용자에게 인덱스를 입력받아 해당 인덱스에 있는 새로운 원소 삽입 
    cout << "어떤 인덱스를 교체할까요? :";
    int input_insert;
    cin >> input_insert;

    cout << "어떤 값을 삽입하시겠습니까? : ";
    int insert_value;
    cin >> insert_value;

    v.insert(v.begin() + input_insert, insert_value);

    cout << "결과는 다음과 같습니다. : ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}