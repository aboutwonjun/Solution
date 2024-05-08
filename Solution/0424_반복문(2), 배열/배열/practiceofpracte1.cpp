#include <iostream>
using namespace std;


int main()
{
    string city[] = {"Korea", "Russia", "China", "USA", "France"};
    cout << "나라를 입력하세요. (list를 입력하면 다 나옴)";
    string input;
    cin >> input; 

    if (input == "list") 
    {
        for (string item : city)
        {
            cout << item ;
        }
    }

    else
    {
        int i;
        for ( i = 0; i < sizeof(city) / sizeof(city[0]); i++)
        {
            if (input == city[i])
            {
                cout << i << city[i];
                break;
            }
        }


        if (input != city [i])
        {
            cout << "오류";
        }
    }
}


