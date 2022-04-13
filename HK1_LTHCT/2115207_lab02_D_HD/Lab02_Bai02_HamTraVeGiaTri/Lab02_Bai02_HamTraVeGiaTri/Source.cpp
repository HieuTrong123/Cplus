#include<iostream>
using namespace std;

int NhapSoNguyen();
int TinhTong(unsigned int n);

int main() {

	int x, y, z;
	x = NhapSoNguyen();
	y = NhapSoNguyen();
	cout << x << "+" << y << " = " << x + y;
	z = (x + y) * NhapSoNguyen();
	cout << endl << "z = " << z;
	int KetQua = 0;
	KetQua = TinhTong(50);
	cout << endl << "1 + 2 +...+ 50 " << KetQua;
	unsigned int m;
	cout << "\nNhap Mot so nguyen khong am : ";
	cin >> m;

	KetQua = TinhTong(m);
	cout << endl << "1 + 2 +...+ " << m << " = " << KetQua;
	

	system("pause");
	return 0;

}
int NhapSoNguyen() {
	int so;
	cout << endl << "\nNhap mot so nguyen : ";
	cin >> so;
	return so;
}
int TinhTong(unsigned int n) {
	int sum = 0;
	sum = n * (n + 1) / 2;
	return sum;
}

