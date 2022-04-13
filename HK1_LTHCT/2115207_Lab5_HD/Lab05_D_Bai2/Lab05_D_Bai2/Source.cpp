#include<iostream>
#include<conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"
void ChayCT();
int main() {
	ChayCT();
	return 0;
}
void ChayCT() {
	int menu, 
		soMenu = 7; 
	int n = 0; 
	DaySo a; 
		do
		{
			menu = ChonMenu(soMenu);
			XuLyMenu(menu, a, n);
		} while (menu > 0);
	_getch();
}