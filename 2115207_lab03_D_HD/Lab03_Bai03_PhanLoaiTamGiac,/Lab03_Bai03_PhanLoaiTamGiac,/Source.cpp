#include<iostream>
#include<conio.h>
using namespace std;
void ThongBao(int LoaiTg, double a, double b, double c);
int PhanLoaiTamgiac(double a, double b, double c);
int main() {
	double a, b, c;
	cout << "\nNhap do dai a : ";
	cin >> a;
	cout << "\nNhap do dai b : ";
	cin >> b;
	cout << "\nNhap do dai c : ";
	cin >> c;
	int KetQua = PhanLoaiTamgiac(a ,b ,c);
	ThongBao(KetQua,a,b,c);

	_getch();
	return 0;
}
int PhanLoaiTamgiac(double a, double b, double c) {
	int kq = 0;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c) {
			kq = 1;
		}
		else {
			if (a == b || b == c || c == a)
			{
				if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
					kq = 4;
				}
				else {
					kq = 2;

				}
			}
			else {

				if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
					kq = 3;
				}
				else {
					kq = 5;
				}
			}
		}
		return kq;
	}
}
	void ThongBao(int LoaiTg,double a,double b, double c) {
		switch (LoaiTg)
		{
		case 0:cout <<a<<" , "<<b<<" , "<<c<<" , " 
			<< "\nKhong phai 3 canh cua tam giac";
			break;
		case 1:cout << a << " , " << b << " , " << c << " , "
			<< "\nla do dai ba canh tam giac deu";
			break;
		case 2:cout << a << " , " << b << " , " << c << " , "
			<< "\nla do dai 3 canh tam giac can";
			break;
		case 3:cout << a << " , " << b << " , " << c << " , "
			<< "\nla do dai 3 canh tam giac vuong";
			break;
		case 4:cout << a << " , " << b << " , " << c << " , "
			<< "\nla do dai 3 canh tam giac vuong can";
			break;
		case 5:cout << a << " , " << b << " , " << c << " , "
			<< "\nKhong phai 3 canh cua tam giac thuong";
			break;
		
		}
	}