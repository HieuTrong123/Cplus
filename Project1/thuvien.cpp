#include"thuvien.h"
void Menu() {
	cout << "\n============Menu============";
	cout << "\n0.ket thuc ";
	cout << "\n1.Nhap mang";
	cout << "\n2.Xuat mang";
	cout << "\n============End============";
}
void XuatMenu(int *a , int k) {
	while (true) {
		int luachon;
		system("cls");
		Menu();
		cout << "\nNhap Lua chon : ";
		cin >> luachon;
		if (luachon == 0) {
			break;
		}
		else if (luachon == 1) {
			cout << "\n1.Nhap mang";
			int x;
			cout << "\nNhap phan tu x : ";
			cin >> x;
			if (k == 0) {
				a = new int;
			}
			else {
				ThemMotPhanTu(a, k);
			}
			a[k] = x;
			k++;
			
			system("pause");
			
		}
		else if (luachon == 2) {
			cout << "\n2.Xuat mang";
			for (int i = 0; i < k; i++) {
				cout << "\nGia tri a" << "[" << i << "] : "<<a[i];
			}
			system("pause");
		}
	}
}
void ThemMotPhanTu(int *&a,int &n/*,int vt,int x*/) {
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
	/*for (int i = n-1; i > vt; i--) {
		a[i + 1] = a[i];
		a[vt] = x;
		n++;
	}*/
	
}