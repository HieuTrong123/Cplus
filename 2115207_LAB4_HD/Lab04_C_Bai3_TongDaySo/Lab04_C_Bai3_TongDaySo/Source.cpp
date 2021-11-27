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
		soMenu = 3;
	unsigned int n;
	
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu ,n);
	} while (menu > 0);
	_getch();
}