
// 반복문 실습 1
// 구구단 만들기
// for (초기값; 조건문; 증감문) {} 
// while (조건문) {}

#include <iostream>

// 5단만 출력하기
int main() {
    std::cout <<"5단 출력\n";
    for (int i = 1; i <=5; i++) 
    { 
        std::cout << 5 << '*' << i << '=' << 5 * i << std::endl;
    }

    std::cout << "\n9단 출력\n";
    for (int j = 1; j <=9; j++)
    {
        std::cout << "----------" << j <<"단----------\n"; //이나경님 코드 참고
        for (int k = 1; k <=9; k++)
        {std::cout << j << '*' << k << '=' << j * k << std::endl;}
    }


}





