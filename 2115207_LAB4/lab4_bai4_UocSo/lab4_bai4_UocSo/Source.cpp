#include<iostream>
#include<conio.h>
using namespace std;
void Menu();
void XuatMenu();
void XuatCacUocSoN(int n);
int DemSoLuongUoc(int n);
int TongCacUocSo(int n);
void TimSoLonNhatLuyThua2(int n);
bool KiemTraSoHoanThien(int n);
#include"thuvien.h"
#include"menu.h"
int main() {

	XuatMenu();
	_getch();
	return 0;
}