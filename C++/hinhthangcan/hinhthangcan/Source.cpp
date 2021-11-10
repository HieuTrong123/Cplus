#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float chuvi, canhben, dientich, a, b, h;
	cout << "\nnNhap gia tri cua day lon : ";
	cin >> a;
	cout << "\nnNhap gia tri cua day be : ";
	cin >> b;
	cout << "\nnNhap gia tri cua chieu cao : ";
	cin >> h;
	canhben = sqrt(pow(((a - b) / 2), 2) + pow(h, 2));
	chuvi = a + b + 2 * canhben;
	dientich = ((a + b) * h) / 2;
	cout << "\nGIa tri cua chu vi cua hinh thang la : " << chuvi;
	cout << "\nGIa tri cua dien tich cua hinh thang la : " << dientich;


	system("pause");
	return 0;
}