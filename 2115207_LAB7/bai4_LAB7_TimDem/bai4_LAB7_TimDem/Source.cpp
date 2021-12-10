#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	Chuoi a;
	fflush(stdin);
	cout << "\nnhap chuoi a : ";
	cin.getline(a, MAX);
	Xu_Ly_Menu(a);
	_getch();
	return 0;
}