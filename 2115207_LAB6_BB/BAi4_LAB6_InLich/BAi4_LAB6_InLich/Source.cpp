#include<iostream>
#include<conio.h>

using namespace std;
#include"thuvien.h"
int main() {
	int a[42];
	int  day, month, year;
	cout << "\nNhap thang : ";
	cin >> month;
	cout << "\nNhap nam :";
	cin >> year;
	In_Lich(a, month, year);

	_getch();
	return 0;
}

