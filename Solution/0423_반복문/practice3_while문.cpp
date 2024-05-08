// 실습 1,2 while로 작성하기

//구구단 

// 5단만 출력하기
// int main() {
//     std::cout <<"5단 출력\n";
//     for (int i = 1; i <=5; i++) 
//     { 
//         std::cout << 5 << '*' << i << '=' << 5 * i << std::endl;
//     }

//     std::cout << "\n9단 출력\n";
//     for (int j = 1; j <=9; j++)
//     {
//         std::cout << "----------" << j <<"단----------\n"; //이나경님 코드 참고
//         for (int k = 1; k <=9; k++)
//         {std::cout << j << '*' << k << '=' << j * k << std::endl;}
//     }


// }

#include <iostream>

int main() 
{
    int i = 1;
    std::cout << "-------- 5단 출력 --------\n";
    while (i <= 10) 
    {
        std::cout << "5 * " << i << " = " << 5 * i << std::endl;
        i ++;
    }

    //구구단 

    int j = 1; 
    while (j <= 9)
    {
        int k =1;
        std::cout << "--------" << j << "단 출력 --------\n";

        //9까지 반복
        int k =1;
        while (k <= 9)
        {
            std::cout << j << " * " << k << " = " << j * k << std::endl;
            k++;
        }
        
        j++; //9까지 반복
        
    }

}
