#include<iostream>
#include<conio.h>
using namespace std;
void TinhBMI(double m, double h);
int main() {
double m, h;
	cout << "\nNhap khoi luong : ";
	cin >> m;
	cout << "\nNhap chieu cao : ";
	cin >> h;
	TinhBMI(m,h);

	_getch();
	return 0;
}
void TinhBMI(double m ,double h) {
	 double BMI= m / h * h;
	 if (BMI < 15) {
		 cout << "\nDoi khat";
	 }
	 else if (BMI < 17.5) {
		 cout << "\nBieng an";
	 }
	 else if (BMI < 18.5) {
		 cout << "\nThieu can";
	 }
	 else if (BMI >= 18.5 && BMI < 25) {
		 cout << "\nLy tuong";
	 }
	 else if (BMI >= 25 && BMI < 30) {
		 cout << "\nThua can";
	 }
	 else if (BMI >= 30 && BMI < 40) {
		 cout << "\nBeo phi";
	 }
	 else if (BMI>=40) {
		 cout << "\ntre em bi beo phi";
	 }
}
