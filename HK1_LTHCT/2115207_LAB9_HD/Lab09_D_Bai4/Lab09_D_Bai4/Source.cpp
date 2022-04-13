#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;
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
		soMenu = 6,
		n = 0;
	SinhVien* a;
	a = new SinhVien[MAX];
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	delete[] a;
	_getch();
}