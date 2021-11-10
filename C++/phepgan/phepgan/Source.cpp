#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int x, y;
	cout << "\nNhap gia tri cua x : ";
	cin >> x;
	cout << "\nNhap gia tri cua y : ";
	cin >> y;
	cout << "\nGia tri cua bieu thuc " << x << "+" << y << "= " << x + y;
	cout << "\nGia tri cua bieu thuc " << x << "-" << y << "= " << x - y;
	cout << "\nGia tri cua bieu thuc " << x << "*" << y << "= " << x * y;
	cout << "\nGia tri cua bieu thuc " << x << "/" << y << "= " << x / y;
	cout << "\nGia tri cua bieu thuc " << x << "%" << y << "= " << x % y;
	_getch();
	return 0;
}