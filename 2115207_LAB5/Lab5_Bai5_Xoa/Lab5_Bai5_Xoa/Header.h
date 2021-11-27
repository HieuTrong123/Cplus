#define MAX 100
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
void Xoa(int a[], int& n, int vt);
void Xoa_X_Dau_Tien(int a[], int& n, int x);
void Xoa_X(int a[], int& n, int x);
void Xoa_Trung(int a[], int& n);
void Xoa_Phan_Tu_Trong_Doan_Min_Max(int a[], int& n, int min, int max);
void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nnhap gia tri a[" << i << "] : ";
		cin >> a[i];
	}

}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "   ";
	}
}
void Xoa(int a[] ,int &n ,int vt) {
	for (int i = vt + 1; i < n;i++) {
		a[i - 1] = a[i];
	}
	n--;
}
void Xoa_X_Dau_Tien(int a[],int &n,int x) {
	for (int i = 0; i < n;i++) {
		if (a[i] == x) {
			Xoa(a, n, i);
			break;
		}
    }

}
void Xoa_X(int a[], int& n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			Xoa(a, n, i);
			i--;
		}
	}
}
void Xoa_Trung(int a[] ,int &n) {
	for (int i = 0; i < n-1;i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i]==a[j]) {
				Xoa(a, n, j);
				j--;
			}
		}
	}
}
void Xoa_Phan_Tu_Trong_Doan_Min_Max(int a[] ,int &n,int min,int max) {
	int m = max-min+1;
	for (int i = min; i < n;i++) {
		Xoa(a, n, i);
		i--;
		m--;
		if (m == 0) {
			break;
		}
	}
}