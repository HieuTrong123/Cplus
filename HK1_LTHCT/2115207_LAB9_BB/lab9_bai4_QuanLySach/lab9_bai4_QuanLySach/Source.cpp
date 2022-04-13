#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	TaiLieu* a=new TaiLieu[MAX];
	int n = 0;
	XuLyMenu(a, n);
	_getch();
	return 0;
}