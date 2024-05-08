#include <iostream>
#include <vector>

using namespace std;

int main(){

    int num;
    int i;
    cout << "정수 입력";
    cin >> num;
    
    vector <int> v(20,-1);

    for (i =0; i < num; i ++){
        cout << v[i] << endl;
    }

    
}