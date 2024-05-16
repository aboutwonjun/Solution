#include <iostream>

using namespace std;

class Shape
{
public:
	int numSide;
	int numBase;

	void printfInfo(int numSide, int numBase)
	{
		cout << "변의 개수" << numSide;
		cout << "밑변의 길이" << numBase;
	}
};

class Rectangle : public Shape
{
private : 
	int m_width;
	int m_length;

public:
	//생성자에서 모든 변수에 값을 대입해야함 
	Rectangle(int width, int length)
	{
		m_width = width;
		m_length = length;
	}

	void area()
	{
		cout << "도형의 넓이는? : " << m_width * m_length;
	}
	

};


class Triangle : public Shape
{
private : 
	int m_height; //높이 
	int m_length; //세로 


public:
	Triangle(int height, int length)
	{
		m_height = height;
		m_length = length;
	}

	void area()
	{
		cout << "삼각형의 넓이는? : " << (m_height * m_length) / 2;
	}

};


int main()
{
	// 사각형 인스턴스 생성 
	Rectangle rectangle(5, 10); // Width: 5, Length: 10

	rectangle.area();

	// 삼각형 인스턴스 생성 
	Triangle triangle(4, 6); // Height: 4, Base: 6

	triangle.area();

	return 0;
}