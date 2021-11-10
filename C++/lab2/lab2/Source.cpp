#include<iostream>
using namespace std;
void ThongBao();
void XuatKyTu(short ma);
void XuatPhuongTrinh(float a, float b);
int NhapSoNguyen();
int TinhTong(unsigned int n);
int TinhDienTichHCN(int dai, int rong);
double TinhDienTichTamGiac(int canhA, int canhB, int canhC);
int main() {

	short ma, dolla = 36;
	ThongBao();
	XuatKyTu(157);
	XuatKyTu(dolla);
	cout << endl << "\nNhap 1 so trong doan [30...255] : ";
	cin >> ma;
	XuatKyTu(ma);
	XuatPhuongTrinh(2.3,5);
	float p, q = 10;
	XuatPhuongTrinh(7.5, q);
	cout << endl << "\nNhap mot so thuc : ";
	cin >> p;
	XuatPhuongTrinh(p, q);
	int x, y, z;
	x = NhapSoNguyen();
	y = NhapSoNguyen();
	cout << x << "+" << y << " = " << x + y;
	z = (x + y) * NhapSoNguyen();
	cout << endl << "z = " << z;
	int KetQua = 0;
	KetQua = TinhTong(50);
	cout << endl << "1 + 2 +...+ 50 " << KetQua;
	unsigned int m;
	cout << "\nNhap Mot so nguyen khong am : ";
	cin >> m;

	KetQua = TinhTong(m);
	cout << endl << "1 + 2 +...+ " << m << " = " << KetQua;
	int a, b, c;
	double dientich;
	cout << endl << "\nnhap do dai canh a : ";
	cin >> a;
	cout << endl << "\nnhap do dai canh b : ";
	cin >> b;
	cout << endl << "\nnhap do dai canh c : ";
	cin >> c;
	dientich=TinhDienTichHCN(a, b);
	cout << endl << "\ndien tich cua hinh chu nhat co " << "chieu dau " << a << " va "
		<< " chieu rong " << b << " la " << dientich;
	dientich = TinhDienTichTamGiac(a, b, c);
	cout << endl << "dien tich cua hinh tam giac co " << "3 canh : a= " << a << " , "
		<< "b= " << b << ", c = " << c << " la " << dientich;



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
	cout << endl << a << " * + " << b << " = 0";
}
int NhapSoNguyen() {
	int so;
	cout << endl << "\nNhap mot so nguyen : ";
	cin >> so;
	return so;
}
int TinhTong(unsigned int n) {
	int sum = 0;
	sum = n * (n + 1) / 2;
	return sum;
}
int TinhDienTichHCN(int dai, int rong) {
	int dt;
	dt = dai * rong;
	return dt;
}
double TinhDienTichTamGiac(int canhA,int canhB,int canhC) {
	double dt, p;
	p = (canhA + canhB + canhC) / 2.0;
	dt = sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
	return dt;
}
