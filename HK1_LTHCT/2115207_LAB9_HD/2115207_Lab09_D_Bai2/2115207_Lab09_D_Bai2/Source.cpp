#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	int n;
	cout << "\nNhap so phan tu cua mang : ";
	cin >> n;
	MaTranVuong a = new int[n*n];
	MaTranVuong b = new int[n*n];
	Xu_Ly_Menu(a, b, n);
	delete[] a;
	delete[] b;
	_getch();
	return 0;
}