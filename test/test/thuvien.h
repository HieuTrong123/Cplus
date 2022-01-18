
ifstream in;
ofstream out;
struct SinhVien
{
	char maSV[8];
	char hoTen[40];
	unsigned namSinh;
	char lop[6];
	double diem;
	char xepLoai[10];
};


int Nhap_Thong_tin_SV(SinhVien* ds, int& n) {
	in.open("Text.txt");
	char x;
	if (!in)
		return 0;
	n = 0;
	while (!in.eof()) {
		in.getline(ds[n].maSV, 8, ',');
		in.getline(ds[n].hoTen, 40, ',');
		in >> ds[n].namSinh;
		in >> x;
		in.getline(ds[n].lop, 6, ',');
		in >> ds[n].diem;
		in >> x;
		strcpy_s(ds[n].xepLoai, 10, "chua xet");
		n++;
	}
	in.close();
	return 1;
}
void XuatKeDoi() {
	out << endl;
	out << ':';
	for (int i = 0; i < 71; i++) {
		out << '=';
	}
	out << ':';
	out << endl;
}
void XuatKeDon() {
	out << endl;
	out << ':';
	for (int i = 0; i < 71; i++) {
		out << '-';
	}
	out << ':';
	out << endl;
}
void XuatTieuDe() {
	XuatKeDoi();
	out << setiosflags(ios::left)
		<< ':'
		<< setw(10)
		<< "ma SV"
		<< ':'
		<< setw(27)
		<< "ho ten"
		<< ':'
		<< setw(8)
		<< "nam sinh"
		<< ':'
		<< setw(7)
		<< "lop"
		<< ':'
		<< setw(6)
		<< "diem"
		<< ':'
		<< setw(8)
		<< "xep loai"
		<< ':';
	XuatKeDoi();

}
void Xuat_1_Sinh_Vien(SinhVien sv) {
	out << setiosflags(ios::left)
		<< ':'
		<< setw(10)
		<< sv.maSV
		<< ':'
		<< setw(27)
		<< sv.hoTen
		<< ':'
		<< setw(8)
		<< sv.namSinh
		<< ':'
		<< setw(7)
		<< sv.lop
		<< ':'
		<< setw(6)
		<< sv.diem
		<< ':'
		<< setw(8)
		<< sv.xepLoai
		<< ':';
}
void Xem_Thing_Tin_SV(SinhVien* ds, int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		Xuat_1_Sinh_Vien(ds[i]);
		out << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeDon();
		}
	}
	XuatKeDoi();
}
void XepLoaiSinhVien(SinhVien* ds, int n) {
	for (int i = 0; i < n; i++) {
		if (ds[i].diem > 9) {
			strcpy_s(ds[i].xepLoai, 10, "Xuat sac");
		}
		else if (ds[i].diem <= 9 && ds[i].diem >= 8.5) {
			strcpy_s(ds[i].xepLoai, 10, "gioi");
		}
		else if (ds[i].diem <= 8 && ds[i].diem >= 6.5) {
			strcpy_s(ds[i].xepLoai, 10, "kha");
		}
		else if (ds[i].diem <= 6 && ds[i].diem >= 5) {
			strcpy_s(ds[i].xepLoai, 10, "T.Binh");
		}
		else if (ds[i].diem <= 5 && ds[i].diem >= 3.5) {
			strcpy_s(ds[i].xepLoai, 10, "yeu");
		}
		else {
			strcpy_s(ds[i].xepLoai, 10, "kem");
		}
	}
	out << "\n\n\t\t======DANH SACh Sinh VIEN SAU KHI XEP LOAI LA======\n";
	Xem_Thing_Tin_SV(ds, n);
}
void Nhap_1_SV_Tu_Ban_Phim(SinhVien& sv) {
	cout << "\nNhap ma so SV: ";
	cin.getline(sv.maSV, 8);
	cout << "\nNhap ho ten sinh vien: ";
	cin.getline(sv.hoTen, 40);
	cout << "\nNhap nam sinh : ";
	cin >> sv.namSinh;
	cin.ignore();
	cout << "\nNhap lop : ";
	cin.getline(sv.lop, 6);
	cout << "\nNhap diem trung binh: ";
	cin >> sv.diem;
	if (sv.diem > 9) {
		strcpy_s(sv.xepLoai, 10, "Xuat sac");
	}
	else if (sv.diem <= 9 && sv.diem >= 8.5) {
		strcpy_s(sv.xepLoai, 10, "gioi");
	}
	else if (sv.diem <= 8 && sv.diem >= 6.5) {
		strcpy_s(sv.xepLoai, 10, "kha");
	}
	else if (sv.diem <= 6 && sv.diem >= 5) {
		strcpy_s(sv.xepLoai, 10, "T.Binh");
	}
	else if (sv.diem <= 5 && sv.diem >= 3.5) {
		strcpy_s(sv.xepLoai, 10, "yeu");
	}
	else {
		strcpy_s(sv.xepLoai, 10, "kem");
	}
}
void ThemSinhVien(SinhVien ds[], int& n, int vt) {
	SinhVien sv;
	Nhap_1_SV_Tu_Ban_Phim(sv);
	for (int i = n - 1; i >= vt; i--) {
		ds[i + 1] = ds[i];
	}
	ds[vt] = sv;
	n++;
	out << "\nDANH SACH SINH VIEN SAU KHI THEM SINH VIEN TAI VI TRI " << vt << " LA: ";
	Xem_Thing_Tin_SV(ds, n);
}
void Xoa_Sinh_Vien(SinhVien* ds, int& n, int vt) {
	for (int i = vt + 1; i < n; i++) {
		ds[i - 1] = ds[i];
	}
	n--;
	out << "\nDANH SACH SINH VIEN SAU KHI XOA SINH VIEN TAI VI TRI " << vt << " LA: ";
	Xem_Thing_Tin_SV(ds, n);
}
void TimSV(SinhVien* ds, int n) {
	out << "\nSinh vien co diem trung binh cao nhat la : ";
	XuatTieuDe();
	double max = ds[0].diem;
	for (int i = 1; i < n; i++) {
		if (ds[i].diem > max) {
			max = ds[i].diem;
		}
	}
	for (int i = 0; i < n; i++) {
		if (ds[i].diem == max) {
			Xuat_1_Sinh_Vien(ds[i]);
		}
	}
	XuatKeDoi();
}
void Hoan_Vi(SinhVien& a, SinhVien& b) {
	SinhVien temp = a;
	a = b;
	b = temp;
}
void SinhVienLop(SinhVien* ds, int n, const char* lop) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (_strcmpi(ds[i].lop, lop) == 0 && _strcmpi(ds[j].lop, lop) == 0) {
				if (_strcmpi(ds[i].xepLoai, ds[j].xepLoai) > 0) {
					Hoan_Vi(ds[i], ds[j]);
				}
			}
		}

	}
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].lop, lop) == 0) {
			Xuat_1_Sinh_Vien(ds[i]);
			out << endl;
		}
	}
	XuatKeDoi();
}
void ChinhSuaSV(SinhVien* ds, int n, char* hoTen) {
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].hoTen, hoTen) == 0) {
			Nhap_1_SV_Tu_Ban_Phim(ds[i]);
		}
	}
	out << "\n\n\t\tdanh sach sinh vien sau khi sua la: \n";
	Xem_Thing_Tin_SV(ds, n);
}
void TestSapXep(SinhVien* ds, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			if (_strcmpi(ds[i].xepLoai, ds[j].xepLoai) > 0) {
				Hoan_Vi(ds[i], ds[j]);
			}

		}

	}
	Xem_Thing_Tin_SV(ds, n);
}