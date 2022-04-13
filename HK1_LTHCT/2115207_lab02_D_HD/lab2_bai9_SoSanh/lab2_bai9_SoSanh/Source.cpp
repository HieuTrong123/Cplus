#include<iostream>
using namespace std;
double TimMax(double x, double y);
double TimMax4(double a, double b, double c, double d);
int main() {
	int a, b, c, d;
	cout << "\nNhap gia tri so a : ";
	cin >> a;
	cout << "\nNhap gia tri so b : ";
	cin >> b;
	cout << "\nNhap gia tri so c : ";
	cin >> c;
	cout << "\nNhap gia tri so d : ";
	cin >> d;
	cout << "\nso lon nhat trong 4 so la : " << TimMax4(a, b, c, d);

	system("pause");
	return 0;
}
double TimMax(double x, double y) {
	return (x > y) ? x : y;
}
double TimMax4(double a, double b, double c, double d) {
	double z, m;
	z = TimMax(a, b);
	m = TimMax(c, d);
	return (z > m) ? z : m;
}