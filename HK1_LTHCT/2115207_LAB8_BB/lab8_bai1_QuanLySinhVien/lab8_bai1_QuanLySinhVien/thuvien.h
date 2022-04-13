#define MAX 50
struct DanhSach {
	char maSinhVien[9];
	char hoTen[27];
	char namSinh[6];
	char lop[12];
	double diemTB;
	char xepLoai[7];
};
void Chen(DanhSach sv[MAX], const char maSInhVien[9], const char hoTen[27],
	const char namSinh[6], const char lop[12], double diemTB, int& n);
void TaoDanhSachSinhVien(DanhSach ds[MAX], int& n);
void XuatKeNgangDoi();
void XuatKeNgangDon();
void XuatTheoDinhDang();
void Xem_Danh_Sach(DanhSach ds[], int n);
void HoanVi(DanhSach& a, DanhSach& b);
void Xuat_Bang_Diem_SV(DanhSach ds[MAX], int n);
void Sap_Xep_Theo_Lop(DanhSach ds[MAX], int& n);
void Xoa(DanhSach ds[], int& n, int vt);
void Sap_Xem_Giam_Theo_DTB(DanhSach ds[], int& n);
void Xuat_Max_DiemTB(DanhSach ds[], int n);
void Sap_Xep_Tang_Theo_Ten(DanhSach ds[], int& n);
void Xem_Thong_Tin_1_SV(DanhSach sv);
void Tim_Kiem_Sv(DanhSach ds[], int n, char hoTen[27]);
void Xep_Loai_Sinh_Vien(DanhSach ds[], int n);
void Xep_Loai_Hoc_Luc_1_SV(DanhSach& sv);
void Chen(DanhSach sv[MAX], const char maSInhVien[9], const char hoTen[27],
	const char namSinh[6], const char lop[12], double diemTB, int& n)
{
	if (n < MAX) {
		strcpy_s(sv[n].maSinhVien, 9, maSInhVien);
		strcpy_s(sv[n].hoTen, 27, hoTen);
		strcpy_s(sv[n].namSinh, 6, namSinh);
		strcpy_s(sv[n].lop, 12, lop);
		sv[n].diemTB = diemTB;
		n++;
	}

}
void TaoDanhSachSinhVien(DanhSach ds[MAX], int& n) {
	n = 0;
	Chen(ds, "1534507", "Duong Qua", "1997", "CTK39", 9.0, n);
	Chen(ds, "1405507", "tu ma ngoc yen", "1996", "CTK38", 6.5, n);
	Chen(ds, "1334067", "Quach Tinh", "1996", "CTK37", 8.0, n);
	Chen(ds, "1300167", "Hoang Dung", "1995", "CTK37", 7.2, n);
	Chen(ds, "1534507", "Lam Xung", "1997", "CTK39", 4.0, n);
	Chen(ds, "1405507", "Hoang Dung", "1996", "CTK38", 8.5, n);
	Chen(ds, "1334067", "Vuong Ngoc Yen", "1995", "CTK37", 7.0, n);
	Chen(ds, "1334167", "Lenh Ho Xung", "1995", "CTK37", 5.6, n);
	Chen(ds, "1530070", "Trieu Minh", "1997", "CTK39", 3.0, n);
	Chen(ds, "1534123", "Nhac Dung", "1997", "CTK39", 2.0, n);
	Chen(ds, "1534456", "Ha Thai Xung", "1997", "CTK39", 6.0, n);
	Chen(ds, "1512307", "Vy Tieu Bao", "1997", "CTK39", 5.0, n);
	Chen(ds, "1400067", "Chau Ba Thong", "1996", "CTK38", 6.5, n);
	Chen(ds, "1530000", "cong tang ton nu thu huong", "1997", "CTK39", 8.0, n);
	Chen(ds, "1401234", "Ton That Du", "1996", "CTK38", 9.5, n);
	Chen(ds, "1434167", "Doan Du", "1996", "CTK38", 5.6, n);
	Chen(ds, "1333217", "Hoang Trong Yen", "1995", "CTK37", 7.0, n);
	Chen(ds, "1531117", "Au Duong Phong", "1997", "CTK39", 5.5, n);
	

}
void XuatKeNgangDoi()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 79; i++)
		cout << '=';
	cout << ':';
}
void XuatKeNgangDon()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 79; i++)
		cout << '-';
	cout << ':';
}
void XuatTheoDinhDang() {
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(10)

		<< "Ma SV"
		<< ':'
		<< setw(27)

		<< "Ho va Ten"
		<< ':'
		<< setw(10)

		<< "Nam sinh"
		<< ':'
		<< setw(10)

		<< "lop"
		<< ':'
		<< setw(10)

		<< "Diem TB"
		<< ':'
		<< setw(5)

		<< "XLoai"
		<< ':';
	XuatKeNgangDoi();
	cout << endl;
}

