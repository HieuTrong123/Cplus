#include<iostream>
#include<conio.h>
using namespace std;
void ThongKe(unsigned int n);
unsigned short NhapDiem(int stt);
int main() {
	unsigned n;
	cout << "\nNhap so luong sinh vien : ";
	cin >> n;
	ThongKe(n);



	_getch();
	return 0;
}
unsigned short NhapDiem(int stt) {
	unsigned short Diem;
	do{
		cout << "\nNhap diem cua sinh vien thu " << stt << " : ";
		cin >> Diem;
	} while (Diem<0||Diem>10);
	return Diem;
}
void ThongKe(unsigned int n) {
	int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, 
		d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0;
	unsigned short Diem;
	for (int i = 0; i < n;i++) {
		Diem = NhapDiem(i+1);
		switch (Diem)
		{
		case 0:d0++;
			break;
		case 1:d1++;
			break;
		case 2:d2++;
			break;
		case 3:d3++;
			break;
		case 4:d4++;
			break;
		case 5:d5++;
			break;
		case 6:d6++;
			break;
		case 7:d7++;
			break;
		case 8:d8++;
			break;
		case 9:d9++;
			break;
		case 10:d10++;
			break;
		}
	}
	cout << "\nSo sinh vien co so diem >= 0 : "<<d0;
	cout << "\nSo sinh vien co so diem >= 1 : " << d1;
	cout << "\nSo sinh vien co so diem >= 2 : " << d2;
	cout << "\nSo sinh vien co so diem >= 3 : " << d3;
	cout << "\nSo sinh vien co so diem >= 4 : " << d4;
	cout << "\nSo sinh vien co so diem >= 5 : " << d5;
	cout << "\nSo sinh vien co so diem >= 6 : " << d6;
	cout << "\nSo sinh vien co so diem >= 7 : " << d7;
	cout << "\nSo sinh vien co so diem >= 8 : " << d8;
	cout << "\nSo sinh vien co so diem >= 9 : " << d9;
	cout << "\nSo sinh vien co so diem >= 10 : " << d10;
}