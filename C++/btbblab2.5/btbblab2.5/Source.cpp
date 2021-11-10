#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
float TheTichKhoiCau(float r);
float DienTichMatCau(float r);
int main() {
	float r, v, s;
	cout << "\nNhap gia tri ban kinh r : ";
	cin >> r;
	


	cout << "\nGia tri thr tich hinh tru la : " << TheTichKhoiCau(r);
	cout << "\nGia tri dien tich hinh tru la : " << DienTichMatCau(r);



	system("pause");
	return 0;
}
float TheTichKhoiCau(float r) {
	float v = (4 / 3) * PI * pow(r, 3);
	return v;
}
float DienTichMatCau(float r) {
	float s = 4 * PI * pow(r, 2);
	return s;
}