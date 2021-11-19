void XuatCacUocSoN(int n) {
	int k = 1;
	while (k<=n) {
		if (n % k == 0) {
			cout << k << "   ";
		}
		k++;
	}
}
int  DemSoLuongUoc(int n) {
	int k = 1;
	int m = 0;
	while (k <= n) {
		if (n % k == 0) {
			m++;
		}
		k++;
	}
	return m;
}
int TongCacUocSo(int n) {
	int k = 1;
	int sum = 0;
	while (k <= n) {
		if (n % k == 0) {
			sum += k;
		}
		k++;
	}
	return sum;
}
void TimSoLonNhatLuyThua2(int n) {
	for (int i = n-1; i >=1;i--) {
		if (n % i== 0 && i % 2 == 0) {
			cout <<"\nSo lon nhat be hon n va la luy thua cua 2 la : " << i;
			break;
		}
	}
}
bool KiemTraSoHoanThien(int n) {
	if (TongCacUocSo(n) / 2 == n) {
		return true;
	}
	return false;
}

