#pragma once
struct SinhVien
{
	char maHV[10];
	char ho[10];
	char tenLot[10];
	char ten[10];
	int namSinh;
	char queQuan[20];
	double diem;
};
int TaoThongTin(SinhVien ds[], int& n) {
	ifstream in("bd.txt");
	if (!in)
		return 0;
	n = 0;
	while (!in.eof()) {
		in >> ds[n].maHV;
		in>> ds[n].ho;
		in>> ds[n].tenLot;
		in>> ds[n].ten;
		in >> ds[n].namSinh;
		in>> ds[n].queQuan;
		in >> ds[n].diem;
		n++;
	}
	in.close();
	return 1;
}
void XuatDongKe(char x) {
	cout << endl;
	cout << ':';
	
	for (int i = 0; i < 79; i++) {
		cout << x;
	}
	cout << ':';
	cout << endl;
}
void XuatTieuDe() {
	XuatDongKe('=');
	cout << setiosflags(ios::left) << ':' << setw(10) << "Ma Hoc Vien" << ':' << setw(10) << "ho" << setw(10) << "tlot" << setw(10) << "ten" << ':'
		<< setw(10) << "Nam Sinh" << ':' << setw(15) << "Que Quan" << ':' << setw(10) << "diem" << ':';
	XuatDongKe('=');
}
void XuatMotSV(SinhVien sv) {
	cout << setiosflags(ios::left) << ':' << setw(10) << sv.maHV << ':' << setw(10) << sv.ho << setw(10) << sv.tenLot << setw(10) << sv.ten << ':'
		<< setw(10) << sv.namSinh << ':' << setw(15) << sv.queQuan << ':' << setw(10) << sv.diem << ':';
}
void XuatDS(SinhVien ds[], int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		XuatMotSV(ds[i]);
		cout << endl;
	}
	XuatDongKe('=');
}
void XuatTHongTinSVLamDong(SinhVien ds[], int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].queQuan, "Lam_Dong") == 0 && ds[i].diem > 5) {
			XuatMotSV(ds[i]);
			cout << endl;
		}
	}
	XuatDongKe('=');
}
void TimKiemHoa(SinhVien ds[], int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].ten, "Hoa") == 0 && ds[i].namSinh == 1990) {
			XuatMotSV(ds[i]);
			cout << endl;
		}
	}
	XuatDongKe('=');
}
void TimKiemSV1990(SinhVien ds[], int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (ds[i].diem < 5 && ds[i].namSinh == 1990) {
			XuatMotSV(ds[i]);
			cout << endl;
		}
	}
	XuatDongKe('=');
}