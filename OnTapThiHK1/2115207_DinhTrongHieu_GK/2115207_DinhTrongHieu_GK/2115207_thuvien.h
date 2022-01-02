#define MAX 100
typedef char Chuoi[MAX];
void Nhap_Xau(Chuoi a);
void Xuat_Xau(Chuoi a);
void Tia_KyTu(Chuoi a);
void Doi_Ky_TuThuong_Hoa(Chuoi a);
void Xoa(Chuoi a, int vt, int& l);
void Chen_KyTu_Vao_Cuoi(Chuoi a, char kt);
void Nhap_Xau(Chuoi a) {
	gets_s(a, MAX);

}
void Xuat_Xau(Chuoi a) {
	cout << a;
}
void Doi_Ky_TuThuong_Hoa(Chuoi a) {
	for (int i = 0; a[i] != NULL; i++) {
		if (a[i] >= 97 && a[i] <= 122) {
			a[i] -= 32;
		}
	}
}
void Chen_KyTu_Vao_Cuoi(Chuoi a, char kt) {
	int l = strlen(a);
	for (int i = l - 1; i > l - 1; i++) {
		a[i + 1] = a[i];
	}
	a[l] = kt;
	a[l + 1] = NULL;

}
void Xoa(Chuoi a, int vt, int& l) {
	for (int i = vt + 1; i < l; i++) {
		a[i - 1] = a[i];
	}
	a[--l] = NULL;

}
int DoDaiChuoi(Chuoi a) {
	for (int i = 0;; i++) {
		if (a[i] == NULL) {
			return i;
		}
	}
}
void Tia_KyTu(Chuoi a) {
    int l = DoDaiChuoi(a);
	for (int i = 0; i < l - 1; i++) {
		for (int j = i + 1; j < l; j++)
		{
			if (a[j] == a[i]) {
				Xoa(a, j, l);
				j--;
			}
			
		}
	}
}
//void Tia_KyTu(Chuoi a) {
//	int i, j, l = strlen(a);
//	for (i = 0; i < l; i++) {
//		bool pB = 1;
//		for (j = i - 1; j >= 0; j--) {
//			if (a[i] == a[j]) {
//				pB = 0;
//				break;
//			}
//		}
//		if (pB) {
//			int count = 0;
//			for (int k = 0; k < l; k++) {
//				if (a[i] == a[k]) {
//					count++;
//				}
//			}
//			cout << a[i];
//		}
//	}
//}