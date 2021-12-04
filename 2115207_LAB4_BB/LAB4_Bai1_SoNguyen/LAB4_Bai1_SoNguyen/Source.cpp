#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"


int main() {
	ChayCT();
	return 0;
}
void ChayCT() {
	int n;
	cout << "\nNhap gia tri cua n : ";
	cin >> n;
	XuatMenu(n);
	_getch();
}