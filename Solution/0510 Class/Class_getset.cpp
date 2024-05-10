#include <iostream>

using namespace std;

class Rectangle
{

public:
    // ������ ����
    float area() // ���� ���ϴ� �Լ� 
    {
        return m_width * m_height;
    }


    Rectangle(float w, float h)
    {
        m_width = w;
        m_height = h;
    } // �����ݷ� ����

    Rectangle(const Rectangle& rect)
    {
        // ��� ���� ����
        m_width = rect.m_width;
        m_height = rect.m_height;
    }



    //getter �Լ� ����
    float getWidth()
    {
        return m_width;
    }

    float getHeight()
    {
        return m_height;
    }

    //setter �Լ� ����
    void setWidth(float width)
    {
        this->m_width = width;
    }

    void setHeight(float height)
    {
        this->m_height = height;
    }

private:
    // �ʵ� ���� ����� 
    float m_width;
    float m_height;
};




int main()
{
    Rectangle rect(1, 2);
    cout << "���� ���� ����� " << rect.area() << "�Դϴ�." << endl;

    cout << "������ ���� �Է��ϼ��� (����, ����) : ";
    float width, height;
    cin >> width >> height;

    rect.setWidth(width);
    rect.setHeight(height);

    cout << "����� ���� ���̴�? : " << rect.area() << endl;

    cout << "���� ���� : " << rect.getWidth() << endl;
    cout << "���� ���� : " << rect.getHeight() << endl;
    return 0;
}
