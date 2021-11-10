#include<iostream>
using namespace std;
#define PI 3.14
int main() {
	float r, h,v, sxq, stp;
	cout << "\nNhap gia tri ban kinh r : ";
	cin >> r;
	cout << "\nNhap gia tri chhieu cao h : ";
	cin >> h;
	v = PI * r * 2 * h;
	sxq = 2 * PI * r * h;
	stp = 2 * PI * r * h + 2 * PI * r * r;
	cout << "\nGia tri thr tich hinh tru la : " << v;
	cout << "\nGia tri dien tich xung quanh hinh tru la : " << sxq;
	cout << "\nGia tri dien tich toan phan la hinh tru la : " << stp;
	system("Pause");
	return 0;
}