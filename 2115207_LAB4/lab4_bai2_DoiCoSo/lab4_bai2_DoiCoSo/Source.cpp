#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
void DoiCoSo(int n, int b);
void Menu();
void XuatMenu(int n);

#include"menu.h"
#include"thuvien.h"

int main() {
	int n;
	cout << "\nNhap n : ";
	cin >> n;
	XuatMenu(n);
	_getch();
	return 0;
}
