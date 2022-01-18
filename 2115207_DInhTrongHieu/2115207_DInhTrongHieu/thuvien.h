#define MAX 100
struct DATE
{
	int ngay;
	int thang;
	int nam;
};
struct NhanVien {
	char maNV[8];
	char hoTen[30];
	DATE date;
	char Que[20];
	unsigned luong;
};
int Doc_Thong_Tin(char* filename, NhanVien* ds, int& n);
void XuatKeDoi();
void XuatKeDon();
void XuatTieuDe();
void Xuat_1_Nhan_Vien(NhanVien nv);
void XuatDanhSachNhanVien(NhanVien* ds, int n);
void XuatNVCoNamSinhCHoTruoc(NhanVien* ds, int n, int nam);
void XuatNhanVienLuongMin(NhanVien* ds, int n);
void Xoa(NhanVien* ds, int& n, int vt);
void XoaNhanVien(NhanVien* ds, int& n, char* que);

int Doc_Thong_Tin(char* filename,NhanVien* ds,int& n) {
	ifstream in(filename);
	if (!in) {
		return 0;
	}
	n = 0;
	while (!in.eof()) {
		in >> ds[n].maNV;
		in >> ds[n].hoTen;
		in >> ds[n].date.ngay;
		in >> ds[n].date.thang;
		in >> ds[n].date.nam;
		in >> ds[n].Que;
		in >> ds[n].luong;
		n++;
	}
}
void XuatKeDoi() {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 69; i++) {
		cout << '=';
	}
	cout << ':';
	cout << endl;
}
void XuatKeDon() {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 69; i++) {
		cout << '-';
	}
	cout << ':';
	cout << endl;
}
void XuatTieuDe() {
	XuatKeDoi();
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8)
		<< "maNV"
		<< ':'
		<< setw(20)
		<< "ho ten"
		<< ':'
		<< setw(5)
		<< "ngay"
		<< '/'
		<< setw(5)
		<< "thang"
		<< '/'
		<< setw(5)
		<< "nam"
		<< ':'
		<< setw(12)
		<< "que quan"
		<< ':'
		<< setw(8)
		<< "luong"
		<< ':';
	XuatKeDoi();
}
void Xuat_1_Nhan_Vien(NhanVien nv) {
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8)
		<< nv.maNV
		<< ':'
		<< setw(20)
		<< nv.hoTen
		<< ':'
		<< setw(5)
		<< nv.date.ngay
		<< '/'
		<< setw(5)
		<< nv.date.thang
		<< '/'
		<< setw(5)
		<< nv.date.nam
		<< ':'
		<< setw(12)
		<< nv.Que
		<< ':'
		<< setw(8)
		<< nv.luong
		<< ':';
}
void XuatDanhSachNhanVien(NhanVien* ds,int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		Xuat_1_Nhan_Vien(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeDon();
		}

	}
	XuatKeDoi();
}
void XuatNVCoNamSinhCHoTruoc(NhanVien* ds,int n,int nam) {
	cout << "\n\n\n\t\t======== DANH SACH NHAN VIEN SINH NAM " << nam << " ======\n";
	XuatTieuDe();
	
	for (int i = 0; i < n; i++) {
		int dem = 0;
		if (ds[i].date.nam == nam) {
			Xuat_1_Nhan_Vien(ds[i]);
			cout << endl;
			dem++;
			if ((dem + 1) % 5 == 0) {
				XuatKeDon();
			}
		}
	}
	XuatKeDoi();
}
void XuatNhanVienLuongMin(NhanVien* ds,int n) {
	unsigned min=ds[0].luong;
	for (int i = 1; i < n; i++) {
		if (ds[i].luong < min) {
			min = ds[i].luong;
		}
	}
	cout << "\n\n\t\t========DANH SACH NHAN VIEN CO LUONG " << min << " =====\n";
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (ds[i].luong == min) {
			int dem = 0;
			Xuat_1_Nhan_Vien(ds[i]);
			cout << endl;
			dem++;
			if ((dem + 1) % 5 == 0) {
				XuatKeDon();
			}
		}
	}
	XuatKeDoi();
}
void Xoa(NhanVien* ds,int &n,int vt) {
	for (int i = vt + 1; i < n; i++) {
		ds[i - 1] = ds[i];
	}
	n--;
}
void XoaNhanVien(NhanVien* ds,int &n,char* que) {
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].Que, que) == 0) {
			Xoa(ds, n, i);
			i--;
		}
	}
}