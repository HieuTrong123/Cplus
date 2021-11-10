#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float x, y;
	int n;
	cout << "\nNhap so thuc x : ";
	cin >> x;
	cout << "\nNhap so thuc y : ";
	cin >> y;
	cout << "\nNhap so mguyem n : ";
	cin >> n;
	cout << "\nKet qua cua bieu thuc x^n + y^n la : " << pow(x, n) + pow(y, n);



	system("pause");
	return 0;
}