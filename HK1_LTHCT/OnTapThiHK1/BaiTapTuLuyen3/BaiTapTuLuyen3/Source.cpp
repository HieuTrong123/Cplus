#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	vector<SinhVien> ds;
	XuLyMenu(ds);


	_getch();
	return 0;
}