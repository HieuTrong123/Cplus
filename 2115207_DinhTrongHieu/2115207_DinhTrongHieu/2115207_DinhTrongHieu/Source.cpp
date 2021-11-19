#include<iostream>
#include<conio.h>
using namespace std;
int TimMax2(int a, int b);
int TimMax4(int a, int b, int c, int d);
int main() {
	int a, b, c, d;
	cout << "\nNhap Gia tri so a : "; cin >> a;
	cout << "\nNhap Gia tri so b : "; cin >> b;
	cout << "\nNhap Gia tri so c : "; cin >>c;
	cout << "\nNhap Gia tri so d : "; cin >> d;
	cout << "\nGia tri lon nhat cua 4 so la : " << TimMax4(a,b,c,d);
	_getch();
	return 0;
}
int TimMax2(int a,int b) {
	int MAX;
	if (b > a) {
		MAX = b;
	}
	else {
		MAX = a;
	}
	return MAX;
}
int TimMax4(int a,int b, int c, int d) {
	int x = TimMax2(a, b);
	int y = TimMax2(c, d);
	int MAX = TimMax2(x,y);
	return MAX;
	
}