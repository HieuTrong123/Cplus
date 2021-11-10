#include<iostream>
using namespace std;
#define PI 3.1415926
double TinhChuViHinhTron(double r);
double TinhDienTichHinhTron(double r);
int main() {
	double r;
	cout << "\nNhap ban kinh : ";
	cin >> r;
	cout<<"\nChu vi hinh tron ban kinh r la : "<<TinhChuViHinhTron(r);
	cout << "\nDien tich hinh tron ban kinh r la : " << TinhDienTichHinhTron(r);

	system("pause");
	return 0;
}
double TinhChuViHinhTron(double r) {
	double chuvi;
	chuvi = 2 * r * PI;
	return chuvi;
}
double TinhDienTichHinhTron(double r) {
	double Dientich;

	Dientich = r * r * PI;
	return Dientich;
}