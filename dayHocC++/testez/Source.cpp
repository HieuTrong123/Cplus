#include<iostream>
#include<string>
using namespace std;
void Nhap(int a[],int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nNhap a[" << i << "]: ";
		cin >> a[i];
	}
}


bool KiemTraCP(int n) {
	int kq = (int)sqrt(n * 1.0);
	if (kq * kq == n) {
		return true;
	}
	return false;
}
int TongCP(int a[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (KiemTraCP(a[i])) {
			tong += a[i];
		}
	}
	return tong;
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << "\ntong cac so cp trong mang la: " << TongCP(a, n);
}
int main() {
	cout << "\nnhap so phan tu cua mang: ";
	int n, a[100];
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	int tong = TongCP(a, n);
	system("pause");
	return 0;
}