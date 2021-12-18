#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"

int main() {
	ChuoiDong a = NULL;
	int n;
	cout << "\nNhap so phan tu cua chuoi dong : ";
	cin >> n;
	a = new char[n];
	XuLyMenu(a);
	delete[] a;
	_getch();
	return 1;
}
