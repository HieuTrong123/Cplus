
void XuatCacUocSoN(int n);
int DemSoLuongUoc(int n);
int TongCacUocSo(int n);
int TimSoLonNhatLuyThua2(int n);
bool KiemTraSoHoanThien(int n);
void XuatCacUocSoN(int n) {
	int k = 1;
	while (k <= n) {
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
int TimSoLonNhatLuyThua2(int n) {
	
	
		int res = 0;
		for (int i = n; i >= 1; i--)
		{
			if ((i & (i - 1)) == 0)
			{
				res = i;
				break;
			}
		}
		return res;
	
}
bool KiemTraSoHoanThien(int n) {
	if (TongCacUocSo(n) / 2 == n) {
		return true;
	}
	return false;
}

