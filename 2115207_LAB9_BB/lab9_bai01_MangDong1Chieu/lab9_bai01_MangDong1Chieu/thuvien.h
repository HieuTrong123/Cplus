void Nhap_Tu_Dong(int* a, int n);
void Xem_Mang(int* a, int n);
int Tim_Max(int* a, int n);
int Tinh_Tong(int* a, int n);
int Dem_X(int* a, int n, int x);
int Dem_SO_Duong(int* a, int n);
void Nhap_Tu_Dong(int *a ,int n) {
	srand(time(NULL));
	for (int i = 0; i < n;i++) {
		*(a + i) = rand() % (10 - (-10) + 1) + (-10);
	}
}
void Xem_Mang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << "   ";
	}
}
int Tim_Max(int* a, int n) {
	int max = *a;
	for (int i = 1; i < n; i++) {
		if (*(a + i) > max) {
			max = *(a + i);

		}
	}
	return max;
}
int Tinh_Tong(int* a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += *(a + i);
	}
	return sum;
}
int Dem_SO_Duong(int *a,int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (*(a + i) > 0) {
			dem++;
		}
	}
	return dem;
}
int Dem_X(int *a,int n,int x) {
	int dem = 0;
	for (int i = 0; i < n;i++) {
		if (*(a + i) == x) {
			dem++;
		}
	}
	return dem;
}