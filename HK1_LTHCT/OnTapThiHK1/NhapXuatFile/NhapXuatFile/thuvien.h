struct BachHoa
{
	char tenMatHang[40];
	unsigned donGia;
	int soLuong;
	char donVi[8];
	int hanSD;
	char loaiMatHang[25];
};
int NhapDuLieuTuFile(char* filename, BachHoa* ds, int& n) {
	ifstream in(filename);
	if (!in)
		return 0;
	n = 0;
	while (!in.eof()) {
		in >> ds[n].tenMatHang;
		in >> ds[n].donGia;
		in >> ds[n].soLuong;
		in >> ds[n].donVi;
		in >> ds[n].hanSD;
		in >> ds[n].loaiMatHang;
		n++;
	}
	in.close();
	return 1;
}
void XuatKeDoi() {
	cout << endl;
	cout << '|';
	for (int i = 0; i < 78; i++) {
		cout << '=';
	}
	cout << '|';
	cout << endl;
}
void XuatKeDon() {
	cout << endl;
	cout << '|';
	for (int i = 0; i < 78; i++) {
		cout << '-';
	}
	cout << '|';
	cout << endl;
}
void XuatTieuDe() {
	XuatKeDoi();
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(25)
		<< "ten mat hang"
		<< '|'
		<< setw(8)
		<< "don gia"
		<< '|'
		<< setw(13)
		<< "so luong(VND)"
		<< '|'
		<< setw(6)
		<< "don vi"
		<< '|'
		<< setw(5)
		<< "han SD"
		<< '|'
		<< setw(15)
		<< "loai mat hang"
		<< '|';
	XuatKeDoi();

}
void Xuat1BachHoa(BachHoa bh) {
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(25)
		<< bh.tenMatHang
		<< '|'
		<< setw(8)
		<< bh.donGia
		<< '|'
		<< setw(13)
		<< bh.soLuong
		<< '|'
		<< setw(7)
		<< bh.donVi
		<< '|'
		<< setw(5)
		<< bh.hanSD
		<< '|'
		<< setw(15)
		<< bh.loaiMatHang
		<< '|';
}
void XuatDanhSachBachHoa(BachHoa* ds, int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		Xuat1BachHoa(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeDon();
		}
	}
	XuatKeDoi();
}
void TinhTongDonGia(BachHoa* ds, int n) {
	unsigned sum = ds[0].donGia;
	for (int i = 1; i < n; i++) {
		sum += ds[i].donGia;
	}
	cout << "\ntong don gia cac mat hang la: " << sum;
	cout << endl;
}
void Hoan_Vi(BachHoa& a, BachHoa& b) {
	BachHoa temp = a;
	a = b;
	b = temp;
}
void MatHangCoGiaLonNhat(BachHoa* ds,int n) {
	int max = ds[0].donGia;
	for (int i = 1; i < n; i++) {
		if (ds[i].donGia > max) {
			max = ds[i].donGia;
		}
	}
	cout << "\n\n\t\tDanh Sach hang hoa co gia tri lon nhat\n";
	XuatTieuDe();
	/*for (int i = 0; i < n; i++) {
		if (ds[i].donGia == max) {
			Xuat1BachHoa(ds[i]);
			cout << endl;
		}
	}*/
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[i].donGia == max && ds[j].donGia == max && strlen(ds[i].tenMatHang) > strlen(ds[j].tenMatHang)) {
				Hoan_Vi(ds[i], ds[j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (ds[i].donGia == max) {
			Xuat1BachHoa(ds[i]);
			cout << endl;
		}
	}
	XuatKeDoi();
}
void SapXepTheoLoai(BachHoa* ds,int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (_strcmpi(ds[i].loaiMatHang , ds[j].loaiMatHang)>0) {
				Hoan_Vi(ds[i], ds[j]);
			}
		}
	}
	cout << "\n\n\t\tdanh sach hang hao sau khi sap xep\n";
	XuatDanhSachBachHoa(ds, n);
}
void HanSDBeHon30(BachHoa* ds,int n) {

	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (ds[i].hanSD < 30) {
			Xuat1BachHoa(ds[i]);
			cout << endl;
		}
	}
	XuatKeDoi();
}
void TimHangHoaTheoLoai(char* loai,BachHoa* ds,int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].loaiMatHang, loai) == 0) {
			Xuat1BachHoa(ds[i]);
			cout << endl;
		}
	}
	XuatKeDoi();
}
void Xoa(BachHoa* ds, int& n, int vt) {
	for (int i = vt + 1; i < n; i++) {
		ds[i - 1] = ds[i];
	}
	n--;
}
void XoaSoHangHoaBeHonSoLuong(BachHoa* ds,int& n,int x) {
	for (int i = 0; i < n; i++) {
		if (ds[i].soLuong < x) {
			Xoa(ds, n, i);
			i--;
		}
	}
}
void NhapHangHoaTuBanPhim(BachHoa& bh) {
	cout << "\nNhap ten hang hoa: ";
	cin >> bh.tenMatHang;
	cout << "\nNhap so luong: ";
	cin >> bh.soLuong;
	cout << "\nNhap don gia: ";
	cin >> bh.donGia;
	cout << "\nNhap don vi: ";
	cin >> bh.donVi;
	cout << "\nNhap han su dung: ";
	cin >> bh.hanSD;
	cout << "\nNhap loai hang hoa: ";
	cin >> bh.loaiMatHang;
}
void Them(BachHoa* ds,int& n,int vt,BachHoa bh) {
	for (int i = n - 1; i >= vt; i--) {
		ds[i + 1] = ds[i];
	}
	ds[vt] = bh;
	n++;
}
void ThemVaoViTriChoTruoc(BachHoa* ds, int& n,int vt) {
	BachHoa bh;
	NhapHangHoaTuBanPhim(bh);
	Them(ds, n, vt, bh);
}