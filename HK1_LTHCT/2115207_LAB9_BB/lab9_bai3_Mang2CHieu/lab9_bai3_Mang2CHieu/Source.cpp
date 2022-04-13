#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	int* a = NULL;
	int n = 0;
	Xu_Ly_Menu(a, n);
	delete[] a;
	_getch();
	return 0;
}