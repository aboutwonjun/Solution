// 홀수 짝수 확인
// 1. 하나의 정수를 매개변수로 받아서, 짝수이면 짝수~
// 2. 세개의 매개변수를 받아서 가장 큰 수를 반환하는 함수 작성. 


#include <iostream>

int OddEven(int num)
{
    int num;
    if((num % 2) ==0);
    {
        std::cout << "짝수";
    }

    else ()
    {
        std::cout << "홀수";
    }
    return 0; //0이면 정상, 0이 아니면 비정상 
}


void main()
{
    int num;
    std::cout >> "숫자를 입력하세요";
    std::cin << num;
    OddEven(num);

}



/*

#include <iostream>

// 홀수 짝수 확인 함수
void OddEven(int num)
{
    if (num % 2 == 0)
    {
        std::cout << "짝수";
    }
    else
    {
        std::cout << "홀수";
    }
}

// 세 개의 수 중에서 가장 큰 수를 반환하는 함수
int Max(int num1, int num2, int num3)
{
    int max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    return max;
}

int main()
{
    int num1, num2, num3;
    
    // 사용자로부터 세 개의 숫자 입력 받기
    std::cout << "세 개의 숫자를 입력하세요: ";
    std::cin >> num1 >> num2 >> num3;

    // 가장 큰 수 출력
    std::cout << "가장 큰 수는: " << Max(num1, num2, num3) << std::endl;

    // 홀수 짝수 확인
    std::cout << num1 << "은(는) ";
    OddEven(num1);
    std::cout << "입니다." << std::endl;

    return 0;
}

*/