#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	nhanvien a[MAX];
	int n = 0;
	XuLuyMenu(a, n);
	system("pause");
	return 0;
}