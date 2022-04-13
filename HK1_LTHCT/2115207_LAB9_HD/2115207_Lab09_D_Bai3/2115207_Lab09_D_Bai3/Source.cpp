#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"

int main() {
	ChuoiDong a=NULL;
	a = new char[MAX];
	XuLyMenu(a);
	delete[] a;
	_getch();
	return 1;
}
