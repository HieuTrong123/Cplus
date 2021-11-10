#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main() {
	int a, b, c;
	float p, chuvi, dientich;
	cout << "\nnhap gia tri a : ";
	cin >> a;
	cout << "\nnhap gia tri b : ";
	cin >> b;
	cout << "\nnhap gia tri c : ";
	cin >> c;
	p = (a + b + c) / 2.0;
	chuvi = a + b + c;
	dientich = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "\nchu vi hinh tam giac la : " << chuvi;
	cout << "\ndien tich hinh tam giac la : " << dientich;
	_getch();
	return 0;
}