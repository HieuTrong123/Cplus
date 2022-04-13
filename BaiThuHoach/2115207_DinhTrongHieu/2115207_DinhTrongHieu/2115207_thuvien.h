#define MAX 100
struct Ten {
	char ho[8];
	char tenLot[6];
	char ten[8];
};
struct BangDiem
{
	char maSV[8];
	Ten ten;
	char lop[6];
	double diem;
};

int TaoBangDiem(char* filename, BangDiem* ds, int& n);
void XuatKeDoi();
void XuatKeDon();
void XuatTieuDe();
void Xuat1BangDiem(BangDiem& a);
void XuatDanhSachBD(BangDiem* ds, int n);
void XuatSinhViencoMaSVChoTruoc(BangDiem* ds, int n, char* maSV);
void SinhVienTenHoaCtk39(BangDiem* ds, int n);
void XuatSinhVienDiemThapNhat(BangDiem* ds, int n);


int TaoBangDiem(char* filename, BangDiem* ds, int& n) {
	ifstream in(filename);
	if (!in) {
		return 0;
	}
	n = 0;
	while (!in.eof()) {
		in >> ds[n].maSV;
		in >> ds[n].ten.ho;
		in >> ds[n].ten.tenLot;
		in >> ds[n].ten.ten;
		in >> ds[n].lop;
		in >> ds[n].diem;
		n++;
	}
	in.close();
	return 1;
}
void XuatKeDoi() {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 42; i++) {
		cout << '=';
	}
	cout << ':';
	cout << endl;
}
void XuatKeDon() {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 42; i++) {
		cout << '-';
	}
	cout << ':';
	cout << endl;
}
void XuatTieuDe() {
	XuatKeDoi();
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(7)
		<< "maSV"
		<< ':'
		<< setw(6)
		<< "Ho"
		<< setw(8)
		<< "Ten lot"
		<< setw(7)
		<< "Ten"
		<< ':'
		<< setw(6)
		<< "lop"
		<< ':'
		<< setw(5)
		<< "diem"
		<< ':';
	XuatKeDoi();
}
void Xuat1BangDiem(BangDiem& a) {
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(7)
		<< a.maSV
		<< ':'
		<< setw(7)
		<< a.ten.ho
		<< setw(7)
		<< a.ten.tenLot
		<< setw(7)
		<< a.ten.ten
		<< ':'
		<< setw(6)
		<< a.lop
		<< ':'
		<< setw(5)
		<< setiosflags(ios::fixed) 
		<< setprecision(2)
		<< a.diem
		<< ':';
}
void XuatDanhSachBD(BangDiem* ds,int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		Xuat1BangDiem(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeDon();
		}
	}
	XuatKeDoi();
}
void XuatSinhViencoMaSVChoTruoc(BangDiem* ds, int n,char* maSV) {
	int kq=0;
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].maSV, maSV) == 0) {
			kq = 1;
			break;
		}
		
	}
	if (kq == 1) {
		cout << "\nSinh vien co ma so SV " << maSV << " la: ";
		XuatTieuDe();
		for (int i = 0; i < n; i++) {
			if (_strcmpi(ds[i].maSV, maSV) == 0) {
				Xuat1BangDiem(ds[i]);
				cout << endl;

			}
		}
		XuatKeDoi();
	}
	else {
		cout << "\nkhong ton tai ma so sinh vien trong danh sach"<<endl;
	}
	
}
void SinhVienTenHoaCtk39(BangDiem* ds, int n) {
	cout << "\nbang diem cua sinh vien Hoa lop ctk19 la: ";
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (strcmp(ds[i].ten.ten,"Hoa") == 0&& strcmp(ds[i].lop,"CTK19") == 0) {
			Xuat1BangDiem(ds[i]);
			cout << endl;
		}
	}
	XuatKeDoi();
}
void XuatSinhVienDiemThapNhat(BangDiem* ds,int n) {
	double min = ds[0].diem;
	for (int i = 1; i < n; i++) {
		if (ds[i].diem < min) {
			min = ds[i].diem;
		}
	}
	cout << "\nsinh vien co so diem thap nhat("<<min<<") la: ";
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (ds[i].diem == min) {
			Xuat1BangDiem(ds[i]);
			cout << endl;
		}
	}
	XuatKeDoi();
}
