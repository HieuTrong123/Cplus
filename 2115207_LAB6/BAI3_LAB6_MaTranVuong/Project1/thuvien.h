#define MAX 50
void Nhap_Ma_Tran(int a[MAX][MAX], int n);
void Xuat_Ma_Tran(int a[MAX][MAX], int n);
void Hoan_Vi_2_Cot(int a[MAX][MAX], int n, int j, int h);
int Kiem_Tra_Ma_Tran_Hoan_Vi(int a[MAX][MAX], int n);
void Hoan_Vi_2_Hang(int a[MAX][MAX], int n, int i, int k);
void Kiem_Tra_Ma_Tran_Hoan_Vi(int a[MAX][MAX], int n, int b[MAX][MAX]);
void Nhap_Ma_Tran(int a[MAX][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "\nNhap a[ " << i << " ][ " << j << " ]: ";
			cin >> a[i][j];
		}
	}

}
void Xuat_Ma_Tran(int a[MAX][MAX] ,int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
}
void Hoan_Vi(int &a, int &b) {
	int tam = a;
	a = b;
	b = tam;
}
void Hoan_Vi_2_Cot(int a[MAX][MAX] ,int n ,int j,int h) {
	for (int i = 0; i < n; i++) {
		Hoan_Vi(a[i][j], a[i][h]);
    }
	Xuat_Ma_Tran(a, n);
}
void Hoan_Vi_2_Hang(int a[MAX][MAX], int n, int i, int k) {
	for (int j = 0; j < n;j++) {
		Hoan_Vi(a[i][j], a[k][j]);
		
	}
	Xuat_Ma_Tran(a, n);
}
void Kiem_Tra_Ma_Tran_Hoan_Vi(int a[MAX][MAX] ,int n ,int b[MAX][MAX]) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = a[j][i];
		}
	}
	cout << "\nma tran chuyen vi la: ";
	Xuat_Ma_Tran(b, n);
}