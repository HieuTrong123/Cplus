#include<iostream>
#include<math.h>
using namespace std;
double TinhCanhBen(int dayLon, int dayBe, int chieuCao);
double TinhChuVi(int dayLon, int dayBe, double canhBen);
double TinhDienTich(int dayLon, int dayBe, int chieuCao);
int main() {
	float chuvi, canhben, dientich, a, b, h;
	cout << "\nnNhap gia tri cua day lon : ";
	cin >> a;
	cout << "\nnNhap gia tri cua day be : ";
	cin >> b;
	cout << "\nnNhap gia tri cua chieu cao : ";
	cin >> h;
	
	cout << "\nGIa tri cua chu vi cua hinh thang la : " << TinhChuVi(a,b,h);
	cout << "\nGIa tri cua dien tich cua hinh thang la : " << TinhDienTich(a,b,h);


	system("pause");
	return 0;
}
double TinhCanhBen(int a, int b, int h) {
	double canhben = sqrt(pow(((a - b) / 2), 2) + pow(h, 2));
	return canhben;
}
double TinhChuVi(int a, int b, double h) {
	double chuvi = a + b + 2 * TinhCanhBen(a,b,h);
	return chuvi;
}
double TinhDienTich(int a, int b, int h) {
	double dientich = ((a + b) * h) / 2;
	return dientich;
}