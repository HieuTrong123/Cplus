#include<iostream>
#include<conio.h>
using namespace std;
int TimUCLN(int m, int n);
int TimBCNN(int m, int n);
int main() {
	int m, n;
	cout << "\nNhap so nguyen m : ";
	cin >> m;
	cout << "\nNhap so nguyen n : ";
	cin >> n;
	cout<<"\nUCLN cua m va n la : "<<TimUCLN(m, n);
	cout << "\nBCNN cua m va n la : " << TimBCNN(m, n);

	_getch();
	return 0;
}
int TimUCLN(int m, int n) {
	while (m != n) {
		if (m > n) {
			m = m - n;
		}
		else if(n > m) {
			n = n - m;
		}
	}
	return m;
}
int TimBCNN(int m, int n) {
	return m * n / TimUCLN(m, n);
}