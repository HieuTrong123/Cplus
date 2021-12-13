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
	_getch();
	return 1;
}
void ChayChuongTrinh()
{
	int soMenu = 9,
		menu,
		n = 0;
	MaTranVuong a;
	MaTranVuong b;
	MaTranVuong c;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a,b,c, n);
	} while (menu > 0);

}