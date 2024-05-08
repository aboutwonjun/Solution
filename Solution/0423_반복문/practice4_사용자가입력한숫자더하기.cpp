// 사용자가 입력한 숫자 계속 더하기 
#include <iostream>


int main()
{
    std::cout << "사용자가 입력한 숫자 더하기! \n";

    int input;
    int res = 0;

    while (true)
    {
        std::cout << "숫자를 입력하세요 (0:exit) : ";
        std::cin >> input;

        if (input ==0)
        {
            break; //입력이 0이면 루프 종료.
        }
        res += input; //계속 값 더하기
    }
    std::cout << "사용자가 입력한 수의 합은? : " << res << std::endl; // 입력된 숫자의 합을 출력합니다.

    return 0;
}