#include <iostream>

using namespace std;

class Rectangle
{

public:
    // 생성자 선언
    float area() // 넓이 구하는 함수 
    {
        return m_width * m_height;
    }


    Rectangle(float w, float h)
    {
        m_width = w;
        m_height = h;
    } // 세미콜론 제거

    Rectangle(const Rectangle& rect)
    {
        // 멤버 변수 복사
        m_width = rect.m_width;
        m_height = rect.m_height;
    }



    //getter 함수 생성
    float getWidth()
    {
        return m_width;
    }

    float getHeight()
    {
        return m_height;
    }

    //setter 함수 생성
    void setWidth(float width)
    {
        this->m_width = width;
    }

    void setHeight(float height)
    {
        this->m_height = height;
    }

private:
    // 필드 변수 만들기 
    float m_width;
    float m_height;
};




int main()
{
    Rectangle rect(1, 2);
    cout << "원본 값의 결과는 " << rect.area() << "입니다." << endl;

    cout << "변경할 값을 입력하세요 (가로, 세로) : ";
    float width, height;
    cin >> width >> height;

    rect.setWidth(width);
    rect.setHeight(height);

    cout << "변경된 값의 벏이는? : " << rect.area() << endl;

    cout << "가로 길이 : " << rect.getWidth() << endl;
    cout << "세로 길이 : " << rect.getHeight() << endl;
    return 0;
}
