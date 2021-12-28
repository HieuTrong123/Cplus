int TinhTongSoLe(int n ,int k);
int TinhTichSoLe(int n, int k);
int GiaiThua(int n);
int TongGiaiThua(int n);
int TinhTongSoLe(int n ,int k) {

	if (k == 0) 
		return 0;
	else {
		if (k % 2 != 0 && k > 0) {
			return k + TinhTongSoLe(n,k-1);
		}
		else {
			TinhTongSoLe(n,k-1);
		}
	}
	
}
int TinhTichSoLe(int n, int k) {

	if (k == 0)
		return 1;
	else {
		if (k % 2 != 0 && k > 0) {
			return TinhTichSoLe(n, k - 1) * k;
		}
		else {
			TinhTichSoLe(n, k - 1);
		}
	}
}
int GiaiThua(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		
			return n * GiaiThua(n - 1);
		
	}
}
int TongGiaiThua(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return GiaiThua(n) + TongGiaiThua(n - 1);
	}
}
