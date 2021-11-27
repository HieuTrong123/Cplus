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
		if (n == 2) {
			kq = 1;
		}
		else {
			/*while (i <= m && kq) {
				if (n % i == 0) {
					kq = 0;
					i++;
				}
			*/
			/*for (i = 2; i <= m && kq; i++) {
				if (n % i == 0) {
					kq = 0;
				}
			}*/
			do {
				if (n % i == 0) {
					kq = 0;
					i++;
				}

			} while (i <= m && kq );
		}
	}
	return kq;
}
	void LietKeSoNT(unsigned int n)
	{
		int dem = 0, so = 2;
		/*while (dem < n)
		{
			if (KiemTra_NT(so))
			{
				cout << so << TAB;
				dem++;
			}
			so++;
		}*/
		do {
			if (KiemTra_NT(so))
			{
				cout << so << TAB;
				dem++;
			}
			so++;
		} while (dem < n);
	}