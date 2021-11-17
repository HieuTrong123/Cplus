#include<iostream>
using namespace std;
int TinhDienTichHCN(int dai, int rong);
double TinhDienTichTamGiac(int canhA, int canhB, int canhC);
int main() {
	int a, b, c;
	double dientich;
	cout << endl << "\nnhap do dai canh a : ";
	cin >> a;
	cout << endl << "\nnhap do dai canh b : ";
	cin >> b;
	cout << endl << "\nnhap do dai canh c : ";
	cin >> c;
	dientich = TinhDienTichHCN(a, b);
	cout << endl << "\ndien tich cua hinh chu nhat co " << "chieu dau " << a << " va "
		<< " chieu rong " << b << " la " << dientich;
	dientich = TinhDienTichTamGiac(a, b, c);
	cout << endl << "dien tich cua hinh tam giac co " << "3 canh : a= " << a << " , "
		<< "b= " << b << ", c = " << c << " la " << dientich;



	system("pause");
	return 0;

}

int TinhDienTichHCN(int dai, int rong) {
	int dt;
	dt = dai * rong;
	return dt;
}
double TinhDienTichTamGiac(int canhA, int canhB, int canhC) {
	double dt, p;
	p = (canhA + canhB + canhC) / 2.0;
	dt = sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
	return dt;
}
