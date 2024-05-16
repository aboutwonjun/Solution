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
class Snack
{
public:
	int price;
	string productName;
	string company;
};

// 2. Candy ���� / �� �߰�, ������ ��� 
class Candy : public Snack
{
public : 
	string taste;
};


// 3. Choco ���� / ����߰�, ������ ��� 
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

	//2-2 4��ü�� SnackBasket�� �ֱ�

	//��ü �迭! https://blog.hexabrain.net/174
	Snack snackBasket[4] = {candy1, candy2, choco1, choco2 };


	for(int i = 0; i < 4; i++)
	{
		cout << i << "��° ��ǰ �̸� : "<<  snackBasket[i].productName << endl;
	}

	return 0;

	}





