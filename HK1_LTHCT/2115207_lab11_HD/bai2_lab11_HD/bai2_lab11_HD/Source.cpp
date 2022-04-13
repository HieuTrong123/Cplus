#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
#include"thuvien.h"
int main() {
	int n;
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	char filename[100];
	cout << "\nnhap ten file de doc : ";
	cin >> filename;
	cout << "\ntien hanh nhap file kq1.txt";
	Write_Int(a, 9, filename);
	cout << "\nxem gia tri vua nhap : ";
	File_Display1(filename);
	_getch();
	return 0;
}