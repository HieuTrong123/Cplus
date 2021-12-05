#define MAX 100
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
void HoanVi(int& a, int& b);
void SapXepSoDuong(int a[], int n);
void SapXep0OCuoi(int a[],int b[] ,int n);
void Xoa(int a[], int& n, int vt);
void SapXep0ODauMang(int a[], int b[], int n);
void SapXepChanLe(int a[], int n);
bool KiemTraSoNT(int n);
void SapXepSoNT(int a[], int n);
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
void HoanVi(int &a,int &b) {
	int tam = a;
	a = b;
	b = tam;
}
void SapXepSoDuong(int a[],int n) {
	for (int i = 0; i < n;i++) {
		for (int j = i + 1;j<n; j++) {
			if (a[i] > a[j] && a[i] > 0 && a[j] > 0) {
				HoanVi(a[i], a[j]);
			}
		}
	}
}
void Xoa(int a[],int &n,int vt) {
	for (int i = vt + 1; i < n; i++) {
		a[i - 1] = a[i];
	}
	n--;
}
void SapXep0OCuoi(int a[] ,int b[], int n) {
	int m=0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			b[m] = a[i];
			m++;
			Xoa(a, n, i);
			i--;
		}
	}


	for (int i = 0; i <n ; i++) {
		for (int j = i + 1; j <n ; j++) {
			if ( a[i] > a[j]) {
				HoanVi(a[i], a[j]);
				
			}

		}
	}
	for (int i = 0; i < m;i++) {
		a[n] = b[i];
		n++;
	}
}
void SapXep0ODauMang(int a[],int b[],int n) {
	int m = 0,ketQua;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			b[m] = a[i];
			m++;
			Xoa(a, n, i);
			i--;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n;j++) {
			ketQua = (a[i] > 0 && a[j] > 0 && a[i] > a[j]) || (a[i] < 0 && a[j] < 0 && a[i] < a[j]) || (a[i] >0&& a[j]<0);
			if (ketQua) {
				HoanVi(a[i], a[j]);
			}
		}
	}
	for (int i = 0; i < n;i++) {
		b[m] = a[i];
		m++;
	}
	cout << "\nmang sau khi sap xep la : ";
	XuatMang(b, m);
}
void SapXepChanLe(int a[] ,int n) {
	int ketQua;
	for (int i = 0; i < n;i++) {
		for (int j = i + 1; j < n;j++) {
			ketQua = (a[i] % 2 == 0 && a[j] % 2 != 0) || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j]) || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j]);
			if (ketQua) {
				HoanVi(a[i], a[j]);
			}
		}
	}
}
bool KiemTraSoNT(int n) {
	if (n < 2) {
		return false;
	}
	else if(n>=2) {
		if (n == 2) {
			return true;
		}
		else {
			for (int i = 2; i < n;i++) {
				if (n % i == 0) {
					return false;
				}
			}
		}
	}
	return true;
}
void SapXepSoNT(int a[], int n) {
	int m ;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			m = (KiemTraSoNT(a[i]) == true && KiemTraSoNT(a[j]) == true && a[i] > a[j]) || (KiemTraSoNT(a[i]) != true && KiemTraSoNT(a[j]) != true && a[i] < a[j]) || (KiemTraSoNT(a[i]) == false && KiemTraSoNT(a[j]) == true);
			if (m) {
				HoanVi(a[i], a[j]);
			}

		}
	}
}