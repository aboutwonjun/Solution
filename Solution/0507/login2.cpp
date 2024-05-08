//회원 명부 작성하기
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;


int main()
{
    cout << "** 로그인 시스템 **" << endl;

    // 사용자로부터 이름과 비밀번호 입력 받기
    cout << "이름을 입력하세요: ";
    string username;
    cin >> username;

    cout << "비밀번호를 입력하세요: ";
    string password;
    cin >> password;

    // 파일에서 회원 정보 읽어오기
    ifstream file("member.txt");
    if (!file) {
        cerr << "파일을 열 수 없습니다." << endl;
        return 1;


    bool login = false;

    ifstream readfile("member.txt");
    string s;
    while (getline(readfile, s)) //file의 내용을 읽어서 s에 저장
    {
        stringstream ss(s);
        string new_user_name, new_user_pw;

        if (ss >> new_user_name >> new_user_pw)
        {
            if (username == username || new_user_pw == password)
            {
                login = true;
                break;
            }

            else 
            {
                login = false;
            }

        }
    }
    readfile.close();

    if (login) 
    {
        cout << "로그인 성공!" << endl;
    }
    else 
    {
        cout << "로그인 실패" << endl;
    }

    return 0;


}
