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

	cout << "���� ���̸� �Է��ϼ���. : ";
	cin >> R.width;

	cout << "���� ���̸� �Է��ϼ���. : ";
	cin >> R.height;

	cout << "���̴�? " << R.width * R.height;

	return 0;

}
