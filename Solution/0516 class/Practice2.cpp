//�ǽ� 1 ���
// 1) Shpae ��� Ŭ���� ����
// 1-1 ���� ����, �غ��� ���̸� �����ϴ� ���� ������ �־�� ��, �׸��� �̸� ����ϴ� printinfo �Լ� �־����

//2) Shape Ŭ���� ��� �޴�, Rectangle, Triangle ����
//2-1 Rectangle���� ���� ���̸� �ǹ��ϴ� ���� 
//2-2 Triangle���� ���� ���̸� �ǹ��ϴ� ���� 
//2-3 ���� ������ ���̸� ���ϴ� area �Լ� 
//2-4 �� Ŭ���� ��� �����ڿ��� ��� ������ ���� �����ؾ� ��




#include <iostream>

using namespace std;

class Shape
{
public:

	int numSide;
	int lengthBase;

	Shape() //������ȣ�� 
	{
		numSide = 0;
		lengthBase = 0;
	}

	void printfInfo()
	{
		cout << "���� ����" << numSide;
		cout << "�غ��� ����" << lengthBase;
	}
};

class Rectangle : public Shape
{
private:
	int m_verticalLength; // ���α��� ������� 

public:
	//�����ڿ��� ��� ������ ���� �����ؾ��� 
	Rectangle(int length_base, int verticalLength)
	{

		m_verticalLength = verticalLength;
		lengthBase = length_base;
		numSide = 4;
	}

	void area() 
	{
		cout << "������ ���̴�? : " << lengthBase * m_verticalLength;
	}

	void printfInfo()
	{

		cout << "�簢���� ���̴� :"  << lengthBase * m_verticalLength << endl;
	}


};


class Triangle : public Shape
{
private:
	int m_height; //���� 


public:
	Triangle(int height, int length_base)
	{
		m_height = height;
		lengthBase = lengthBase;
		numSide = 3;
	}

	void area()
	{
		cout << "�ﰢ���� ���̴�? : " << (m_height * lengthBase) * 0.5 << endl;
	}

	void printfInfo()
	{
		cout << "�ﰢ���� ���� :" (m_height * lengthBase) / 2   << endl;
	}


};


int main()
{
	// �簢�� �ν��Ͻ� ���� 
	Rectangle rectangle(5, 10); // Width: 5, Length: 10
	rectangle.printfInfo();

	// �ﰢ�� �ν��Ͻ� ���� 
	Triangle triangle(4, 10);
	triangle.printfInfo();

	return 0;
}