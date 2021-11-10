#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14

int main() {
	float r,v,s;
	cout << "\nNhap gia tri ban kinh r : ";
	cin >> r;
	v = (4 / 3) * PI * pow(r, 3);
	s = 4 * PI * pow(r, 2);


	cout << "\nGia tri thr tich hinh tru la : " << v;
	cout << "\nGia tri dien tich hinh tru la : " << s;



	system("pause");
	return 0;
}