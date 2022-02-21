#include <iostream>
using namespace std;
#include "Thuvien.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int m, n;
	cout << "\nNhap so phan thuong: m = ";
	cin >> m;
	cout << "\nNhap so nguoi : n = ";
	cin >> n;
	cout << "So cach chia " << m << " phan thuong cho " << n << " nguoi la : " << Part(m, n) << endl;
	system("PAUSE");
}