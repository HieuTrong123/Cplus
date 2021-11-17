#include<iostream>
using namespace std;
double TinhChiSoBMI(double w, double h);
int main() {
	double w, h;
	cout << "\nNhap khoi luong co the w : ";
	cin >> w;
	cout << "\nNhap chieu cao co the h : ";
	cin >> h;
	cout << "\nChi so BMI la : " << TinhChiSoBMI(w, h);


	system("pause");
	return 0;
}
double TinhChiSoBMI(double w, double h) {
	double BMI = w / h * h;
	return BMI;
}