#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
void GiaiPhuongTrinhBacHai(float a, float b, float c);
float NhapMotSoKhacKhong();

int main() {
	float a, b, c;
	a = NhapMotSoKhacKhong();
	cout << endl << "\nNhap he so b : ";
	cin >> b;
	cout << endl << "\nNhap he so c : ";
	cin >> c;
	GiaiPhuongTrinhBacHai(a, b, c);
	
	_getch();
	return 0;
}
float NhapMotSoKhacKhong() {
	float so;
	/*do {
		cout << "\nNhap mot do thuc khac 0 : ";
		cin >> so;
	} while (so == 0);*/
	while (true) {
		system("cls");
		cout << "\nNhap mot do thuc khac 0 : ";
		cin >> so;
		if (so!=0) {
			break;
		}
		
	}
	return so;
}
void GiaiPhuongTrinhBacHai(float a, float b, float c) {
	float delta, x;
	delta = b * b - 4 * a * c;
	if (delta < 0) {
		cout << "\nPhuong trinh vo nghiem! ";
	}
	else if (delta == 0.0) {
		x = -b / (2 * a);
		cout << "\nPhuong trinh co nghiem kep x = " << x;
	}
	else {
		cout << "\nPhuong trinh co hai nghiem phan biet ";
		x = (-b + sqrt(delta)) / (2 * a);
		cout << "x1 = " << setprecision(5) << x;
		x = (-b - sqrt(delta)) / (2 * a);
		cout << " va x2 = " << setprecision(5) << x;
	}

}

