bool KiemTraSoNT(int n);

void XuatSoNT(int n);
int DemSoLuongSoNT(int n);
int TinhTongSoNT(int n);
bool KiemTraSoNT(int n) {
	if (n < 2) {
		return false;
	}
	else if (n == 2) {
		return true;
	}
	else if (n > 2) {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}
void XuatSoNT(int n) {
	int k = 0;
	int m = 0;
	while (k <= n) {
		if (KiemTraSoNT(k) == true) {
			cout << k << "  ";
			m++;
			if (m == 5) {
				cout << endl;
			}
		}
		k++;
	}
}
int DemSoLuongSoNT(int n) {
	int k = 0;
	int m = 0;
	while (k <= n) {
		if (KiemTraSoNT(k) == true) {
			m++;
		}
		k++;
	}
	return m;
}
int TinhTongSoNT(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (KiemTraSoNT(i) == true) {
			sum += i;
		}
	}
	return sum;
}
