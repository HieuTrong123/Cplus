#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	SinhVien* ds=new SinhVien[100];
	int n = 0;
	XuLyMenu(ds, n);
	delete[] ds;
	system("pause");
	return 0;
}