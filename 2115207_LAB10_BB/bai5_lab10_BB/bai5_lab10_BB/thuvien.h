
void NhapTuDong(int a[],int n);
void XemMang(int a[], int n);
bool KiemTraSoNT(int n);
int DemX(int a[], int n, int x);
int DemSoNT(int a[], int n);
void NhapTuDong(int a[],int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % (20 - 0 + 1) + 0;
	}
}
void XemMang(int a[],int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "   ";
	}
}


bool KiemTraSoNT(int n) {
	if (n < 2) {
		return false;
	}
	else {
		if (n == 2) {
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
int DemX(int a[],int n,int x) {
	if (n == 0) {
		return 0;
	}
	else {
		if (a[n] == x) {
			return DemX(a, n - 1, x) + 1;
		}
		else {
			DemX(a, n - 1, x);
		}
	}

}
int DemSoNT(int a[],int n) {
	if (n == 0) {
		return 0;
	}
	else {
		if (KiemTraSoNT(a[n]) == true) {
			return DemSoNT(a, n - 1) + 1;
		}
		else {
			DemSoNT(a, n - 1);
		}
	}
}