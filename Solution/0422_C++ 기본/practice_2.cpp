#include <iostream>

int main() {
    std::cout << "나이를 입력하세요 :";
    int age;
    std::cin >> age;

    if (age >= 1 && age <= 8) {
        std::cout << "유아";
    }
    else if (age >= 9 && age <= 13) {
        std::cout << "초등학생";
    }
    else if (age >= 14 && age <= 16) {
        std::cout << "중학생";
    }
    else if (age >= 17 && age <= 19) {
        std::cout << "고등학생";
    }
    else if (age >= 20 && age < 200) {
        std::cout << "성인";
    }
    else if (age >= 200) {
        std::cout << "나이가 너무 많습니다.";
    }

    return 0;
}



