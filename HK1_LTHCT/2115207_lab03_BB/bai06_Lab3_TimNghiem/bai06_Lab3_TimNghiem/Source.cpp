#include<iostream>
#include<conio.h>
using namespace std;
void TimNghiem();
int main() {
	TimNghiem();

	_getch();
	return 0;
}
void TimNghiem() {
	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= 10; j++) {
			for (int k = 0; k <= 10; k++) {
				for (int m = 0; m <= 10; m++) {
					for (int h = 0; h <= 10; h++) {
						if (3*i - 2*j + 4*k + 5*m - h == 30) {
							cout << "\ngia tri cac nghiem cua 3a-2b+4c+5d-e=30"
								<< " a = " << i << " b = " << j << " c = " << k
								<< " d = " << m << " e = " << h;
						}
					}
				}
			}
		}
	}
}