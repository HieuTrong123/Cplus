#include <iostream>
#include <conio.h>
using namespace std;
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);
double TinhTongR(unsigned int n);
double TinhTongS(unsigned int n);
double TinhTongT(unsigned int n);
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
		soMenu = 3;
	unsigned int n;
	
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
	_getch();
}