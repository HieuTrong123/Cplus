#include<iostream>
#include<conio.h>
#include<math.h>
#define e pow(10,-15)
using namespace std;
double fabs(double x);
double CanBacHai(double a);
int main() {
	double a;
	cout << "\nNhap so can tinhs can bac hai : ";
	cin >> a;
	cout<<"\nCan bac hai cua a la : "<<CanBacHai(a);


	_getch();
	return 0;
}

double CanBacHai(double a) {
	double xo,xn;
	if (a == 0) {
		xn = 0;
	}
	else {
		xn = 1;
		do {
			xo = xn;
			xn = (a / xo + xo) / 2.0;

		} while (fabs(xn-xo)>=e);
	}
	return xn;
}