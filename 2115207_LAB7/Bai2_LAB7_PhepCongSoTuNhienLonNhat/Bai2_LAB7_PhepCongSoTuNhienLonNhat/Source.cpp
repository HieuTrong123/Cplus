#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	SoTuNhienLon m, n, t;
	fflush(stdin);
	cout << "\nNhap m : ";
    gets_s(m, MAX);
	cout << "\nNhap n : ";

	gets_s(n, MAX);
	Xu_Ly_Menu(m, n, t);

	return 0;
}
