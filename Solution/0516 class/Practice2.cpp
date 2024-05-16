//실습 1 상속
// 1) Shpae 라는 클래스 생성
// 1-1 변의 개수, 밑변의 길이를 저장하는 변수 가지고 있어야 함, 그리고 이를 출력하는 printinfo 함수 있어야함

//2) Shape 클래스 상속 받는, Rectangle, Triangle 생성
//2-1 Rectangle에는 세로 길이를 의미하는 변수 
//2-2 Triangle에는 높이 길이를 의미하는 변수 
//2-3 각각 도형의 넓이를 구하는 area 함수 
//2-4 두 클래스 모두 생성자에서 모든 변수에 값을 대입해야 함




#include <iostream>

using namespace std;

class Shape
{
public:

	int numSide;
	int lengthBase;

	Shape() //생성자호출 
	{
		numSide = 0;
		lengthBase = 0;
	}

	void printfInfo()
	{
		cout << "변의 개수" << numSide;
		cout << "밑변의 길이" << lengthBase;
	}
};

class Rectangle : public Shape
{
private:
	int m_verticalLength; // 세로길이 멤버변수 

public:
	//생성자에서 모든 변수에 값을 대입해야함 
	Rectangle(int length_base, int verticalLength)
	{

		m_verticalLength = verticalLength;
		lengthBase = length_base;
		numSide = 4;
	}

	void area() 
	{
		cout << "도형의 넓이는? : " << lengthBase * m_verticalLength;
	}

	void printfInfo()
	{

		cout << "사각형의 넓이는 :"  << lengthBase * m_verticalLength << endl;
	}


};


class Triangle : public Shape
{
private:
	int m_height; //높이 


public:
	Triangle(int height, int length_base)
	{
		m_height = height;
		lengthBase = lengthBase;
		numSide = 3;
	}

	void area()
	{
		cout << "삼각형의 넓이는? : " << (m_height * lengthBase) * 0.5 << endl;
	}

	void printfInfo()
	{
		cout << "삼각형의 넓이 :" (m_height * lengthBase) / 2   << endl;
	}


};


int main()
{
	// 사각형 인스턴스 생성 
	Rectangle rectangle(5, 10); // Width: 5, Length: 10
	rectangle.printfInfo();

	// 삼각형 인스턴스 생성 
	Triangle triangle(4, 10);
	triangle.printfInfo();

	return 0;
}