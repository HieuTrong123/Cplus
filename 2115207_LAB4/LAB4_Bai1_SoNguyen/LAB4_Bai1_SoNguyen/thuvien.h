void XuatSoDenn(int n) {
	int k = 0;
	while (k <= n) {
		cout << k << "   ";
		k++;
		if (k % 10 == 0) {
			cout << endl;
		}
	}
}
void SoChiaHetCho3(int n) {
	int k = 0;
	while (k <= n) {
		k++;
		if (k % 3 == 0&& k % 4 != 0) {
			cout << k <<"   ";
		}
	}
}
int SoLuongSoN(int n) {
	int k = 0;
	int m = n;
	while (m != 0) {
		n = n % 10;
		k++;
		m = m / 10;

	}
	return k;
}
int DaoNguocSo(int n) {
	int s = 0;
	while (n!=0) {
		s = s * 10 + (n % 10);
		n = n / 10;
	}
	return s;
}
int TongCacSo(int n) {
	int s = 0;
	while (n!=0) {
		s += (n % 10);
		n = n / 10;
	}
	return s;
}
int SoDauTien(int n) {
	while (n>=10) {
		n = n / 10;
	}
	return n;
}
int TimM(int n) {
	int m = 0;
	for (int i = 0;; i++) {
		m += i;
		if (m <= n) {
			return i;
		}
	}
	
}