#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void GiaiPTBacNhat(double a, double b);
int main() {
	double a, b;
	cout << "\nNhap a : ";
	cin >> a;
	cout << "\nNhap b : ";
	cin >> b;
	
	GiaiPTBacNhat(a,b);


	_getch();
	return 0;
}
void GiaiPTBacNhat(double a, double b) {
	cout << "\nNghiem cua phuong trinh  ax + b = 0 la : ";
	double x;
	if (a == 0) {
		if (b == 0) {
			cout << "\nPhuong trinh vo so nghiem!";
		}
		else {
			cout << "\nPhuong trinh co vo nghiem!";
		}
	}
	else {
		x = -b / a;
		cout << "\nPhuong trinh co nghiem la x= " << x;
	}
}