#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;
#include"thuvien.h"
#include"menu.h" 
int main() {
	NhanVien ds[100];
	int n;
	XuLyMenu(ds, n);
	_getch();
	return 0;
}
