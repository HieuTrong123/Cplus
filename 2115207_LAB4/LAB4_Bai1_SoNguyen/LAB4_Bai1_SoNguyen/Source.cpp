#include<iostream>
#include<conio.h>
using namespace std;
void ChayCT();
void Menu();
void XuatMenu(int n);
void XuatSoDenn(int n);
void SoChiaHetCho3(int n);
int SoLuongSoN(int n);
int DaoNguocSo(int n);
int TongCacSo(int n);
int SoDauTien(int n);
int TimM(int n);
#include"menu.h"
#include"thuvien.h"


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