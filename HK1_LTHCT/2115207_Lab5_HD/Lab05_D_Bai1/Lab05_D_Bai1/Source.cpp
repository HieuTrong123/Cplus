#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"
void ChayChuongTrinh();
int main() {
	ChayChuongTrinh();

	_getch();
	return 0;
}
void ChayChuongTrinh()
{
	int menu,
		soMenu = 8,
		n = 0;
	DaySo a;
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;

	NhapMang(a, n);

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}