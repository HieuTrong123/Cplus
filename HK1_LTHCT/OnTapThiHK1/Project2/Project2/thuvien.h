#pragma once
void Nhap_Mang(int* a, int n);
void Xuat_Mang(int* a, int n);
void Them(int* &a, int& n, int vt, int x);
void Xoa(int* &a, int& n, int vt);
void Nhap_Mang(int* a,int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nNhap a[ " << i << " ]: ";
		cin >> a[i];
	}
}
void Xuat_Mang(int* a,int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << '\t';
	}
}
void Them(int* &a,int &n,int vt,int x) {
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
	delete[] a;
	a = new int[n + 1];
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
	delete[] b;
	for (int i = n - 1; i >= vt; i--) {
		a[i + 1] = a[i];
	}
	a[vt] = x;
	n++;
}
void Xoa(int* &a,int &n,int vt) {
	for (int i = vt + 1; i < n; i++) {
		a[i - 1] = a[i];
	}
	n--;
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
	delete[] a;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
	delete[] b;
}