#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	NhanVien ds[MAX];
	int n = 0;
	XuLyMenu(ds, n);
	
	system("pause");
	return 0;
}