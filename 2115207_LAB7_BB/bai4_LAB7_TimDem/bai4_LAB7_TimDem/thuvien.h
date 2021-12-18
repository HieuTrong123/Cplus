#define MAX 100
typedef char Chuoi[MAX];
void Xoa(Chuoi a, int &l, int vt);
int Dem_SoX(Chuoi a, char x);
void Xuat_So_Lan_Xuat_Hien(Chuoi a);
int Vi_Tri_X_Dau_Tien(Chuoi a, char x);
int Vi_Tri_Mang_T_Trong_Mang_S(Chuoi a);
void Hoan_Vi(char& a, char& b);
void Dao_Nguoc_Chuoi(Chuoi a);
int Dem_So_Tu(Chuoi a);
void Dao_Chuoi(Chuoi a);
int Dem_SoX(Chuoi a ,char x) {
	int dem = 0;
	for (int i = 0; a[i] != NULL;i++) {
		if (a[i]==x) {
			dem++;
		}
	}
	return dem;
}
void Xuat_So_Lan_Xuat_Hien(Chuoi a) {
	Chuoi b;
	int l = strlen(a);
	for (int i = 0; i < l;i++) {
		b[i] = a[i];
	}
	b[l] = NULL;
	cout << "\nmang b la : " << b;
	for (int i = 0; i < l; i++) {
		for (int j = i + 1; j < l; j++) {
			if (a[i] == a[j]) {
				Xoa(a, l, j);
				j--;
			}
		}
	}
	cout << "\nmang a la : " << a;
	
	for (int i = 0; a[i]!=NULL; i++) {
		int dem = 0;
		for (int j = 0; b[j]!=NULL; j++) {
			if (a[i] == b[j]) {
				dem++;
            }
		}
		cout << "\nPhan tu " << a[i] << " xuat hien " << dem << " lan";
	}

}
void Xoa(Chuoi a ,int &l,int vt) {
	l = strlen(a);
	for (int i = vt + 1; i < l;i++) {
		a[i - 1] = a[i];
	}
	a[l - 1] = NULL;
}
int Vi_Tri_X_Dau_Tien(Chuoi a ,char x) {
	for (int i = 0; a[i] != NULL;i++) {
		if (a[i] == x) {
			return i;
		}
	}
	return -1;
}
int Vi_Tri_Mang_T_Trong_Mang_S(Chuoi a) {
	Chuoi b;
	int m = 1,
		dem = 0,
		n = 0, 
		l,k,p;

	cin.ignore();
	cout << "\nNhap chuoi b can tim kiem la : ";
	gets_s(b, MAX);
	cout << endl<<endl;
	cout << "\nxem mang b : " << b;
	cout << "\nxem mang a : " << a;
	cout << endl;
	l = strlen(b);
	k = strlen(a);
	if (l>k) {
		return - 1;
	}
	for (int i = 0; i < k;i++) {
		int j = 0;
		if (a[i] == b[j]) {
			p = i;
			while (a[i]==b[j]&&j<l) {
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
int Dem_So_Tu(Chuoi a) {
	int l = strlen(a);
	int dem = 1;
	int i = 0;
	int m=l;
	while (a[i] == ' ') {
		i++;
    }
	while (a[l-1]==' ') {
		a[l - 1] = NULL;

		l--;
	}
	while (i<l) {
		if (a[i] != ' ' && a[i + 1] == ' ') {
			dem++;
			
		}
		i++;
	}
	
	return dem;
}
void Dao_Nguoc_Chuoi(Chuoi a) {
	int i = 0,
		k = 0,
		h = 0,
		f = 0;
	Chuoi tuDau,
		tuCuoi,
		tuTrongKhoang;
	int l = strlen(a);
	tuDau[k] = NULL;
	tuCuoi[h] = NULL;
	tuTrongKhoang[f] = NULL;
	while (a[i] == ' ') {
		i++;
	}
	while (a[l - 1] == ' ') {
		a[l - 1] = NULL;

		l--;
	}
	
	while (a[i]!=' ') {
		tuDau[k] = a[i];
		i++;
		k++;
		tuDau[k] = NULL;
	}
	while (a[l-1]!=' ') {
		tuCuoi[h] = a[l - 1];
		h++;
		l--;
		tuCuoi[h] = NULL;
	}

	while(i!=l) {
		tuTrongKhoang[f] = a[i];
		i++;
		f++;
		tuTrongKhoang[f] = NULL;

	}
	Dao_Chuoi(tuCuoi);
	cout << '\t' << tuCuoi << ' ' << tuTrongKhoang << ' ' << tuDau;
	
}
void Hoan_Vi(char &a,char &b) {
	char tam = a;
	a = b;
	b = tam;
}
void Dao_Chuoi(Chuoi a) {
	int l = strlen(a);
	for (int i = 0; i < l / 2;i++) {
		Hoan_Vi(a[i], a[l - i - 1]);
	}
}