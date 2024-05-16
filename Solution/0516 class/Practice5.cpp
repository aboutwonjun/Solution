/* 
* 1. Candy, Chocolate 클래스를 만든다.
* 2. Candy : 맛, 가격, 상품이름, 제조회사를 의미하는 변수 포함 
* 3. Chocolate : 모양, 가격, 상품이름, 제조회사 의미 변수 포함
* 4. Snack Class로 부터 상속 받아야함! (공통된 거 모으기 : 가격, 상품이름, 제조회사)
* 5. 메인 함수내에서 Candy, Chocolate 클래스로 각 2개의 객체 생성
* 6. 만든 객체를 snackBasket에 넣어줌
* 7. 반복문을 통해 간식들의 상품 이름을 출력 
*/




#include <iostream>
#include <string>
using namespace std;


// 1. 모체 Snack Class 생성 / 가격, 상품 이름, 제조회사 (공통) 
class Snack
{
public:
	int price;
	string productName;
	string company;
};

// 2. Candy 생성 / 맛 추가, 나머진 상속 
class Candy : public Snack
{
public : 
	string taste;
};


// 3. Choco 생성 / 모양추가, 나머진 상속 
class Chocolate : public Snack
{
public:
	string shape;
};


int main()
{
	Candy candy1;
	candy1.taste = "sweet";
	candy1.price = 1000;
	candy1.productName = "HI";
	candy1.company = "A";


	Candy candy2;
	candy2.taste = "Sour";
	candy2.price = 1200;
	candy2.productName = "Hello";
	candy2.company = "B";

	Chocolate choco1;
	choco1.shape = "HeartShape";
	choco1.price = 1200;
	choco1.productName = "Love";
	choco1.company = "C";

	Chocolate choco2;
	choco2.shape = "StarShape";
	choco2.price = 1200;
	choco2.productName = "StaryNight";
	choco2.company = "D";

	//2-2 4객체를 SnackBasket에 넣기

	//객체 배열! https://blog.hexabrain.net/174
	Snack snackBasket[4] = {candy1, candy2, choco1, choco2 };


	for(int i = 0; i < 4; i++)
	{
		cout << i << "번째 상품 이름 : "<<  snackBasket[i].productName << endl;
	}

	return 0;

	}





