#include <iostream>

using namespace std;

class Shape
{
public:
	int numSide;
	int numBase;

	void printfInfo(int numSide, int numBase)
	{
		cout << "���� ����" << numSide;
		cout << "�غ��� ����" << numBase;
	}
};

class Rectangle : public Shape
{
private : 
	int m_width;
	int m_length;

public:
	//�����ڿ��� ��� ������ ���� �����ؾ��� 
	Rectangle(int width, int length)
	{
		m_width = width;
		m_length = length;
	}

	void area()
	{
		cout << "������ ���̴�? : " << m_width * m_length;
	}
	

};


class Triangle : public Shape
{
private : 
	int m_height; //���� 
	int m_length; //���� 


public:
	Triangle(int height, int length)
	{
		m_height = height;
		m_length = length;
	}

	void area()
	{
		cout << "�ﰢ���� ���̴�? : " << (m_height * m_length) / 2;
	}

};


int main()
{
	// �簢�� �ν��Ͻ� ���� 
	Rectangle rectangle(5, 10); // Width: 5, Length: 10

	rectangle.area();

	// �ﰢ�� �ν��Ͻ� ���� 
	Triangle triangle(4, 6); // Height: 4, Base: 6

	triangle.area();

	return 0;
}