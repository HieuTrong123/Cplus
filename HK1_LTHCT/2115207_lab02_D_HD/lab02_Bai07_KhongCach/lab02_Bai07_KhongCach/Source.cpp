#include<iostream>
#include<math.h>
using namespace std;
double TinhKhoangCach(double xa, double ya, double xb, double yb);
int main() {
	int xa, xb, ya, yb;
	cout << "\nNhap toa do diem xa : ";
	cin >> xa;
	cout << "\nNhap toa do diem xb : ";
	cin >> xb;
	cout << "\nNhap toa do diem ya : ";
	cin >> ya;
	cout << "\nNhap toa do diem yb : ";
	cin >> yb;
	cout << "\nKhoang cach AB la : " << TinhKhoangCach(xa, ya, xb, yb);

	system("pause");
	return 0;
}
double TinhKhoangCach(double xa, double ya, double xb, double yb) {
	double d = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
	return d;
}