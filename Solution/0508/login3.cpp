
// 로그인 성공시, 사용자에게 전화번호를 입력하세요라는 메세지를 출력한 후 전화번호 입력받기
// 사용자로부터 입력 받은 전화번호를 이름과 함께 member_tel.txt에 기록하기
// 새로운 사람이 로그인 성공 시 member_tel.txt에 전화번호 추가하기 
// member_tel.txt에 이미 존재하는 사람이 로그인시 전화번호 수정하기 



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
    ifstream file("member_tel.txt");

    string s;

    while (getline(file, s)) 
    {
        stringstream ss(s);
        string stored_username, stored_password, stored_tel;

        if (ss >> stored_username >> stored_password >> stored_tel)
        {
            string tel;
            if (username == stored_username && password == stored_password)
            {
   
                cout << "로그인 성공!" << endl;

                //로그인 성공시 전화번호를 입력받기
                cout << "전화번호를 입력하세요 : ";
                cin >> tel;

                // 이름과 전화번호만을 membel_tel.txt에 입력하기 
                ofstream tel_file("member_tel.txt");
                tel_file << stored_username << " " << tel << endl;
                tel_file.close();

            }

            else if (username == stored_username && stored_tel != tel)
            {
                // 이름은 같은데 번호가 다를 경우 입력받은 전화번호 추가하기
                cout << "이름이 이미 존재합니다. 전화번호를 업데이트 하겠습니다." << endl;
                cout << "전화번호를 입력하세요 : ";
                cin >> tel;

                // 입력받은 전화번호를 파일에 추가
                ofstream tel_file("member_tel.txt", ios_base::app); // 기존 파일 끝에 추가
                tel_file << stored_username << " " << tel << endl;
                tel_file.close();

            }

        }
    }

}
