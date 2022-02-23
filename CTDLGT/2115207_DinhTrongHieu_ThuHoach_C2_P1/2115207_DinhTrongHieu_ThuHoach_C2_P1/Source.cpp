#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
using namespace std;
#include"Thuvien.h"
#include"Menu.h"
int main() {
	HocVien ds[100];
	int n=0;
	XuLyMenu(ds, n);

	system("pause");
	return 0;
}