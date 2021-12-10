#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
int main() {
	Chuoi a;
	int b[MAX];
	fflush(stdin);
	cout << "\nNhap chuoi a : ";
	cin.getline(a, MAX);
	Chuyen_Chuoi_Thanh_So(a,b);


	_getch();
	return 0;
}