#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"
void Chay_CT();
int main() {
	Chay_CT();
	_getch();
	return 0;
}
void Chay_CT() {
	int soMenu = 6,
		menu;
	int m = 3, n = 4; //khoi dau m, n
	//khoi dau A, B
	DaThuc A = {
	{1,1},
	{4,2},
	{-5,6}
	},
		B = {
		{1, 0 },
		{-4, 2},
		{3, 3 },
		{6, 4 }
	};
	Xu_Ly_Menu(A, m, B, n);
}