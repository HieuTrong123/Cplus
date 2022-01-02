#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	int* a = NULL;
	int n;
	XuLyMenu(a, n);
	
	delete[] a;
	_getch();
	return 0;
}