#include <iostream>
#include <string>
using namespace std;


int main () {
    string s = "Codingon";

    //2. 첫번째 문자 소문자로 변경

    cout << "원본 : " << s << endl;

    // 간단한 버전 
    s[0] = towlower(s[0]);

    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    
    cout << "소문자 변환 : " << s << endl;

    //3. ding이라는 부분문자열 반환
    cout << "부분 문자열 반환 : " << s.substr(2,4) << endl;

    //4. coooooon이 되도록 변경
    string replace_str = "ooooo";
    string find_str = "oding";
    s.replace(s.find(find_str), find_str.length(), replace_str);
    cout << "부분 문자열 변경 : " << s << endl;

    //4번 간단 버전 
    s.replace(2, 4, "oooo");
    cout < s < endl;


   // string.replace(교체하고 싶은 문자열의 위치, 교체하고 싶은 문자열의 길이, 새로운 문자열)

    //https://popawaw.tistory.com/53

    //5. "con"이 되도록 변경
    s.erase(2,5);
    cout << "con이 되도록 변경 : " << s;



    // cout << "부분 문자열 치환" << s2 << endl;
    // s.replace(2,3,"ding");
    // cout << s2 << endl;

    return 0;
    

}
