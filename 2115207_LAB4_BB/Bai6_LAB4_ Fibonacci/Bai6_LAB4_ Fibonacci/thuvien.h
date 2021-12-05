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
	for (int i = 0; i < n;i++) {
		if (i == 0) {
			cout << "0" << endl;
		}
		else if (i == 1) {
			cout << "1" << endl;
		}
		else if (i >= 2) {
			long long fn, f0 = 0, f1 = 1;
			for (int j = 2; j <= n; j++) {
				fn = f0 + f1;
				f0 = f1;
				f1 = fn;
				cout << fn << endl;
			}
			break;
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