void Xuat_FiBo_Thu_N(int n);
void Xuat_FiBo_Nho_Hon_N(int n);
void Xuat_FiBo_Dau_Tien(int n);

void Xuat_FiBo_Thu_N(int n) {
	long long fn, f0 = 0, f1 = 1;
	if (n == 0) {
		
		cout << f0 << endl;
	}
	else if (n == 1) {
		cout << f1 << endl;
	}
	else if (n >= 2) {
		
		for (int i = 2; i < n;i++) {
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
			
		}
		cout << fn<<endl;
	}
}
void Xuat_FiBo_Nho_Hon_N(int n) {
	int m;
	cout << "\nNhap so luong m cua day : ";
	cin >> m;
	long long fn, f0 = 0, f1 = 1;
	if (m == 0) {

	}
	else if (m == 1) {
		cout << f0 << '\t' << endl;
	}
	else if (m >= 2) {
		cout << f0 << '\t' << f1 << '\t';
		for (int i = 2; i < m; i++) {
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
			if (fn<n) {
				cout << fn << '\t';
			}

		}
	}
}
void Xuat_FiBo_Dau_Tien(int n) {
	
	long long fn, f0 = 0, f1 = 1;
	if (n == 0) {
		
	}
	else if (n == 1) {
		cout << f0<<'\t'<< endl;
	}
	else if (n >= 2) {
		cout << f0 << '\t' << f1 << '\t';
		for (int i = 2; i < n; i++) {
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
				cout << fn << '\t';
			
		}
	}
}