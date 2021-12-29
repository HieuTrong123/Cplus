#include<iostream>
#include"conio.h"
using namespace std;
int UCLL(int x, int y);
int main() {
	int x, y;
	do {

		cout << "\nNhap gia tri x : ";
		cin >> x;
		cout << "\nnhap gia tri y : ";
		cin >> y;
		if (x <= 0 || y <= 0) {
			cout << "\ngia tri khong hop le hay nhap lai!!";
		}
	} while (x <= 0 || y <= 0);
	cout<<"\nuoc chung lon nhat cua x va y la : " << UCLL(x, y);
	_getch();
	return 0;
}
int UCLL(int x, int y) {
	if (x == y) {
		return x;
	}
	else {
		if (x > y) {
			UCLL(x - y, y);
		}
		else {
			UCLL(x, y - x);
		}

	}
}