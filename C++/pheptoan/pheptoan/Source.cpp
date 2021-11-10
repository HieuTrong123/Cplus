#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int x =1 , y=1;
	x++;
	cout << "\ngia tri cua x la : " << x;
	x--;
	cout << "\ngia tri cua x la : " << x;
	++x;
	cout << "\ngia tri cua x la : " << x;
	x = x / y;
	cout << "\ngia tri cua x la : " << x;
	y = x % y;
	cout << "\ngia tri cua y la : " << y;
	x *= y; 
	cout << "\ngia tri cua x la : " << x;



	_getch();
	return 0;
}