#include <iostream>
#include <conio.h>
using namespace std;
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
double DienTichHinhVuong(double canh);
double DienTichHinhChuNhat(double dai, double rong);
double DienTichTamGiac(double a, double b, double c);
double DienTichHinhTron(double banKinh);
#include "thuvien.h"
#include "menu.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int menu,
		soMenu = 4;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu>0);
	_getch();
}