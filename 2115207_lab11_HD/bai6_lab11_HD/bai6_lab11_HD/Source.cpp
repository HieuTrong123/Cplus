#include <iostream>
#include <fstream>
#include <string.h>
#include<iomanip>
using namespace std;
#include "thuvien.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	char filename[80];
	NHANVIEN ds[MAX];
	int n, kq;
	do
	{
		system("cls");
		cout << "Nhap ten file mo de doc:"; cin >> filename;
		kq = Read_struct(filename, ds, n);
		if (!kq)
		{
			cout << "\nNhap lai tap tin";
			system("PAUSE");
		}
	} while (!kq);
	Read_struct(filename, ds, n);
	Xuat(ds, n);
	system("PAUSE");
}