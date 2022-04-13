#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
int main() {
	int* a;
	int n;
	cout << "Nhap so phan tu cua mang dong : ";
	cin >> n;
	a = new int[n];
	Nhap_Mang(a, n);
	Xuat_Mang(a, n);
	XuatGiaTri_SoLan_PhanBiet(a, n);



	delete[] a;
	_getch();
	return 0;
}