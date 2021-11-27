#include <iostream>
#include <conio.h>
using namespace std;

#include "thuvien.h"
#include "menu.h"
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