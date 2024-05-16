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
#include <iostream>
#include <string>
using namespace std;


// 1. 모체 Snack Class 생성 / 가격, 상품 이름, 제조회사 (공통) 
class Snack
{

private:
	int m_price;
	string m_productName;
	string m_company;

public:
	// Constructor
	Snack() {}

	// Getter 및 Setter
	int getPrice()
	{
		return m_price;
	}
	void setPrice(int price)
	{
		m_price = price;
	}

	string getProductName()
	{
		return m_productName;
	}
	void setProductName(string productName)
	{
		m_productName = productName;
	}

	string getCompany()
	{
		return m_company;
	}
	void setCompany(string company)
	{
		m_company = company;
	}
};

// 2. Candy 생성 / 맛 추가, 나머진 상속 
class Candy : public Snack
{
private:
	string m_taste;

public:
	// Constructor
	Candy() {}

	// Getter 및 Setter
	string getTaste()
	{
		return m_taste;
	}
	void setTaste(string taste)
	{
		m_taste = taste;
	}
};

// 3. Choco 생성 / 모양추가, 나머진 상속 
class Chocolate : public Snack
{
private:
	string m_shape;

public:
	// Constructor
	Chocolate() {}

	// Getter 및 Setter
	string getShape()
	{
		return m_shape;
	}
	void setShape(string shape)
	{
		m_shape = shape;
	}
};


int main()
{
	Candy candy1;
	candy1.setTaste("sweet");
	candy1.setPrice(1000);
	candy1.setProductName("HI");
	candy1.setCompany("A");

	Candy candy2;
	candy2.setTaste("Sour");
	candy2.setPrice(1200);
	candy2.setProductName("Hello");
	candy2.setCompany("B");

	Chocolate choco1;
	choco1.setShape("HeartShape");
	choco1.setPrice(1200);
	choco1.setProductName("Love");
	choco1.setCompany("C");

	Chocolate choco2;
	choco2.setShape("StarShape");
	choco2.setPrice(1200);
	choco2.setProductName("StaryNight");
	choco2.setCompany("D");

	//2-2 4객체를 SnackBasket에 넣기
	Snack snackBasket[4] = { candy1, candy2, choco1, choco2 };

	for (int i = 0; i < 4; i++)
	{
		cout << i << "번째 상품 이름 : " << snackBasket[i].getProductName() << endl;
	}

	return 0;
}




