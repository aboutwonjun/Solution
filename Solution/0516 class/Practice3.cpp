//�ǽ� 1 ���
// 1) Shpae ��� Ŭ���� ����
// 1-1 ���� ����, �غ��� ���̸� �����ϴ� ���� ������ �־�� ��, �׸��� �̸� ����ϴ� printinfo �Լ� �־����

//2) Shape Ŭ���� ��� �޴�, Rectangle, Triangle ����
//2-1 Rectangle���� ���� ���̸� �ǹ��ϴ� ���� 
//2-2 Triangle���� ���� ���̸� �ǹ��ϴ� ���� 
//2-3 ���� ������ ���̸� ���ϴ� area �Լ� 
//2-4 �� Ŭ���� ��� �����ڿ��� ��� ������ ���� �����ؾ� ��

//�ǽ� 2 �������̵�
//printinfo �������̵� �غ���.


//�ǽ� 3 �����ε�




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

	int area()
	{
		return lengthBase * m_verticalLength;
	}

	//�����ε� 
	void printfInfo(int w, int h)
	{
		cout << "�簢���� ���̴� { " << w * h << " }" << endl;
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

	int area()
	{
		return (m_height * lengthBase) * 0.5;
	}

	void printfInfo(int w, int h)
	{
		cout << "�ﰢ���� ���̴� { " << w * h << " }" << endl;
	}


};


int main()
{
	// �簢�� �ν��Ͻ� ���� 
	Rectangle rectangle(5, 10); // Width: 5, Length: 10
	rectangle.printfInfo(5, 10);

	// �ﰢ�� �ν��Ͻ� ���� 
	Triangle triangle(4, 10);
	triangle.printfInfo(4, 10);

	return 0;
}