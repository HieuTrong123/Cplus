#include<iostream>
#include<conio.h>
using namespace std;
void Chuyen(int n, char nguon, char trungGian, char dich);

int main() {
	int n;
	cout << "\nnhap n so dia : ";
	cin >> n;
	Chuyen(n, 'N', 'T', 'D');
	_getch();
	return 0;
}
void Chuyen(int n, char nguon, char trungGian, char dich) {
	if (n == 0) {
		return;
	}
	else {
		if (n == 1) {
			cout << nguon << "-->" << dich << endl;
		}
		else {
			Chuyen(n - 1, nguon, dich, trungGian);
			Chuyen(1, nguon, trungGian, dich);
			Chuyen(n - 1, trungGian, nguon, dich);
		}
	}
}