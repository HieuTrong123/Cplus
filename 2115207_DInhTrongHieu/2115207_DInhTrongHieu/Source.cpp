#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>

using namespace std;
#include"2115207_thuvien.h"
#include"2115207_menu.h"
void ChayCT();
int main() {
	ChayCT();
	return 0;
}
void ChayCT() {
	BangDiem* ds = new BangDiem[MAX];
	int n = 0;
	XuLyMenu(ds, n);


	delete[] ds;
	_getch();
}