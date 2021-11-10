#include<iostream>
using namespace std;
#define PI 3.14

float TheTichHinhTruTron(float r, float h);
float DienTichXungQuanh(float r, float h);
float DienTichToanPhan(float r, float h);
int main() {
	float r, h, v, sxq, stp;
	cout << "\nNhap gia tri ban kinh r : ";
	cin >> r;
	cout << "\nNhap gia tri chhieu cao h : ";
	cin >> h;
	
	cout << "\nGia tri thr tich hinh tru la : " << TheTichHinhTruTron(r,h);
	cout << "\nGia tri dien tich xung quanh hinh tru la : " << DienTichXungQuanh(r,h);
	cout << "\nGia tri dien tich toan phan la hinh tru la : " << DienTichToanPhan(r,h);
	system("Pause");
	return 0;
}
float TheTichHinhTruTron(float r,float h) {
	float v = PI * r * 2 * h;
	return v;
}
float DienTichXungQuanh(float r, float h) {
	float sxq = 2 * PI * r * h;
	return sxq;
}
float DienTichToanPhan(float r, float h) {
	float stp = 2 * PI * r * h + 2 * PI * r * r;
	return stp;
}