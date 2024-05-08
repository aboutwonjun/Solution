#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 벡터의 크기 출력
void printVectorSize(const vector<int>& v) {
    cout << "벡터의 크기는: " << v.size() << endl;
}

// 벡터의 모든 원소 출력
void printVectorElements(const vector<int>& v) {
    cout << "벡터의 모든 원소: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// 가장 큰 값 찾아 출력
void printMaxValue(const vector<int>& v) {
    int max_value = *max_element(v.begin(), v.end());
    cout << "가장 큰 값은: " << max_value << endl;
}

// 벡터의 모든 원소를 두배로 변경
void doubleVectorElements(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] *= 2;
    }
    cout << "모든 원소를 두배로 했습니다. ";
    printVectorElements(v);
}

// 특정 인덱스에 있는 원소 제거
void removeElementAtIndex(vector<int>& v, int index) {
    v.erase(v.begin() + index);
    cout << "결과는 다음과 같습니다. :";
    printVectorElements(v);
}

// 특정 인덱스에 새로운 원소 삽입
void insertElementAtIndex(vector<int>& v, int index, int value) {
    v.insert(v.begin() + index, value);
    cout << "결과는 다음과 같습니다. : ";
    printVectorElements(v);
}

int main() {
    vector<int> v;
    int count;
    cout << "입력할 정수의 개수를 입력하세요: ";
    cin >> count;

    cout << count << "개의 정수를 입력하세요:" << endl;
    for (int i = 0; i < count; ++i) {
        int num;
        cin >> num;
        v.push_back(num); 
    }

    printVectorSize(v);
    printVectorElements(v);
    printMaxValue(v);
    doubleVectorElements(v);

    int rm_index;
    cout << "어떤 인덱스에 있는 원소를 지워볼까요? :";
    cin >> rm_index;
    removeElementAtIndex(v, rm_index);

    int input_insert;
    cout << "어떤 인덱스를 교체할까요? :";
    cin >> input_insert;

    int insert_value;
    cout << "어떤 값을 삽입하시겠습니까? : ";
    cin >> insert_value;

    insertElementAtIndex(v, input_insert, insert_value);

    return 0;
}
