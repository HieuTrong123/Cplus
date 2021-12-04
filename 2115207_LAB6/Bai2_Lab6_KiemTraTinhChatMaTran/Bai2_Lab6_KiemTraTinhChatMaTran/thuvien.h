#define MAX 50
void Nhap_Ma_Tran(int a[MAX][MAX], int n);
void Xuat_Ma_tran(int a[MAX][MAX], int n);
int Kiem_Tra_Ma_Tran_Doi_Xung(int a[MAX][MAX], int n);
int Kiem_Tra_Ma_Tran_Tam_Giac_Tren(int a[MAX][MAX], int n);
int Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(int a[MAX][MAX], int n);
int Kiem_Tra_Ma_Tran_Don_Vi(int a[MAX][MAX], int n);
void Nhap_Ma_Tran(int a[MAX][MAX] ,int n) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n;j++) {
			cout << "Nhap a[ " << i << " ][ " << j << " ]: ";
			cin >> a[i][j];
		}
		
	}
}
void Xuat_Ma_tran(int a[MAX][MAX] ,int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
}
int Kiem_Tra_Ma_Tran_Doi_Xung(int a[MAX][MAX] ,int n) {
	int kq,dem=0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i][j] == a[j][i]) {
				dem++;
				if (dem >= n) {
					kq = 1;
				}
			}
			else {
				
				return 0;
			}
		}
	}
	return kq;
}
int Kiem_Tra_Ma_Tran_Tam_Giac_Tren(int a[MAX][MAX] ,int n) {
	int kq;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i][j] == 0) {
				kq = 1;
			}
			else {
				
				return 0;
			}
		}
	}
	return kq;
}
int Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(int a[MAX][MAX], int n) {
	int kq;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j][i] == 0) {
				kq = 1;
			}
			else {

				return 0;
			}
		}
	}
	return kq;
}
int Kiem_Tra_Ma_Tran_Don_Vi(int a[MAX][MAX] ,int n) {
	int kq;
	for (int i = 0; i < n; i++) {
		
			if (a[i][i]==1) {
				kq = 1;
			}
			else {

				return 0;
			}
	}
	return kq;
}