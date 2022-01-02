ofstream out;
struct Ten
{
	char ho[10];
	char hoLot[10];
	char ten[10];
};
struct date
{
	int ngay;
	int thang;
	int nam;
};
struct NhanVien
{
	int maNV;
	Ten hoTen;
	date date;
	char diaChi[10];
	int luong;
};
//dinh nghia ham
void Xuat_Ke_Don();
void Xuat_Ke_Doi();
int DocNhanVien(NhanVien* ds, int& n, const char* filename);
void XuatTieuDe();
void Xuat1NhanVien(NhanVien a);
void XuatDSNhanVien(NhanVien* ds, int n);
void DoiTenHoa(NhanVien* ds, int n);
void InNhanVienCoDiaChi(NhanVien* ds, int n, char diaChi[]);
void DanhSachBanDau(NhanVien* ds, int n);
void XoaNhanVien(NhanVien* ds, int& n, int vt);
void InNhanVienCoLuongMAX(NhanVien* ds, int n);
void XoaNhanVienLuongThapNhat(NhanVien* ds, int n);
void Hoan_Vi(NhanVien& a, NhanVien& b);
void SapXepTangTheoLuong(NhanVien* ds, int n);
void ThemNhanVien(NhanVien* ds, int& n, int vt, NhanVien x);
void NhapTuBanPhim1NhanVien(NhanVien &ds);
void ThemNhanVienVaoDanhSach(NhanVien* ds, int n);
void NhanVienCoDiaChi(NhanVien* ds, int n, const char* diaChi);
void XuatTheoDiaChi(NhanVien* ds, int n);
void Xuat_Ke_Don() {
	out << endl;
	out << ':';
	for (int i = 0; i < 78; i++) {
		out << '-';
	}
	out << ':';
	out << endl;
}
void Xuat_Ke_Doi() {
	out << endl;
	out << ':';
	for (int i = 0; i < 78; i++) {
		out << '=';
	}
	out << ':';
	out << endl;
}
int DocNhanVien(NhanVien* ds, int& n, const char* filename) {
	ifstream in;
	in.open(filename);
	if (!in) {
		return 0;
	}
	n = 0;
	while (!in.eof()) {
		in >> (ds + n)->maNV;
		in >> (ds + n)->hoTen.ho;
		in >> (ds + n)->hoTen.hoLot;
		in >> (ds + n)->hoTen.ten;
		in >> (ds + n)->date.ngay;
		in >> (ds + n)->date.thang;
		in >> (ds + n)->date.nam;
		in >> (ds + n)->diaChi;
		in >> (ds + n)->luong;
		n++;
	}
	in.close();
	return 1;
}
void XuatTieuDe() {
	Xuat_Ke_Doi();
	out << setiosflags(ios::left)
		<< ':'
		<< setw(10)
		<< "maNV"
		<< ':'
		<< setw(10)
		<< "ho"
		<< setw(10)
		<< "tlot"
		<< setw(10)
		<< "ten"
		<< ':'
		<< setw(5)
		<< "Ngay"
		<< setw(6)
		<< "thang"
		<< setw(5)
		<< "nam"
		<< ':'
		<< setw(10)
		<< "dia chi"
		<< ':'
		<< setw(8)
		<< "luong"
		<< ':';
	Xuat_Ke_Doi();
}
void Xuat1NhanVien(NhanVien a) {
	
	out << endl;
	out << setiosflags(ios::left)
		<< ':'
		<< setw(10)
		<< a.maNV
		<< ':'
		<< setw(10)
		<< a.hoTen.ho
		<< setw(10)
		<< a.hoTen.hoLot
		<< setw(10)
		<< a.hoTen.ten
		<< ':'
		<< setw(5)
		<< a.date.ngay
		<< setw(6)
		<< a.date.thang
		<< setw(5)
		<< a.date.nam
		<< ':'
		<< setw(10)
		<< a.diaChi
		<< ':'
		<< setw(8)
		<< setiosflags(ios::fixed) << setprecision(2)
		<< a.luong
		<< ':';
	out << endl;
	
}
void XuatDSNhanVien(NhanVien* ds, int n) {
	out.open("in.txt");
	DanhSachBanDau(ds, n);
	out.close();
}
void DanhSachBanDau(NhanVien* ds ,int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		Xuat1NhanVien(*(ds + i));
		if ((i + 1) % 5 == 0) {
			Xuat_Ke_Don();
		}
	}
	Xuat_Ke_Doi();
}
void DoiTenHoa(NhanVien *ds,int n) {

	
	for (int i = 0; i < n; i++) {
		for(int j=0;j<strlen((ds + i)->hoTen.ten);j++)
			if ((ds + i)->hoTen.ten[j] >= 97 && (ds + i)->hoTen.ten[j] <= 122) {
				(ds + i)->hoTen.ten[j] -= 32;
			}
	}
	out << "\nDanh sach sau khi nan ten thanh chu HOA la : ";
	XuatDSNhanVien(ds, n);

	
}
void InNhanVienCoDiaChi(NhanVien* ds,int n,char diaChi[]) {
	
	out.open("in.txt");
	out << "\ndanh sach ban dau: ";
	DanhSachBanDau(ds, n);
	out << "\nnhan vien co dia chi tai " << diaChi << " la: ";
	out << endl;
	for (int i = 0; i < n; i++) {
		if (_strcmpi((ds + i)->diaChi, diaChi) == 0) {
			
			Xuat1NhanVien(*(ds + i));
			out << endl;
		}
	}
	out.close();
}
void InNhanVienCoLuongMAX(NhanVien* ds,int n) {
	out.open("in.txt");
	out << "\ndanh sach nhan vien ban dau: ";
	DanhSachBanDau(ds, n);
	out << "\nNhan vien co luong cao nhat la : ";
	int max = ds->luong;
	for (int i = 1; i < n; i++) {
		if ((ds + i)->luong > max) {
			max = (ds + i)->luong;
		}
	}
	for (int i = 0; i < n; i++) {
		if ((ds + i)->luong == max) {
			Xuat1NhanVien((*(ds + i)));
		}
	}
	out.close();
}
void XoaNhanVien(NhanVien* ds, int &n,int vt) {
	for (int i = vt + 1; i < n; i++) {
		ds[i - 1] = ds[i];
	}
	n--;
}
void XoaNhanVienLuongThapNhat(NhanVien* ds, int n) {
	out.open("in.txt");
	out << "\ndanh sach ban dau la: ";
	DanhSachBanDau(ds, n);
	int min = ds[0].luong;
	for (int i = 1; i < n; i++) {
		if (ds[i].luong < min) {
			min = ds[i].luong;
		}
	}
	for (int i = 0; i < n; i++) {
		if (ds[i].luong == min) {
			XoaNhanVien(ds, n, i);
		}
	}
	out << "\nsau khi xoa nhan vien co luong thap nhat danh sach con lai la: ";
	DanhSachBanDau(ds, n);
	out.close();
}
void Hoan_Vi(NhanVien& a, NhanVien& b) {
	NhanVien temp = a;
	a = b;
	b = temp;
}
void SapXepTangTheoLuong(NhanVien* ds,int n) {
	
	out.open("in.txt");
	out << "\nMang ban dai la : ";
	DanhSachBanDau(ds, n);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[i].luong > ds[j].luong) {
				Hoan_Vi(ds[i], ds[j]);
			}
		}
	}
	out << "\nMang duoc sap xem lai la: ";
	DanhSachBanDau(ds, n);
	out.close();
}
void NhapTuBanPhim1NhanVien(NhanVien &ds) {
	cout << "\nNhap ma nhan vien: ";
	cin >> ds.maNV;
	cout << "\nNhap ho: ";
	cin >> ds.hoTen.ho;
	cout << "\nNhap ten lot: ";
	cin >> ds.hoTen.hoLot;
	cout << "\nNhap ten: ";
	cin >> ds.hoTen.ten;
	cout << "\nNhap ngay sinh: ";
	cin >> ds.date.ngay;
	cout << "\nNhap thang sinh: ";
	cin >> ds.date.thang;
	cout << "\nNhap nam sinh: ";
	cin >> ds.date.nam;
	cout << "\nNhap dia chi: ";
	cin >> ds.diaChi;
	cout << "\nNhap luong: ";
	cin >> ds.luong;
}
void ThemNhanVien(NhanVien* ds,int &n,int vt,NhanVien x) {
	for (int i = n - 1; i >= vt; i--) {
		ds[i + 1] = ds[i];
	}
	ds[vt] = x;
	n++;
}
void ThemNhanVienVaoDanhSach(NhanVien* ds, int n) {
	NhanVien nv;
	int vt;
	cout << "\nNhap vi tri can them: ";
	cin >> vt;
	out.open("in.txt");
	out << "\nDanh sach ban dau la : ";
	DanhSachBanDau(ds, n);
	NhapTuBanPhim1NhanVien(nv);
	ThemNhanVien(ds, n, vt, nv);
	out << "\nDanh sach sau la: ";
	DanhSachBanDau(ds, n);
	out.close();
}

void NhanVienCoDiaChi(NhanVien* ds, int n,const char* diaChi) {

	out << "\nnhan vien co dia chi tai " << diaChi << " la: ";
	out << endl;
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (_strcmpi((ds + i)->diaChi, diaChi) == 0) {

			Xuat1NhanVien(*(ds + i));
			out << endl;
		}
	}
	Xuat_Ke_Doi();

}
void XuatTheoDiaChi(NhanVien* ds, int n) {
	out.open("int.txt");
	out << "\nDanh sach ban dau : ";
	DanhSachBanDau(ds, n);
	NhanVienCoDiaChi(ds, n, "Da_Lat");
	NhanVienCoDiaChi(ds, n, "Khanh_Hoa");
	NhanVienCoDiaChi(ds, n, "Phu_Yen");
	NhanVienCoDiaChi(ds, n, "Binh_Dinh");
	NhanVienCoDiaChi(ds, n, "Hue");
	out.close();
}