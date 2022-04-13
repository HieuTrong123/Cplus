#define MAX 100
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
void Chen(int a[], int& n, int x, int vt);
int TimMax(int a[], int n);
void ChenSauMaxDauTien(int a[], int &n, int x);
void ChenSauSoNT(int a[], int &n, int x);
int KiemTraSoNT(int n);
void ChenVaoSauKyTuY(int a[], int& n, int y, int x);
int TimMin(int a[], int n);
void Xoa(int a[], int& n, int vt);
void ThayThe(int a[], int& n, int x);
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
void Chen(int a[],int &n,int x,int vt) {
	for (int i = n - 1; i >= vt;i--) {
		a[i + 1] = a[i];
	}
	a[vt] = x;
	n++;
	
}
int TimMax(int a[] ,int n) {
	int max = a[0];
	for (int i = 1; i < n;i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
void ChenSauMaxDauTien(int a[] ,int &n ,int x) {
	for (int i = 0; i < n;i++) {
		if (TimMax(a, n) == a[i]) {
			Chen(a, n, x, i + 1);
			
			break;
		}
	}
}
int KiemTraSoNT(int n) {
	int kq = 1;
	if (n<2) {
		kq=0;
	}
	else {
		if (n==2) {
			kq=1;
		}
		else {
			for (int i = 2; i < n;i++) {
				if (n%i==0) {
					kq=0;
				}
			}
		}
	}
	return kq;
}
void ChenSauSoNT(int a[] ,int &n ,int x) {
	int dem = 0;
	for (int i = 0; i < n;i++) {
		
		if (KiemTraSoNT(a[i])==1) {
			Chen(a, n, x, i );
			break;
		}
		else {
			dem++;
		}
	}
	if (dem == n) {
		Chen(a, n, x, 0);
	}
}
void ChenVaoSauKyTuY(int a[],int &n,int y,int x) {
	for (int i = 0; i < n;i++) {
		if (a[i]==y) {
			Chen(a,n,x,i+1);
			i++;
		}
	}
}
int TimMin(int a[] ,int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i]<min) {
			min = a[i];
		}
	}
	return min;
}
void Xoa(int a[],int &n ,int vt) {
	for (int i = vt + 1; i < n;i++) {
		a[i - 1] = a[i];
	}
	n--;
}
void ThayThe(int a[] ,int &n,int x) {
	int m = TimMin(a, n);
	for (int i = 0; i < n;i++) {

		if (a[i]==m) {
			Xoa(a, n, i);
			Chen(a, n, x, i);
		}
	}
}