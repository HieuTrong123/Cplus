#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main() {
	cout << setiosflags(ios::left) << setw(10) << "MSSV"
		<< setw(25) << "ho va ten"
		<< setw(10) << "lop"
		<< setw(10) << "diem TB"
		<< setw(10) << "diem TL"
		<< endl;
	cout << setiosflags(ios::left) << setw(10) << "1210234"
		<< setw(25) << "nguyen quang tam"
		<< setw(10) << "CTK38CD"
		<< setw(10) << "7.50"
		<< setw(10) << setprecision(2) << 5.75
		<< endl;

	_getch();
	return 0;
}