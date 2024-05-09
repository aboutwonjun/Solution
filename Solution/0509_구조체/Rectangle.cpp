#include <iostream>
using namespace std;

struct Rectangle
{
	float width = 0;
	float height = 0;
};




int main () 
{
	Rectangle R;

	cout << "가로 길이를 입력하세요. : ";
	cin >> R.width;

	cout << "세로 길이를 입력하세요. : ";
	cin >> R.height;

	cout << "넓이는? " << R.width * R.height;

	return 0;

}
