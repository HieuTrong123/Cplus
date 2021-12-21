#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"

int main() {
	ChuoiDong a;
	a = new char;
	XuLyMenu(a);
	delete[] a;
	_getch();
	return 1;
}
