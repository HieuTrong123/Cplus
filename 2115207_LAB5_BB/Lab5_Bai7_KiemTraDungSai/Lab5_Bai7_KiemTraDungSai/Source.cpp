#include<iostream>
#include<conio.h>
using namespace std;
#include"ThuVien.h"
#include"Menu.h"
void ChayCT();
int main() {
	ChayCT();
	_getch();
	return 0;
}
void ChayCT() {
	int a[MAX];
	Xu_Ly_Menu(a);
}