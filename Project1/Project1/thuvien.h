#pragma once
#define MAX 100
#define TAB '\t'

struct HoTen {
	char ho[16];
	char tenLot[16];;
	char ten[16];
};

struct SinhVien {
	char maso[8];
	HoTen hoVaTen;
	char lop[12];
	float diem;
};

int Doc_File_DuLieu(char* filename, SinhVien a[MAX], int& n);
void XuatTieuDe();
void XuatKeNgangDoi();
void XuatKeNgangDon();
void Xuat_1_SinhVien(SinhVien a);
void XuatDanhSach(SinhVien a[MAX], int n);

int Doc_File_DuLieu(char* filename, SinhVien a[MAX], int& n) {
	ifstream in("bang diem.txt");
	if (!in) {
		return 0;
	}
	n = 0;
	while (!in.eof()) {
		in >> a[n].maso;
		in >> a[n].diem;
		in >> a[n].hoVaTen.ho;
		in >> a[n].hoVaTen.tenLot;
		in >> a[n].hoVaTen.ten;
		in >> a[n].lop;
		in >> a[n].diem;
		n++;
	}
	in.close();
	return 1;
}

void XuatKeNgangDoi() {
	for (int i = 0; i < 76; i++) {
		cout << "=";
	}
}

void XuatKeNgangDon() {
	for (int i = 0; i < 76; i++) {
		cout << "-";
	}
}
void XuatTieuDe() {
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left);
	cout << ':'
		<< setw(16) << "Ma so" << ':'
		<< setw(8) << "Ho" << ':'
		<< setw(8) << "Ten Lot" << ':'
		<< setw(8) << "Ten" << ':'
		<< setw(8) << "Lop" << ':'
		<< setw(6) << "Diem" << ':';
	cout << endl;
	XuatKeNgangDoi();
	cout << endl;
}

void Xuat_1_SinhVien(SinhVien a) {
	cout << ':'
		<< setw(16) << a.maso << ':'
		<< setw(8) << a.hoVaTen.ho << ':'
		<< setw(8) << a.hoVaTen.tenLot << ':'
		<< setw(8) << a.hoVaTen.ho << ':'
		<< setw(8) << a.lop << ':'
		<< setw(6) << a.diem << ':';
}

void XuatDanhSach(SinhVien a[MAX], int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		Xuat_1_SinhVien(a[i]);
		cout << endl;
	}
}

void XuatSinhVien_Ma(SinhVien a[MAX], int n, char maso[8]) {
	int i;
	for (i = 0; i < n; i++) {
		if (strcmp(a[i].maso, maso) == 0) {
			cout << "\nThong tin chi tiet sinh vien co ma so " << maso << ":\n";
			Xuat_1_SinhVien(a[i]);
		}
		if (i == n) {
			cout << "\nKhong co sinh vien nao trong danh sach co ma so " << maso;
		}
	}
}

void XuatCacSinhVienTenHoa(SinhVien a[MAX], int n) {
	int i, count = 0;
	for (i = 0; i < n; i++) {
		if (strcmp(a[i].hoVaTen.ten, "Hoa") == 0 && strcmp(a[i].lop, "CTK19") == 0) {
			count++;
		}
	}
	cout << "\nCo " << count << " sinh vien ten Hoa thuoc lop CTK19 va thong tin chi tiet:\n\n";
	XuatTieuDe();
	for (i = 0; i < n; i++) {
		if (strcmp(a[i].hoVaTen.ten, "Hoa") == 0 && strcmp(a[i].lop, "CTK19") == 0) {
			cout << endl;
			Xuat_1_SinhVien(a[i]);
		}
	}
}

void XuatCacSinhVien_DiemThapNhat(SinhVien a[MAX], int n) {
	int i, count = 0, min = a[0].diem;
	for (i = 0; i < n; i++) {
		if (a[i].diem < min) {
			min = a[i].diem;
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i].diem == min) {
			count++;
		}
	}
	cout << "\nCo " << count << " sinh vien co diem thap nhat va thong tin chi tiet:\n\n";
	XuatTieuDe();
	for (i = 0; i < n; i++) {
		if (a[i].diem == min) {
			cout << endl;
			Xuat_1_SinhVien(a[i]);
		}
	}
}
