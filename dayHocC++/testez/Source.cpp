#include<iostream>
#include<string>
using namespace std;

int main() {
	string hoTen;
	string MSSV;
	string soDt;
	string lop;
	string gioiTinh;

	cout << "\nnhap ho ten sinh vien: ";
	getline(cin, hoTen);
	cout << "\nnhap ma so sv:";
	getline(cin, MSSV);
	cout << "\nnhap so dien thoai: ";
	getline(cin, soDt);
	cout << "\nnhap lop:";
	getline(cin, lop);
	cout << "\nnhap gioi tinh: ";
	getline(cin, gioiTinh);
	cout << "\nho ten sinh vien: "<<hoTen;
	cout << "\nma so sinh vien: " << MSSV;
	cout << "\nlop: " << lop;
	cout << "\ngioi tinh: " << gioiTinh;
	
	
	

	system("pause");
	return 0;
}