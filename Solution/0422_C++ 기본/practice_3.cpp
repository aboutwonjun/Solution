#include <iostream>

int main() {
    std::cout << "이름을 입력하세요 : ";
    std::string name;
    std::cin >> name;

    if(name == "홍길동") {
        std::cout << "남자";
    }

    else if(name == "성춘향") {
        std::cout << "여자";
    }

    else {
        std::cout <<"모르겠어요";
    }
}