void Nhap_Tu_Dong(int* a, int n);
void Xem_Mang(int* a, int n);
int Tim_Max(int* a, int n);
int Tinh_Tong(int* a, int n);
int Dem_X(int* a, int n, int x);
int Dem_SO_Duong(int* a, int n);
void Nhap_Tu_Dong(int* a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		*(a + i) = rand() % (10 - (-10) + 1) + (-10);
	}
}
void Xem_Mang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << "   ";
	}
}
int Tim_Max(int* a, int n) {
	if (n == 1) {
		return *a;
	}
	else {
		if (Tim_Max(a, n - 1) < a[n - 1]) {

			return a[n - 1];
		}
	}
}
int Tinh_Tong(int* a, int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return a[n - 1] + Tinh_Tong(a, n - 1);
	}
}
int Dem_SO_Duong(int* a, int n) {
	if (n == 0) {
		return 0;
	}
	else {
		if (a[n - 1] > 0) {
			return Dem_SO_Duong(a, n - 1) + 1;

		}
		else {
			Dem_SO_Duong(a, n - 1);
		}
	}

}
int Dem_X(int* a, int n, int x) {
	if (n == 0) {
		return 0;
	}
	else {
		if (a[n - 1] == x ) {
			return Dem_X(a, n - 1, x) + 1;

		}
		else {
			Dem_X(a, n - 1, x);
		}
	}
}