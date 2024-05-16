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
	 void draw() override { cout << "타원형"; }
};

class Rectangle : public Shape
{
public : 
	Rectangle() {}
	void draw() override { cout << "사각형"; }
};

class Triangle : public Shape
{
public : 
	Triangle() {}
	void draw() override { cout << "삼각형"; }
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