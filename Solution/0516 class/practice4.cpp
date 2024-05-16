#include <iostream>

using namespace std;

class Shape
{
protected : 
	virtual void draw() = 0;
};

class Circle : public Shape
{
public :
	Circle() {}
	 void draw() override { cout << "Ÿ����"; }
};

class Rectangle : public Shape
{
public : 
	Rectangle() {}
	void draw() override { cout << "�簢��"; }
};

class Triangle : public Shape
{
public : 
	Triangle() {}
	void draw() override { cout << "�ﰢ��"; }
};


int main()
{
	Circle cir;
	cir.draw();

	Rectangle rec;
	rec.draw();

	Triangle tri;
	tri.draw();




	return 0;
}