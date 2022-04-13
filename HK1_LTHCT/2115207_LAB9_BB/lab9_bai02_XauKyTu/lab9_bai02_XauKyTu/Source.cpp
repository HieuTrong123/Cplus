#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	char* a = NULL;
	int n = 0;
	XuLy_Menu(a,n);
	delete[] a;
	_getch();
	return 0;
}