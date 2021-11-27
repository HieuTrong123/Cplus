#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int TimSoNgay(int thang, int nam);
int NhapSoTrongMien(int min, int max);
int main() {
	
	int soNgay, thang, nam;
	cout << "\nNhap mot thang tron mot nam ";
	thang = NhapSoTrongMien(1, 12);
	cout << "\nNhap mot nam duong lich ";
	nam = NhapSoTrongMien(1, 3000);

	soNgay = TimSoNgay(thang, nam);
	cout << "thang : " << thang << " nam : " << nam << " co " << soNgay << " ngay";

	_getch();
	return 0;
}

int NhapSoTrongMien(int min, int max) {
	int so;
	do {
		cout << "\nNhap mot so trong doan [ " << min << "...." << max << " ] : ";
		cin >> so;
	} while (so < min || so > max);
	return so;
}
int TimSoNgay(int thang, int nam) {
	int soNgay;
	/*switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		soNgay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		soNgay = 30;
		break;
	default:
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
			soNgay = 9;
		}
		else {
			soNgay = 28;
		}
		break;

	}*/
	if (thang==1) {
		soNgay = 31;
	}
	else if (thang==3) {
		soNgay = 31;
	}
	else if (thang == 5) {
		soNgay = 31;
	}
	else if (thang == 7) {
		soNgay = 31;
	}
	else if (thang == 8) {
		soNgay = 31;
	}
	else if (thang == 10) {
		soNgay = 31;
	}
	else if (thang == 12) {
		soNgay = 31;
	}
	else if (thang == 4) {
		soNgay = 30;
	}
	else if (thang == 6) {
		soNgay = 30;
	}
	else if (thang == 9) {
		soNgay = 30;
	}
	else if (thang == 11) {
		soNgay = 30;
	}
	else {
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
			soNgay = 9;
		}
		else {
			soNgay = 28;
		}
	}
	return soNgay;
}