#include<iostream>
#include<conio.h>
#include<math.h>
#define TAB '\t'
using namespace std;
int KiemTra_NT(int n);
void LietKeSoNT(unsigned int n);
int main() {
	unsigned int n;
	cout << "\nNhap so luong so nguyen to can tim : ";
	cin >> n;
	LietKeSoNT(n);

	_getch();
	return 0;
}
int KiemTra_NT(int n) {
	int kq, m, i;
	if (n<2) {
		kq = 0;
	}
	else {
		m = (int)sqrt((float)n);
		i = 2;
		kq = 1;
		while (i <= m && kq) {
			if (n % i == 0) {
				kq = 0;
				i++;
			}
		}
	}
	return kq;
}
void LietKeSoNT(unsigned int n) {
	int dem = 0, so = 2;
	while (dem<n) {
		if (KiemTra_NT(so)==1) {
			cout << so << TAB;
			dem++;
		}
		
		so++;
	}
	
}