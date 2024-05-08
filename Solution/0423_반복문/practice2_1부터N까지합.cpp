//1부터 n까지의 합 구하기

#include <iostream>

// int main()
// {
    
//     std::cout << "1부터 n까지의 합 구하기";
//     "숫자(양의 정수)를 입력하세오 :";
//     int num;
//     std::cin >> num;
//     int res;
    
//     for (1; 1 <= num; num++); 
//     {

//     }

int main()
{
    std::cout << "1부터 n까지의 합 구하기" << std::endl;
    std::cout << "숫자(양의 정수)를 입력하세요: ";

    int num;
    std::cin >> num;
    int res = 0; // 결과값을 저장할 변수를 초기화

    // 1부터 num까지의 합 구하기
    for (int i = 1; i <= num; i++)
    {
        res += i; // 누적 합산
    }
    // 결과 출력
    std::cout << "1부터 " << num << "까지의 합은 " << res << "입니다." << std::endl;

    return 0; 
}







    
