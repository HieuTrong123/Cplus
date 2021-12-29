#include<iostream>
#include<conio.h>
using namespace std;
void DaoCHuoi(char c[], int n);

int main() {
	char c[100];
	fflush(stdin);
	cout << "\nNhap chuoi : ";
	gets_s(c, 100);
	int n = strlen(c);
	cout << "\nxem chuoi : "<< c ;
	cout << "\nchuoi sau khi dao la : ";
	DaoCHuoi(c, n);

	


	_getch();
	return 0;
}
void DaoCHuoi(char c[],int n) {
	if (n == 0) {
		return;
	}
	else {
		cout << c[n-1];
		DaoCHuoi(c, n - 1);
	}
}