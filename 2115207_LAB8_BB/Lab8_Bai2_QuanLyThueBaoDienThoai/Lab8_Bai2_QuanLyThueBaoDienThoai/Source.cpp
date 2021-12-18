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
	ThueBao ds[100];
	int n = 0;
	Xu_Ly_Menu(ds, n);
}