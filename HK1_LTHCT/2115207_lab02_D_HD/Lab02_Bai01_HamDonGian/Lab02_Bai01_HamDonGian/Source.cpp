#include<iostream>
using namespace std;
void ThongBao();
void XuatKyTu(short ma);
void XuatPhuongTrinh(float a, float b);

int main() {

	short ma, dolla = 36;
	ThongBao();
	XuatKyTu(157);
	XuatKyTu(dolla);
	cout << endl << "\nNhap 1 so trong doan [30...255] : ";
	cin >> ma;
	XuatKyTu(ma);
	XuatPhuongTrinh(2.3, 5);
	float p, q = 10;
	XuatPhuongTrinh(7.5, q);
	cout << endl << "\nNhap mot so thuc : ";
	cin >> p;
	XuatPhuongTrinh(p, q);
	

	system("pause");
	return 0;

}
void ThongBao() {
	cout << "\nBan phai hoan thanh bai tap nay.";
}
void XuatKyTu(short ma) {
	char KyTu = (char)ma;
	cout << endl << ma << "<=>" << KyTu;
}
void XuatPhuongTrinh(float a, float b) {
	cout << endl << a << " *x + " << b << " = 0";
}
