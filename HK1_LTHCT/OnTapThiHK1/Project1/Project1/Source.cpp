#include<iostream>

using namespace std;
void Nhap(int* b, int &n) {
	
	for (int i = 0; i < n; i++) {
		cout << "\nNhap b[ " << i << " ]: ";
		cin >> *(b + i);
	}
}
void Xuat(int* b, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(b + i) << '\t';
	}
}
void Them(int* a, int& n, int vt, int x) {
	int* c = new int[n];
	for (int i = 0; i < n; i++) {
		c[i] = a[i];
	}
	delete[] a;
	a = new int[n + 2];
	for (int i = 0; i < n; i++) {
		a[i] = c[i];
	}
	delete[] c;
	for (int i = n - 1; i > vt; i--) {
		a[i + 1] = a[i];
	}
	a[vt] = x;
	n++;
}
int main() {
	
	int* b;
	int n;
	cout << "\nnhap n: ";
	cin >> n;
	b = new int[n];
	Nhap(b, n);
	cout << "\nxem mang: ";
	Xuat(b, n);
	cout << "\nthem phan tu 69 vao vi tri thu 2 bat ki";
	Them(b, n, 2 ,69);
	cout << "\nxem mang sau khi them";
	Xuat(b, n);

	

	delete[] b;
	system("pause");
	return 0;
}

