#pragma once
struct HocVien{
	char maHocVien[8];
	char ho[7];
	char tenLot[6];
	char ten[5];
	char lop[6];
	unsigned namSinh;
	double diem;
	unsigned tinChi;
};
int TaoDanhSach(HocVien* ds, int& n) {
	ifstream in("HocVien.txt");
	if (!in)
		return 0;
	n = 0;
	while (!in.eof()) {
		in >> ds[n].maHocVien;
		in >> ds[n].ho;
		in >> ds[n].tenLot;
		in >> ds[n].ten;
		in >> ds[n].lop;
		in >> ds[n].namSinh;
		in >> ds[n].diem;
		in >> ds[n].tinChi;
		n++;
	}
	in.close();
	return 1;
}
void XuatDongKe(char x) {
	for (int i = 0; i < 75; i++) {
		cout << x;
	}
}
void XuatTieuDe() {
	cout << endl;	
	XuatDongKe('=');
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(15)
		<< "ma hoc vien"
		<< ':'
		<< setw(8)
		<< "Ho"
		<< setw(8)
		<< "ten Lot"
		<< setw(8)
		<< "ten"
		<< ':'
		<<setw(6)
		<<"lop"
		<<':'
		<< setw(10)
		<< "nam sinh"
		<< ':'
		<< setw(6)
		<< "diem"
		<< ':'
		<< setw(7)
		<< "tin chi"
		<< ':';

	cout << endl;
	XuatDongKe('=');
	cout << endl;

}
void XuatMotHocVien(HocVien sv) {
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(15)
		<< sv.maHocVien
		<< ':'
		<< setw(8)
		<< sv.ho
		<< setw(8)
		<< sv.tenLot
		<< setw(8)
		<< sv.ten
		<< ':'
		<< setw(6)
		<< sv.lop
		<< ':'
		<< setw(10)
		<< sv.namSinh
		<< ':'
		<< setw(6)
		<< sv.diem
		<< ':'
		<< setw(7)
		<< sv.tinChi
		<< ':';
}
void XuatDanhSach(HocVien* ds,int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		XuatMotHocVien(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
			cout << endl;
		}
	}
	XuatDongKe('=');
}
void TimKiemHocVienTheoLop(HocVien* ds,int n,const char lop[6]) {
	for (int i = 0; i < n; i++) {
		if (strcmp(ds[i].lop, lop) == 0) {
			XuatMotHocVien(ds[i]);
			cout << endl;
			
		}
	}
}
void TimHoa(HocVien* ds, int n) {
	for (int i = 0; i < n; i++) {
		if (strcmp(ds[i].ten, "Hoa") == 0&&ds[i].diem>=6) {
			XuatMotHocVien(ds[i]);
			cout << endl;
		}
	}
}
void LocTinChi(HocVien* ds, int n) {
	for (int i = 0; i < n; i++) {
		if (ds[i].tinChi <= 35) {
			XuatMotHocVien(ds[i]);
			cout << endl;
		}
	}
}