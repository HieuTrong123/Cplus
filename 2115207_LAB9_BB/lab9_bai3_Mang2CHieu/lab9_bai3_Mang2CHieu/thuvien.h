void Tao_Ma_Tran(int* a, int n);
void Xem_Ma_Tran(int* a, int n);
int KiemTraDoiXung(int* a, int n);
int Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(int* a, int n);
int Kiem_Tra_Ma_Tran_Tam_Giac_Tren(int* a, int n);
int Kiem_Tra_Ma_Tran_Don_Vi(int* a, int n);

void Tao_Ma_Tran(int* a, int n) {

	/*srand(time(NULL));*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			/*	*(a + i * n + j) = rand() % (9 - (-9) + 1) + (-9);*/
			cout << "Nhap a[ " << i << " ][ " << j << " ]: ";
			cin >> a[i * n + j];
		}
	}
}
void Xem_Ma_Tran(int* a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setiosflags(ios::left) << setw(4) << *(a + i * n + j);
		}
		cout << endl;
	}
}
int KiemTraDoiXung(int* a, int n) {
	int kq, dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i * n + j] == a[j * n + i]) {
				dem++;
				if (dem == n) {
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
int Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(int* a, int n) {
	int kq;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i * n + j] == 0) {
				kq = 1;
			}
			else {

				return 0;
			}
		}
	}
	return kq;
}
int Kiem_Tra_Ma_Tran_Tam_Giac_Tren(int* a, int n) {
	int kq;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j * n + i] == 0) {
				kq = 1;
			}
			else {

				return 0;
			}
		}
	}
	return kq;
}
int Kiem_Tra_Ma_Tran_Don_Vi(int* a, int n) {
	int kq;
	for (int i = 0; i < n; i++) {

		if (a[i * n + i] == 1) {
			kq = 1;
		}
		else {

			return 0;
		}
	}
	return kq;
}