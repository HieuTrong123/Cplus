int DaoNguocSo(int n);
void DoiHeSo(int n);
int DemSoLuongSoDuong(int n);
int TimChuSoLonNhat(int n);
int TimChuSoDauTien(int n);
int DaoNguocSo(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		int soCuoi = (n % 10);
		return soCuoi * pow(10, (int)log10(n)) + DaoNguocSo(n / 10);
	}
}
void DoiHeSo(int n) {

	if (n == 0) {
		return;
	}
	else {

		DoiHeSo(n / 2);
		cout << n % 2;
	}
}
int DemSoLuongSoDuong(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return DemSoLuongSoDuong(n / 10) + 1;
	}
}
int TimChuSoLonNhat(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return TimChuSoLonNhat(n / 10) < (n % 10) ? (n % 10) : TimChuSoLonNhat(n / 10);
	}
}
int TimChuSoDauTien(int n) {
	if (n == 0) {
		return 0;
	}
	else {

		if (n > 0 && n < 10) {
			return n;
		}
		else {
			return TimChuSoDauTien(n / 10);
		}
	}
}