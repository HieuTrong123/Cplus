#include<iostream>
using namespace std;
#define MAX 3600
#define SIXTY 60
void DoiThoiGian(unsigned int n);
int main() {
	unsigned int n;
	cout << "\nNhap so giay n : ";
	cin >> n;
	DoiThoiGian(n);



	system("pause");
	return 0;
}
void DoiThoiGian(unsigned int n) {
	int gio, phut, giay;
	gio = n / MAX;
	phut = (n % MAX) / SIXTY;
	giay = (n % MAX) % SIXTY;

	cout << endl << gio << " : " << phut << " : " << giay;
}

	