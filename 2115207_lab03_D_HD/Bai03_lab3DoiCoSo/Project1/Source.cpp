#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void DoiHeSo(int n ,int b);
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
		
	DoiHeSo(n,b);
	


	_getch();
	return 0;
}
void DoiHeSo(int n ,int b) {
	if (n==0) {
		return;
	}
	else {
		int r = n % b;
		DoiHeSo(n/b,b);
		switch (r)
		{
		case 10:cout << "A";
			break;
		case 11:cout << "B";
			break;
		case 12:cout << "C";
			break;
		case 13:cout << "D";
			break;
		case 14:cout << "E";
			break;
		case 15:cout << "F";
			break;
		default:
			cout << r;
			break;
		}
		
	}
}