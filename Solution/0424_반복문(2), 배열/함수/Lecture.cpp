//함수

#include <iostream>

int GetTen() //10 반환
{
    return 10; 
}

int IntSum(int n1, int n2) //더해주는 함수
{
    return n1 + n2;
}

void PrintHi() //void 출력이 없는 것을 표현하는 변수
{

}


int main()
{

    int num1, num2;
    std::cout << "첫번째 입력값을 입력하세요 : ";
    std::cin >> num1;
    // std::cin >> num1 >>num2; 변수 두가지 한번에 받기
    std::cout << "두번째 입력값을 입력하세요 : ";
    std::cin >> num2;

    PrintHi();

    int ten = GetTen(); //깊이가 1증가 됐다고 표현, 함수안에 함수가 1개 들어가 있기에
    int result = IntSum(num1, num2); // 깊이가 2증가 됐다. 

    // std::cout << IntSum(num1, num2); //이렇게도 가능
    
    std::cout << "입력값은 " << result << "입니다. \n";

    return 0;2
}

