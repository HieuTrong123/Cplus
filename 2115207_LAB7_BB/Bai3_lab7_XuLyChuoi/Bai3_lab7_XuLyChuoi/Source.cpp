#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	xau a;
	fflush(stdin);
	cout << "\nNhap xau a : ";
	cin.getline(a, MAX);
	XuLyMenu(a);
	_getch();
	return 0;
}