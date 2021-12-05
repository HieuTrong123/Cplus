void ChayCT();

void SoChiaHetCho3(int n);
int SoLuongSoN(int n);
int DaoNguocSo(int n);
int TongCacSo(int n);
int SoDauTien(int n);
int TimM(int n);
void XuatSoDenn(int n) {
	int k = 1;
	while (k <= n) {
		if (k % 10 == 0) {
			cout << k << "   ";
			k++;
			cout << endl;
		}
		else {
			cout << k << "   ";
			k++;
		}
		
		
	}
}
void SoChiaHetCho3(int n) {
	int k = 0,
	dem = 0;
	while (k <= n) {
		
		if (k % 3 == 0 && k % 4 != 0) {
			cout << k << "   ";
			dem++;
		}
		k++;
	}
	cout << "so luong so chia het cho 3 : " << dem;
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
	while (n != 0) {
		s = s * 10 + (n % 10);
		n = n / 10;
	}
	return s;
}
int TongCacSo(int n) {
	int s = 0;
	while (n != 0) {
		s += (n % 10);
		n = n / 10;
	}
	return s;
}
int SoDauTien(int n) {
	while (n >= 10) {
		n = n / 10;
	}
	return n;
}
int TimM(int n) {
	int m = 0, 
	kq = 0;
	for (int i = 0;i<=n; i++) {
		m += i;
		if (m <= n) {
			kq =  i;
		}
	}
	return kq;
}
