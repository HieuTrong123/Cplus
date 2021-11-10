#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<math.h>
//double TinhBieuThuc(double x, double y, char k);
//void GiaiPTBacNhat(double a, double b);
using namespace std;
void main() {
	int x;
	cout << "nhap x=";
	cin >> x;

	/*int SoNgauNhien = rand() % 100 + 1;
	srand((unsigned int)time(NULL));
	int soDoan;
	int n;
	cout << "nhap so lan chon so";
	cin >> n;
	for (int i = 1;i <= n;i++) {
		do {
			
			cout << "nhap gia tri cua so doan thu "<<i<<"="<<endl;
			cin >> soDoan;
		
			if (soDoan < 1 || soDoan>100) {
				cout << "\ngia tri nhap khong dung";
			}

		} while (soDoan < 1 || soDoan>100);
		if (i > 3) {
			cout << "that bai\n";
			break;
		}
	
		if (soDoan == SoNgauNhien) {
			cout << "chien thang";
			break;
		
	}
		else {

			if (soDoan > SoNgauNhien) {
				cout << "so nhap qua lon\n";
			}
			else {
				cout << "so nhap qua be\n";
			}

		}
	
		
		
	}*/

	/*double x, y;
	char k;
	
	cout << "nhap x=";
	cin >> x;
	cout << "nhap y=";
	cin >> y;
	cout << "nhap k=";
	cin >> k;
	TinhBieuThuc(x, y, k);*/

	/*float a, b;
	cout << "nhap gia tri cua a=";
	cin >> a;
	cout << "nhap gia tri cua b=";
	cin >> b;
	GiaiPTBacNhat(a, b);*/
	system("pause");
}


//double TinhBieuThuc(double x, double y, char k) {
//	double tong, hieu, tich, thuong;
//	tong = x + y;
//	hieu = x - y;
//	tich = x * y;
//	thuong = x / y;
//	switch (k) {
//	case '+': cout <<"gia tri cua tong=" << tong;
//		break;
//	case '-': cout << "gia tri cua hieu=" << hieu;
//		break;
//	case '*':cout << "gia tri cua tich=" << tich;
//		break;
//	case '/':cout << "gia tri cua thuongg=" << thuong;
//		break;
//	default:return 0;
//	}
//
//	



//void GiaiPTBacNhat(double a, double b) {
//	if (a == 0) {
//		if (b == 0) {
//			cout << "phuong trinh vo nghiem";
//		}
//		else {
//			cout << "phuong trinh vo so nghiem";
//		}
//	}
//	else {
//		float x = -b / a;
//		if (b == 0) {
//			cout << "phuong trinh co nghiem bang 0 ";
//		}
//		else {
//			cout << "phuong trinh co nghiem bang : "<<x;
//		}
//		
//	}
//}


