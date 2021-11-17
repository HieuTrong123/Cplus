#include<iostream>
#include<conio.h>
using namespace std;
double TinhTongForHn(int n);
double TinhTongForSn(int n);
double TinhTongWhileHn(int n);
double TinhTongWhileSn(int n);
double TinhTongDoWhileHn(int n);
double TinhTongDoWhileSn(int n);

int main() {
	int n;
	cout << "\nNhap n : ";
	cin >> n;
	cout<<"\nGia tri Hn bang vong lap for la : "<<TinhTongForHn(n);
	cout << "\nGia tri Sn bang vong lap for la : " << TinhTongForSn(n);
	cout << "\nGia tri Hn bang vong lap while la : " << TinhTongWhileHn(n);
	cout << "\nGia tri Sn bang vong lap while la : " << TinhTongWhileSn(n);
	cout << "\nGia tri Hn bang vong lap Do while la : " << TinhTongDoWhileHn(n);
	cout << "\nGia tri Sn bang vong lap Do while la : " << TinhTongDoWhileSn(n);

	_getch();
	return 0;
}
double TinhTongForHn(int n) {
	double Hn=0;
	for (int i = 1; i <= n; i++) {
		Hn = Hn + (1.0 / i);
	}
	return Hn;
}
double TinhTongForSn(int n) {
	double Sn = 0;
	for (int i = 1; i <= n; i++) {
		Sn = Sn + (i + 1.0) / i * i;
	}
	return Sn;
}
double TinhTongWhileHn(int n) {
	double Hn=0;
	int i = 1;
	while (i <= n) {
		Hn = Hn + (1.0 / i);
		i++;
	}
	return Hn;
}
double TinhTongWhileSn(int n) {
	double Sn=0;
	int i = 1;
	while (i <= n) {
		Sn = Sn + (i + 1.0) / i * i;
		i++;
	}
	return Sn;
}
double TinhTongDoWhileHn(int n) {
	double Hn=0;
	int i = 1;
	do {
		Hn = Hn + (1.0 / i);
		i++;
	} while (i<=n);
	return Hn;
}
double TinhTongDoWhileSn(int n) {
	double Sn = 0;
	int i = 1;
	do {
		Sn = Sn + (i + 1.0) / i * i;
		i++;
	} while (i <= n);
	return Sn;
}
