#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;
#include"thuvien.h"
#include"menu.h"
void ChayCT();
int main() {
	ChayCT();
	_getch();
	return 0;
}
void ChayCT() {
	NhanVien* ds = new NhanVien[MAX];
	int n = 0;
	XuLyMenu(ds, n);
}