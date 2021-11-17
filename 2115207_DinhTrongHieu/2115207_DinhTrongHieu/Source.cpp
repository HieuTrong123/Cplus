#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
double Tinh_Dien_Tich_HT(double R);
int main() {
	double R;
	cout << "\nNhap ban kinh R : ";
	cin >> R;
	cout << "\nDien tich hinh tron la : "<<Tinh_Dien_Tich_HT(R);

	system("pause");
	return 0;
}
double Tinh_Dien_Tich_HT(double R) {
	return pow(R, 2) * PI;
}