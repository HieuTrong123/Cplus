#define MAX 100
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int DemSo3ChuSo(int a[], int n);
int DemSoNgoaiMinMax(int a[], int n, int min, int max);
int DemX(int a[], int n, int vt, int x);
int DemSoChinhPhuong(int a[], int n);
bool KiemTraSoChinhPhuong(int n);
void NhapMang(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		cout << "\nnhap gia tri a[" << i << "] : ";
		cin >> a[i];
	}
	
}
void XuatMang(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		cout << a[i] << "   ";
	}
}
int DemSo3ChuSo(int a[] ,int n) {
	int dem = 0;
	for (int i = 0; i < n;i++) {
		if (a[i] / 100 != 0) {
			dem++;
		}
	}
	return dem;
}
int DemSoNgoaiMinMax(int a[] ,int n ,int min ,int max) {
	int dem = 0;

	for (int i = min; i <= max; i++) {
		dem++;
	}

	return (n - dem);
}
bool KiemTraSoChinhPhuong(int n) {
	int ketqua = (int)sqrt(n * 1.0);
	if (ketqua*ketqua==n) {
		return true;
	}
	return false;
}
int DemSoChinhPhuong(int a[] , int n) {
	int dem = 0;
	for (int i = 0; i < n;i++) {
		if (KiemTraSoChinhPhuong(a[i])) {
			dem++;
		}
	}
	return dem;
}
int DemX(int a[],int n,int vt,int x){
	int dem = 0;
	for (int i = vt;i<n;i++){
		if (a[i]==x) {
			dem++;
		}
	}
	return dem;
}

