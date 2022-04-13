#pragma once
struct ChamCong
{
	int soNgatNghiCoPhep;
	int soNgayNghiKhongPhep;
	int soNgayLamThem;
};
struct NhanVien {
	char maNhanVien[8];
	char hoTen[16];
	char diaChi[16];
	char TDVH;
	int luongCanBan;
	ChamCong chanCong;
	double luongThucNhan;
};

int Nhap_Thong_Tin(NhanVien* ds, int& n);
void XuatDongKe(char x);
void Xuat1NhanVien(NhanVien nv);
void XuatDanhSach(NhanVien* ds, int n);
void LuongThucNhan(NhanVien* ds, int n);
void XuatBangLuong(NhanVien* ds, int n);
double TinhPhuTroi(NhanVien nv);
int Nhap_Thong_Tin(NhanVien* ds, int& n) {
	ifstream in("llnv.txt");
	
	if (!in)
		return 0;
	while (!in.eof()) {
		in >> ds[n].maNhanVien;
		in >> ds[n].hoTen;
		in >> ds[n].diaChi;
		in >> ds[n].TDVH;
		in >> ds[n].luongCanBan;
		
		n++;
	}
	in.close();
	
	in.open("chamcong.txt");
	if (!in)
		return 0;
	n = 0;
	while (!in.eof()) {
		in >> ds[n].maNhanVien;
		in >> ds[n].chanCong.soNgatNghiCoPhep;
		in >> ds[n].chanCong.soNgayNghiKhongPhep;
		in >> ds[n].chanCong.soNgayLamThem;		
		n++;
	}
	in.close();

	return 1;
}
void XuatDongKe(char x) {
	cout << endl;
	for (int i = 0; i < 99; i++) {
		cout << x;
	}
	cout << endl;
}
void XuatTieuDe() {
	XuatDongKe('=');
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(12)
		<< "ma nhan vien"
		<< ':'
		<< setw(12)
		<< "ho ten"
		<< ':'
		<< setw(10)
		<< "dia chi"
		<< ':'
		<< setw(6)
		<< "TDVH"
		<< ':'
		<< setw(15)
		<< "luong can ban"
		<< ':'
		<< setw(10)
		<< "nghi phep"
		<< ':'
		<< setw(12)
		<< "nghi 0 phep"
		<< ':'
		<< setw(12)
		<< "lam them"
		<< ':'
		;

	XuatDongKe('=');
}
void Xuat1NhanVien(NhanVien nv) {
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(12)
		<< nv.maNhanVien
		<< ':'
		<< setw(12)
		<< nv.hoTen
		<< ':'
		<< setw(10)
		<< nv.diaChi
		<< ':'
		<< setw(6)
		<< nv.TDVH
		<< ':'
		<< setw(15)
		<< nv.luongCanBan
		<< ':'
		<< setw(10)
		<< nv.chanCong.soNgatNghiCoPhep
		<< ':'
		<< setw(12)
		<< nv.chanCong.soNgayNghiKhongPhep
		<< ':'
		<< setw(12)
		<< nv.chanCong.soNgayLamThem
		<< ':'
		;
}
void XuatDanhSach(NhanVien* ds,int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		Xuat1NhanVien(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
	XuatDongKe('=');
}
void LuongThucNhan(NhanVien* ds,int n) {
	for (int i = 0; i < n; i++) {
		ds[i].luongThucNhan = ds[i].luongCanBan + TinhPhuTroi(ds[i]);
	}
}
void XuatBangLuong(NhanVien* ds,int n) {
	cout << endl;
	cout << "\n============================================\n";
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(20)
		<< "ma nhan vien"
		<< ':'
		<< setw(20)
		<< "luong thuc nhan"
		<< ':';
	cout << "\n============================================\n";
	cout << endl;
	for (int i = 0; i < n; i++) {
		
		cout << setiosflags(ios::left)
			<< ':'
			<< setw(20)
			<< ds[i].maNhanVien
			<< ':'
			<< setw(20)
			<< ds[i].luongThucNhan
			<< ':';
		cout << endl;
		
	}
	cout << "\n============================================\n";
	
}
double TinhPhuTroi(NhanVien nv) {
	double phuTroi = 0;
	
	if (nv.TDVH == '5') {
		phuTroi=+ (10.0 / 100) * nv.luongCanBan;
	}
	if (nv.TDVH == '6') {
		phuTroi=+ (20.0 / 100) * nv.luongCanBan;
	}
	if (nv.chanCong.soNgayLamThem>0) {
		
		for (int i = 0; i < nv.chanCong.soNgayLamThem; i++) {
			phuTroi=+(4.0 / 100) * nv.luongCanBan /24;
		}
		
		
	}
	if (nv.chanCong.soNgayNghiKhongPhep > 0) {

		for (int i = 0; i < nv.chanCong.soNgayNghiKhongPhep; i++) {
			phuTroi = -(4.0 / 100) * nv.luongCanBan / 24;
		}
	}
	if (nv.chanCong.soNgatNghiCoPhep >= 15) {
		phuTroi= -(10.0 / 100) * nv.luongCanBan;
	}

	return phuTroi;
}