#include <iostream>

using namespace std;

class Shape
{
public:
	int numSide;
	int lengthBase;

	void printfInfo(int numSide, int lengthBase)
	{
		cout << "���� ����" << numSide;
		cout << "�غ��� ����" << lengthBase;
	}
};

class Rectangle : public Shape
{
private : 
	int m_verticalLength;

public:
	//�����ڿ��� ��� ������ ���� �����ؾ��� 
	Rectangle(int length_base, int verticalLength)
	{

		m_verticalLength = verticalLength;
		lengthBase = length_base;
	}

	void area()
	{
		cout << "������ ���̴�? : " << lengthBase * m_verticalLength;
	}
	

};


class Triangle : public Shape
{
private : 
	int m_height; //���� 


public:
	Triangle(int height, int length_base)
	{
		m_height = height;
		this->lengthBase = lengthBase;
	}

	void area()
	{
		cout << "�ﰢ���� ���̴�? : " << (m_height * lengthBase) / 2 << endl;
	}

};


int main()
{
	// �簢�� �ν��Ͻ� ���� 
	Rectangle rectangle(5, 10); // Width: 5, Length: 10

	rectangle.area(); 

	// �ﰢ�� �ν��Ͻ� ���� 
	Triangle triangle(4, 6);
	triangle.area();

	return 0;
}