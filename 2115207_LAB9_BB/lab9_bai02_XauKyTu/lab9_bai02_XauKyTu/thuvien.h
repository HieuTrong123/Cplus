void NhapMang(char* a ,int n);
void XuatChuoi(char* a);
int Dem_Khoang_Trang(char* a);
int KiemTraChuoiTrongChuoi(char* s, char* t);
int TimViTriXDauTien(char* a, char x);
void Dao_Nguoc_Chuoi(char* a);
void Dao_Chuoi(char* a);
void Hoan_Vi(char& a, char& b);
void DemSoLuongKyTu(char* a, int n);
int Dem_So_Tu(char* a);
void Nan_Chuoi(char* a);
void NhapMang(char* a ,int n) {
	cin.ignore();
	cout << "\nNhap chuoi  : ";
	cin.getline(a,n);
}
void XuatChuoi(char* a) {
	cout << "\nMang la : " << a;
}
int Dem_Khoang_Trang(char *a) {
	int dem = 0;
	int i = 0;
	while (*(a + i ) != NULL) {
		if (*(a + i) == ' ') {
			dem++;
		}
		i++;
	}
	return dem;
}
int KiemTraChuoiTrongChuoi(char* s ,char* t) {
	int m = 1,
		dem = 0,
		n = 0,
		l, k, p;
	cout << endl << endl;
	cout << "\nxem mang b : " << t;
	cout << "\nxem mang a : " << s;
	cout << endl;
	l = strlen(t);
	k = strlen(s);
	if (l > k) {
		return -1;
	}
	for (int i = 0; i < k; i++) {
		int j = 0;
		if (s[i] == t[j]) {
			p = i;
			while (s[i] == t[j] && j < l) {
				j++;
				i++;
			}
			if (j == l) {
				return p;
			}
			else
				i = p;
		}
	}
	return -1;

}
int TimViTriXDauTien(char* a ,char x) {
	int i = 0;
	while (a[i] != NULL) {
		if (a[i] == x) {
			return i;
		}
		i++;
	}
	return -1;
}
void Hoan_Vi(char& a, char& b) {
	char tam = a;
	a = b;
	b = tam;
}
void Dao_Chuoi(char* a) {
	int l = strlen(a);
	for (int i = 0; i < l / 2; i++) {
		Hoan_Vi(a[i], a[l - i - 1]);
	}
}
 void Dao_Nguoc_Chuoi(char* a) {

	int 
		i = 0,
		k = 0,
		h = 0,
		f = 0,
		dem = 0;
	char* tuDau,
		* tuCuoi,
		* tuTrongKhoang;
	int l = strlen(a);

	while (a[i] == ' ') {
		i++;
	}

	while (a[l - 1] == ' ') {
		a[l - 1] = NULL;

		l--;
	}
	while (a[i] != ' ') {
		dem++;
		i++;
	}
	tuDau = new char[dem + 1];
	i = i - dem;
	while (a[i] != ' ') {
		tuDau[k] = a[i];
		i++;
		k++;
	}
	tuDau[k] = NULL;
	cout << "\nket qua vua nhan duoc cua tu dau la : " << tuDau;
	dem = 0;
	while (a[l - 1] != ' ') {
		dem++;
		l--;
	}
	tuCuoi = new char[dem + 1 ];
	l = l + dem;
	while (a[l - 1] != ' ') {
		tuCuoi[h] = a[l - 1];
		h++;
		l--;
	}
	tuCuoi[h] = NULL;
	cout <<"\nket qua vua nhan duoc cua tu ccuoi la : " << tuCuoi;
	dem = 0;
	while (i < l) {
		dem++;
		i++;
	}
	i = i - dem;
	tuTrongKhoang = new char[dem + 1];
	while (i< l) {
		tuTrongKhoang[f] = a[i];
		i++;
		f++;
	}
	tuTrongKhoang[f] = NULL;
	cout << "\nket qua vua nhan duoc cua tu trong khoang la : " << tuTrongKhoang;
	dem = 0;
	Dao_Chuoi(tuCuoi);
	cout <<"\nchuoi vua dao thanh : " << "\n\t" << tuCuoi << tuTrongKhoang  << tuDau;
	delete[] tuDau;
	delete[] tuCuoi;
	delete[] tuTrongKhoang;
}
 void Nan_Chuoi(char *a) {
	 int i = 0;
	 if (*(a + i) >= 97 && *(a + i) <= 122) {
		 *(a + i) -= 32;
	 }
	 i++;
	 while (*(a + i) != NULL) {
		 if (*(a + i) >= 65 && *(a + i) <= 90) {
			 *(a + i) += 32;
		 }
		 i++;
	 }
	 cout << "chuoi sau khi nan la : " << a;
}
 void DemSoLuongKyTu(char *a,int n) {
	 int m = strlen(a);
	 char* b = new char[n];
	 for (int i = 0; i < n ;i++) {
		 *(b + i) = *(a + i);
	 }
	 cout << "\nmang b la : " << b;
	 for (int i = 0; i < m;i++) {
		 for (int j = i + 1; j < m; j++) {
			 if (*(b + i) == *(b + j)) {
				 for (int l = j + 1; l < n; l++) {
					 b[l - 1] = b[l];
				 }
				 m--;
				 j--;
			 }
		 }
	 }
	 cout << "\nMang b sau khi xoa trung la : " << b;
	 for (int i = 0; i < m; i++) {
		 int dem = 0;
		 for (int j = 0; j < n; j++) {
			 if (*(b + i) == *(a + j)) {
				 dem++;
			 }
		 }
		 cout << "\nPhan tu " << *(b + i) << " xuat hien " << dem << " lan";
	 }

	 delete[] b;
 }
 int Dem_So_Tu(char* a) {
	 int l = strlen(a);
	 int dem = 1;
	 int i = 0;
	 int m = l;
	 while (a[i] == ' ') {
		 i++;
	 }
	 while (a[l - 1] == ' ') {
		 a[l - 1] = NULL;

		 l--;
	 }
	 while (i < l) {
		 if (a[i] != ' ' && a[i + 1] == ' ') {
			 dem++;

		 }
		 i++;
	 }

	 return dem;
 }