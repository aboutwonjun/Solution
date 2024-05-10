#include <iostream>

using namespace std;

class Rectangle
{

public:
	// ������ ����
	Rectangle() {}
	
	// ������ 2���� ���ڸ� �Ű� ������ �ޱ�.
	Rectangle(float width, float height)
	{
		// ��� ������� ��� 
		this->m_width = width;
		this->m_height = height;
	}

	//���� ������
	Rectangle(const Rectangle& Rect_copy)
	{
		// ��� ���� ����
		m_width = Rect_copy.m_width;
		m_height = Rect_copy.m_height;
	}

	float area() // ���� ���ϴ� �Լ� 
	{
		return m_width * m_height;
	}

	

private:
	// �ʵ� ���� ����� 
	float m_width;
	float m_height;
};




int main()
{
	float width, height;

	cout << "�簢���� ���� ���� ���� �Է����ּ��� (����� ����) ";
	cin >> width >> height;
	Rectangle rec{ width, height };

	cout << "���̴�: " << rec.area() << endl;



	// 1-1 1��
	// ���� Ŭ������ �ٸ� Ŭ���� ������ �����ϱ�
	Rectangle Rect_copy(rec);

	// 1-1 2�� 
	// 1������ ������ ������ �Լ� ȣ���ؼ� ���� ���ϱ� 
	cout << "Rect_copy ����� : " << Rect_copy.area() << endl;

	// 1-1 3��
	// Rectangle Ŭ������ �⺻ �����ڷ� ������ �ٸ� Ŭ���� ������ �����ϱ� (�Ҵ� ���) 
	Rectangle Rect_copy2(Rect_copy); 

	// 1-1 4�� 
	// ������ ������ area() ȣ���ؼ� ���� ���ϱ� 
	cout << "Rect_copy2 ����� : " << Rect_copy2.area() << endl;

	return 0;
}



