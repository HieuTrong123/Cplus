#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 3600
#define SIXTY 60
int main() {
	int n;
	cout << "\nnhap so giay : ";
	cin >> n;
	int gio, phut, giay;
	gio = n / MAX;
	phut = (n % MAX) / SIXTY;
	giay = (n % MAX) % SIXTY;
	cout << "\ngiay sau khi doi la  : " << gio << ":" << phut << ":" << giay;
	_getch();
	return 0;
}