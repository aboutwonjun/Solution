/* 
* 1. Candy, Chocolate Ŭ������ �����.
* 2. Candy : ��, ����, ��ǰ�̸�, ����ȸ�縦 �ǹ��ϴ� ���� ���� 
* 3. Chocolate : ���, ����, ��ǰ�̸�, ����ȸ�� �ǹ� ���� ����
* 4. Snack Class�� ���� ��� �޾ƾ���! (����� �� ������ : ����, ��ǰ�̸�, ����ȸ��)
* 5. ���� �Լ������� Candy, Chocolate Ŭ������ �� 2���� ��ü ����
* 6. ���� ��ü�� snackBasket�� �־���
* 7. �ݺ����� ���� ���ĵ��� ��ǰ �̸��� ��� 
*/

#include <iostream>
#include <string>
using namespace std;


// 1. ��ü Snack Class ���� / ����, ��ǰ �̸�, ����ȸ�� (����) 
#include <iostream>
#include <string>
using namespace std;


// 1. ��ü Snack Class ���� / ����, ��ǰ �̸�, ����ȸ�� (����) 
class Snack
{

private:
	int m_price;
	string m_productName;
	string m_company;

public:
	// Constructor
	Snack() {}

	// Getter �� Setter
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

// 2. Candy ���� / �� �߰�, ������ ��� 
class Candy : public Snack
{
private:
	string m_taste;

public:
	// Constructor
	Candy() {}

	// Getter �� Setter
	string getTaste()
	{
		return m_taste;
	}
	void setTaste(string taste)
	{
		m_taste = taste;
	}
};

// 3. Choco ���� / ����߰�, ������ ��� 
class Chocolate : public Snack
{
private:
	string m_shape;

public:
	// Constructor
	Chocolate() {}

	// Getter �� Setter
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

	//2-2 4��ü�� SnackBasket�� �ֱ�
	Snack snackBasket[4] = { candy1, candy2, choco1, choco2 };

	for (int i = 0; i < 4; i++)
	{
		cout << i << "��° ��ǰ �̸� : " << snackBasket[i].getProductName() << endl;
	}

	return 0;
}




