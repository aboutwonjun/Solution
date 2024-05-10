#include <iostream>

using namespace std;

class Rectangle
{

public:
	// 생성자 선언
	Rectangle() {}
	
	// 설정할 2개의 숫자를 매개 변수로 받기.
	Rectangle(float width, float height)
	{
		// 멤버 변수라는 얘기 
		this->m_width = width;
		this->m_height = height;
	}

	//복사 생성자
	Rectangle(const Rectangle& Rect_copy)
	{
		// 멤버 변수 복사
		m_width = Rect_copy.m_width;
		m_height = Rect_copy.m_height;
	}

	float area() // 넓이 구하는 함수 
	{
		return m_width * m_height;
	}

	

private:
	// 필드 변수 만들기 
	float m_width;
	float m_height;
};




int main()
{
	float width, height;

	cout << "사각형의 가로 세로 길이 입력해주세요 (띄어쓰기로 구분) ";
	cin >> width >> height;
	Rectangle rec{ width, height };

	cout << "넓이는: " << rec.area() << endl;



	// 1-1 1번
	// 만든 클래스를 다른 클래스 변수에 복사하기
	Rectangle Rect_copy(rec);

	// 1-1 2번 
	// 1번에서 복사한 변수의 함수 호출해서 넓이 구하기 
	cout << "Rect_copy 결과값 : " << Rect_copy.area() << endl;

	// 1-1 3번
	// Rectangle 클래스를 기본 생성자로 생성된 다른 클래스 변수에 복사하기 (할당 사용) 
	Rectangle Rect_copy2(Rect_copy); 

	// 1-1 4번 
	// 복사한 변수의 area() 호출해서 넓이 구하기 
	cout << "Rect_copy2 결과값 : " << Rect_copy2.area() << endl;

	return 0;
}



