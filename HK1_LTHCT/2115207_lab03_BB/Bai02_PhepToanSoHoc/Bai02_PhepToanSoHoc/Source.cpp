#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double TinhBieuThuc(double x, double y, char k);
int main() {
	double x, y;
	char k;
	do {
		cout << "\nNhap x : ";
		cin >> x;
		cout << "\nNhap y : ";
		cin >> y;
	} while (x == 0 || y == 0);
	
	cout << "\nNhap ky tu k : ";
	cin >> k;
	cout << "\nGia tri cua bieu thuc "<<x<<k<<y<<" = "<<TinhBieuThuc(x ,y ,k);

	_getch();
	return 0;
}
double TinhBieuThuc(double x, double y, char k) {


	switch (k) {
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case'*':
		return x * y;
		break;
	case'/':
		return x / y;
		break;
	default:
		return 0;
		break;
	}
}