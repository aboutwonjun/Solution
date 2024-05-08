//함수

#include <iostream>

int Add(int n1, int n2) 
{
    return n1 + n2; 
}

int Minus(int n1, int n2) 
{
    return n1 - n2; 
}


int Mul(int n1, int n2) 
{
    return n1 * n2; 
}

int Devide(int n1, int n2) // float Devide(float n1, floatn2) 이렇게 해도 강제 형변환 가능! 
{
    float f1 = static_cast<float>(n1); //강제 형 변환 static_cast<형>(변수)
    float f2 = static_cast<float>(n2); 

    return f1 / f2; 

}

int main ()
{
    int num1, num2;
    std::cout << "첫번째 입력값을 입력하세요 : ";
    std::cin >> num1;

    std::cout << "두번째 입력값을 입력하세요 : ";
    std::cin >> num2;

    int ResultAdd = Add(num1, num2);
    int ResultMin = Minus(num1, num2);
    int ResultMul = Mul(num1, num2);
    int ResultDevide = Devide(num1, num2);

    // 결과 출력
    std::cout << "Addition 결과: " << ResultAdd << std::endl;
    std::cout << "Minus 결과: " << ResultMin << std::endl;
    std::cout << "Mul 결과: " << ResultMul << std::endl;
    std::cout << "Devide 결과: " << ResultDevide << std::endl;

    return 0;

}