void Xem_Thong_Tin_1_SV(DanhSach sv) {
	sv.xepLoai[0] = NULL;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(10)

		<< sv.maSinhVien
		<< ':'
		<< setw(27)

		<< sv.hoTen
		<< ':'
		<< setw(10)

		<< sv.namSinh
		<< ':'
		<< setw(10)

		<< sv.lop
		<< ':'
		<< setw(10)
		<< setiosflags(ios::fixed)
		<< setprecision(1)

		<< sv.diemTB
		<< ':'
		<< setw(7)

		<< sv.xepLoai
		<< ':';
}
void Xem_Danh_Sach(DanhSach ds[MAX], int n) {
	XuatTheoDinhDang();
	cout << endl;
	for (int i = 0; i < n; i++) {
		Xem_Thong_Tin_1_SV(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeNgangDon();
		}
		cout << endl;
	}
	XuatKeNgangDoi();
	cout << endl;
}
void Xuat_Bang_Diem_SV(DanhSach ds[MAX], int n) {
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left) 
		
		<< setw(10) 
		
		<< "Ma SV" 
		<< setw(27) 
		
		<< "Ho va Ten"
		<< setw(10) 
		
		<< "Diem TB";
	XuatKeNgangDoi();
	cout << endl;
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << setiosflags(ios::left) 
			
			<< setw(10) 
			
			<< ds[i].maSinhVien 
			<< setw(27) 
			
			<< ds[i].hoTen
			<< setw(10) 
			<< setiosflags(ios::fixed) << setprecision(1)
			
			<< ds[i].diemTB;
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeNgangDon();
		}
		cout << endl;
	}
	XuatKeNgangDoi();
	cout << endl;
}
void HoanVi(DanhSach &a,DanhSach &b) {
	DanhSach tam = a;
	a = b;
	b = tam;
}
void Xoa(DanhSach ds[],int &n,int vt) {
	for (int i = vt+1; i < n;i++) {
		ds[i - 1] = ds[i];
	}
	n--;
}
void Sap_Xep_Theo_Lop(DanhSach ds[MAX],int &n) {
	DanhSach l1[MAX],l[MAX];
	int m = 0,
		e = 0;
	for (int i = 0; i < n;i++) {
		l[m] = ds[i];
		m++;
	}
	for (int i = 0; i < m;i++) {
		for (int j = i+1; j < m; j++) {
			if (strcmp(l[i].lop,l[j].lop)==0) {
				Xoa(l, m, j);
				j--;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n;j++) {
			if (strcmp(l[i].lop , ds[j].lop)==0) {
				l1[e++] = ds[j];
			}
		}
	}

	for (int i = 0; i < e;i++) {
		ds[i] = l1[i];
	}
}
void Sap_Xem_Giam_Theo_DTB(DanhSach ds[],int &n) {
	for (int i = 0; i < n-1;i++) {
		for (int j = i + 1; j < n;j++) {
			if (ds[i].diemTB < ds[j].diemTB) {
				HoanVi(ds[i], ds[j]);
			}
		}
	}
}
void Sap_Xep_Tang_Theo_Ten(DanhSach ds[] ,int &n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(ds[i].hoTen , ds[j].hoTen) > 0) {
				HoanVi(ds[i], ds[j]);
			}
		}
	}
}
void Tim_Kiem_Sv(DanhSach ds[],int n,char hoTen[27]) {
	XuatTheoDinhDang();
	for (int i = 0; i < n;i++) {
		if (_strcmpi(ds[i].hoTen, hoTen) == 0) {
			Xem_Thong_Tin_1_SV(ds[i]);
		}
	}
}
void Xuat_Max_DiemTB(DanhSach ds[] ,int n) {
	double max = ds[0].diemTB;
	for (int i = 1; i < n;i++) {
		if (ds[i].diemTB > max) {
			max = ds[i].diemTB;
		}
	}
	XuatTheoDinhDang();
	for (int i = 0; i < n;i++) {
		if (ds[i].diemTB == max) {
			Xem_Thong_Tin_1_SV(ds[i]);
		}
	}
}
void Xep_Loai_Hoc_Luc_1_SV(DanhSach &sv){
	if (sv.diemTB >= 8.5 && sv.diemTB <= 10) {
		strcpy_s(sv.xepLoai, 7, "Gioi");
	}
	else if (sv.diemTB >= 7.0 && sv.diemTB < 8.5) {
		strcpy_s(sv.xepLoai, 7, "Kha");
	}
	else if (sv.diemTB >= 5.5 && sv.diemTB < 7.0) {
		strcpy_s(sv.xepLoai, 7, "TB");
	}
	else if (sv.diemTB >= 4.0 && sv.diemTB < 5.5) {
		strcpy_s(sv.xepLoai, 7, "Yeu");
	}
	else if (sv.diemTB >= 0.0 && sv.diemTB < 4.0) {
		strcpy_s(sv.xepLoai, 7, "Kem");
	}
}
void Xep_Loai_Sinh_Vien(DanhSach ds[],int n) {
	for (int i = 0; i < n; i++) {
		Xep_Loai_Hoc_Luc_1_SV(ds[i]);
	}
	XuatTheoDinhDang();
	for (int i = 0; i < n;i++) {
		cout << setiosflags(ios::left) << setw(10) << ds[i].maSinhVien << setw(27) << ds[i].hoTen
			<< setw(10) << ds[i].namSinh << setw(10) << ds[i].lop
			<< setw(10) << setiosflags(ios::fixed) << setprecision(1)
			<< ds[i].diemTB << setw(7) << ds[i].xepLoai;
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeNgangDon();
		}
		cout << endl;
	}
}