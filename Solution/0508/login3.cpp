
// 1. 로그인 성공시, 사용자에게 전화번호를 입력하세요라는 메세지를 출력한 후 전화번호 입력받기
// 2. 사용자로부터 입력 받은 전화번호를 이름과 함께 member_tel.txt에 기록하기
// 3.  사람이 로그인 성공 시 member_tel.txt에 전화번호 추가하기 
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
    ifstream file("member.txt"); //로그인 정보 들어있음. 

    string s;
    bool found = false;
    string tel = "";
    int retryCount = 0;

    cin.ignore();

    while (getline(file, s))
    {
        stringstream ss(s);
        string stored_username, stored_password, stored_tel;
        ss >> stored_username >> stored_password >> stored_tel;


        // 사용자가 입력한 이름과 비밀번호와 파일에서 읽어온 회원 정보를 비교하여 로그인 확인
        if (stored_username == username && stored_password == password)
        {
            found = true; // 사용자 정보를 찾았음을 표시

            cout << "로그인 성공!" << endl;


            //member_tel에 ID가 존재하는지? 존재하면 번호를 업데이트 하기 
            if (stored_tel != tel)
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

            //member_tel에 없던 사람일 경우 새로 이름, 전화번호 추가해주기. 
            else if (stored_username != username)
            {
                cout << "기존 정보에 없는 것 같습니다. 이름과 전화번호를 추가하겠습니다. " << endl;
                cout << "이름을 입력하세요. :";
                cin >> username;
                cout << "전화번호를 입력하세요. :";
                cin >> tel;

                // 입력받은 전화번호를 파일에 추가
                ofstream tel_file("member_tel.txt", ios_base::app); // 기존 파일 끝에 추가
                tel_file << stored_username << " " << tel << endl;
                tel_file.close();
            }
            break;

        }


        // 로그인 실패시.
        else if (stored_username == username && stored_password != password)
        {
            cout << "비밀번호가 틀렸습니다. 다시 입력하세요. " << endl;

            retryCount++;

            if (retryCount >= 3)
            {
                cout << "비밀번호를 3회 이상 잘못 입력하여 프로그램을 종료합니다.";
                return 0;
            }

            else
            {
                cout << "비밀번호를 입력하세요 : ";
                cin >> password;

                continue;
            }
        }


    }

    return 0;
}



