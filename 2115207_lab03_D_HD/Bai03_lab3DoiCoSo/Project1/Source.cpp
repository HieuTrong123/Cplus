#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int TimLuyThua(int b, int n);
void DoiHeSo(int n, int b);
int main(){
	int n, b;
	cout << "\nNhap so n : ";
	cin >> n;
	do {
		cout << "\nNhap he co so b : ";
		cin >> b;
		if (b < 2 && b>16) {
			cout << "\nHe co so khong dung! hay nhap lai!";
		}
		} while (b < 2 && b>16);
		DoiHeSo(n, b);

	


	_getch();
	return 0;
}
int TimLuyThua(int b, int n) {
	for (int i = n;i>=0; i--) {
		for (int j = 0;; j++) {
			if (i <= n && i == pow(b, j)) {
				return i;
			}
		}
	}
}


void DoiHeSo(int n, int b) {
	int v, so;
	v = TimLuyThua(b, n);
	while (v > 0) {
		if (n < v) {
			cout << 0;
		}
		else {
			so = n / v;
			cout << so;
			n = n - so * v;
		}
		v = v / b;
	}
}