#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
#include"thuvien.h"
#include"menu.h"
int main() {
	vector<SinhVien> ds_sinhVien;
	NhapThongTinSinhVien(ds_sinhVien, "Text.txt");
	cout << "\ndanh sach sinh vien la: ";
	XuatDanhSach(ds_sinhVien);
	system("pause");
	return 0;
}