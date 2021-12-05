#define MAX 100
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
bool KiemTraSoNT(int n);
int TimKiemSoNTCuoiCungTrongMang(int a[], int n);
void TimPhanTuXuatHienNhieuNHat(int a[], int b[] ,int c[], int n);
int TimMax(int a[], int n);
void PhanTuNhoNhat(int a[], int n);
int TimMin(int a[], int n);
void Xoa(int a[], int vt, int& n);
void ViTriPhanTuAmLonNhat(int a[], int n);
int TimSoAmLonNhat(int a[], int n);
int TimSoDuongNhoNhat(int a[], int n);
void ViTriPhanTuDuongNhoNhat(int a[], int n);

void NhapMang(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		cout << "\nNhap a[ " << i << " ] : ";
		cin>> a[i];
	}
}
void XuatMang(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		cout << a[i] << "   ";
	}
}
bool KiemTraSoNT(int n) {
	if (n < 2) {
		return false;
	}
	else {
		if(n==2) {
			return true;
		}
		else {
			for (int i = 2; i < n; i++) {
				if (n % i == 0) {
					return false;
				}
			}
		}
	}
	return true;
}
int TimKiemSoNTCuoiCungTrongMang(int a[] ,int n) {
	for (int i=n-1; i >= 0;i--) {
		if (KiemTraSoNT(a[i])) {
			return i;
			break;
		}
	}
	return -1;
}
void TimPhanTuXuatHienNhieuNHat(int a[] ,int b[] ,int c[], int n) {
	int m = 0 ,l = 0;
	for (int k = 0; k < n;k++) {
		b[m] = a[k];
		m++;
	}
	for (int i = 0; i < n-1;i++) {
		for (int j = i + 1; j < n;j++) {
			if (a[i] == a[j]) {
				Xoa(a,j,n);
				j--;
			}
		}
	}
	cout << "\nmang a sau khi xoa trung : ";
	XuatMang(a, n);
	cout << "\nMang b la : ";
	XuatMang(b,m);
	for (int i = 0; i < n;i++) {
		int dem = 0;
		for (int j = 0; j < m;j++) {
			if (a[i]==b[j]) {
				dem++;
				
			}
		}
		c[l] = dem;
		l++;
		cout << "\nPhan tu " << a[i] << " Xuat hien nhieu nhat la " << dem << " lan";
	}
	cout << "\nMnag C la : ";
	XuatMang(c, l);
	for (int i = 0; i < n; i++) {
		int dem = 0;
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				dem++;

			}
		}
		if (dem == TimMax(c, l)) {
			cout << "\nPhan tu " << a[i] << " Xuat hien nhieu nhat la " << dem << " lan";
		}
	}

}
void Xoa(int a[] ,int vt ,int &n) {
	for (int i = vt + 1; i < n;i++) {
		a[i - 1] = a[i];
	 }
	n--;
}
int TimMax(int a[],int n) {
	int max = a[0];
	for (int i = 1; i < n;i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
int TimMin(int a[], int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
void PhanTuNhoNhat(int a[] ,int n) {
	int min = TimMin(a, n);
	for (int i = 0; i < n;i++) {
		if (a[i] == min) {
			cout <<"\nPhan tu " << a[i]<<" co gia tri nho nhat va vi tri dau tien cua no la  "<<i;
			break;
		}
	}
}
int TimSoAmLonNhat(int a[],int n) {
	int max;
	for (int i = 0; i < n;i++) {
		if (a[i]<0) {
			max = a[i];
			for (int j = 0; j < n; j++) {
				if (a[j] < 0 && max!=0 && a[j] > max) {
						max = a[j];
				}
			}
		}
	}
	return max;
}
void ViTriPhanTuAmLonNhat(int a[],int n) {
	for (int i = 0; i < n;i++) {
		if (a[i]==TimSoAmLonNhat(a,n)) {
			cout << "\nPhan tu " << a[i] << " co gia tri am lon nhat va vi tri dau tien cua no la  " << i;
			break;
		}
	}
}
int TimSoDuongNhoNhat(int a[],int n) {
	int min;
	for (int i = 0; i < n;i++) {
		if (a[i]>0) {
			min = a[i];
			for (int j = 0; j < n; j++) {
				if (a[j] > 0 && min!=0 && a[j] < min) {
						min = a[j];
				}
			}
		}
	}
	return min;
}
void ViTriPhanTuDuongNhoNhat(int a[],int n) {
	for (int i = 0; i < n;i++) {
		if (a[i]==TimSoDuongNhoNhat(a,n)) {
			cout << "\nPhan tu " << a[i] << " co gia tri duong nho nhat va vi tri dau tien cua no la  " << i;
			break;
		}
	}
}