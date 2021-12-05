#define MAX 100
void Nhap_mang(int a[], int n);
void Xuat_Mang(int a[], int n);
bool Kiem_Tra_Phan_Tu_0(int a[], int n);
bool Kiem_Tra_Phan_Tu_Lien_Tiep(int a[], int n);
float Tinh_Trung_Binh_Cong(int a[], int n);
bool Kiem_Tra_TB_Cong(int a[], int n);
bool Kiem_Tra_0_1(int a[], int n);
bool Kiem_Tra_Mang_Am(int a[], int n);
void Nhap_mang(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		cout << "\nNhap a[ " << i << " ] : ";
		cin >> a[i];
	}
}
void Xuat_Mang(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		cout << a[i] << "   ";
	}
}
bool Kiem_Tra_Phan_Tu_0(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		if (a[i] == 0) {
			return false;
		}
	}
	return true;
}
bool Kiem_Tra_Phan_Tu_Lien_Tiep(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		if (a[i] == (a[i + 1] - 1) && a[i + 1] == (a[i + 2] - 1)) {
			return true;
		}
	}
	return false;
}
bool Kiem_Tra_0_1(int a[] ,int n) {
	
	for (int i = 0; i < n;i++) {
		if (a[i] == 0) {
			for (int j = 0; j < n; j++) {
				if (a[j] == 1) {
					return true;
				}
			}
		}
	}
	return false;
}
float Tinh_Trung_Binh_Cong(int a[] ,int n) {
	float sum = 0.0;
	for (int i = 0; i < n;i++) {
		sum += a[i];
	}
	return sum / n;
}
bool Kiem_Tra_TB_Cong(int a[],int n) {
	for (int i = 0; i < n;i++) {
		if (a[i] == Tinh_Trung_Binh_Cong(a, n)) {
			return true;
	    }
	}
	return false;
}
bool Kiem_Tra_Mang_Am(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		if (a[i] < 0) {
			return false;
		}
	}
	return true;
}