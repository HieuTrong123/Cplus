#include<iostream>
#include<conio.h>
using namespace std;
int TinhTong(unsigned int n);
int TinhGiaiThua(unsigned int n);
int main() {
	unsigned int n;
	cout << "\nNhap mot so nguyen khong am";
	cin >> n;
	long KetQua;
	KetQua = TinhGiaiThua(n);
	cout << n << "! = " << KetQua;
	KetQua = TinhTong(n);
	cout << "\n1 + 2 + ..... + n = " << KetQua;

	_getch();
	return 0;
}
int TinhGiaiThua(unsigned int n) {
	int kq;
	if (n < 2) {
		return 1;
	}
	else {
		kq = 1;
		for (int i = 2; i <= n; i++) {
			kq *=  i;
		}
		return kq;
	}
}
int TinhTong(unsigned int n) {
	int sum = 0;
	for (int i = 1; i <= n;i++) {
		sum += i;
		
	}
	return sum;
}
