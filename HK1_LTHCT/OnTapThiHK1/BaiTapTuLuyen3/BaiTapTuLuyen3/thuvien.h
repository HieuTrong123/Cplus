ifstream in;
ofstream out;
struct SinhVien {
	unsigned maSV;
	char hoTen[40];
	unsigned namSinh;
	char lop[7];
	float diem;
	char xepLoai[10];
};

int DocFile(vector<SinhVien>& ds) {
	in.open("Text.txt");
	if (!in) {
		return 0;
	}
	while (!in.eof()) {
		SinhVien sv;
		in >> sv.maSV;
		in.seekg(1, 1);
		in.getline(sv.hoTen, 40, ',');
		in >> sv.namSinh;
		in.seekg(1, 1);
		in.getline(sv.lop, 7, ',');
		in >> sv.diem;
		ds.push_back(sv);
	}

	in.close();
	return 1;
}
void XuatKeDon() {
	out << endl;
	out << ':';
	for (int i = 0; i < 90; i++) {
		out << '-';
	}
	out << ':';
	out << endl;
}
void XuatKeDoi() {
	out << endl;
	out << ':';
	for (int i = 0; i < 90; i++) {
		out << '=';
	}
	out << ':';
	out << endl;
}
void XuatTieuDe() {
	XuatKeDoi();
	out << setiosflags(ios::left)
		<< ':'
		<< setw(10)
		<< "maSV"
		<< ':'
		<< setw(40)
		<< "ho va ten"
		<< ':'
		<< setw(10)
		<< "nam sinh"
		<< ':'
		<< setw(10)
		<< "lop"
		<< ':'
		<< setw(5)
		<< "diem"
		<< ':'
		<< setw(10)
		<< "xep loai"
		<< ':';
	XuatKeDoi();
}
void Xuat1SinhVien(SinhVien sv) {
	out << setiosflags(ios::left)
		<< ':'
		<< setw(10)
		<< sv.maSV
		<< ':'
		<< setw(40)
		<< sv.hoTen
		<< ':'
		<< setw(10)
		<< sv.namSinh
		<< ':'
		<< setw(10)
		<< sv.lop
		<< ':'
		<< setw(5)
		<< sv.diem
		<< ':';
}
int XuatDanhSachSinhVien(vector<SinhVien> ds) {
	out.open("Text1.txt");
	if (!out) {
		return 0;
	}
	XuatTieuDe();
	for (int i = 0; i < ds.size(); i++) {
		Xuat1SinhVien(ds[i]);
		out << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeDon();
		}
	}
	XuatKeDoi();
	out.close();
	return 1;
}
void Hoan_Vi(SinhVien& a, SinhVien& b) {
	SinhVien temp = a;
	a = b;
	b = temp;

}
void SapXepTheoLop(vector<SinhVien> ds) {
	for (int i = 0; i < ds.size() - 1; i++) {
		for (int j = i + 1; j < ds.size(); j++) {
			if (_strcmpi(ds[i].lop, ds[j].lop) > 0) {
				Hoan_Vi(ds[i], ds[j]);
			}
		}
	}
	XuatDanhSachSinhVien(ds);

}
void XepLoaiSinhVien(vector<SinhVien> &ds) {
	out.open("Text1.txt");
	for (int i = 0; i < ds.size(); i++) {
		if (ds[i].diem >= 9.5) {
			strcpy_s(ds[i].xepLoai, 10, "xuat sac");
		}
		else if (ds[i].diem < 9.5 && ds[i].diem >= 8.5)
			strcpy_s(ds[i].xepLoai, 10, "gioi");
		else if (ds[i].diem < 8.5 && ds[i].diem >= 7.5)
			strcpy_s(ds[i].xepLoai, 10, "kha");
		else if (ds[i].diem < 7.5 && ds[i].diem >= 4.5)
			strcpy_s(ds[i].xepLoai, 10, "TB");
		else if (ds[i].diem < 4.5 && ds[i].diem >= 3.5)
			strcpy_s(ds[i].xepLoai, 10, "yeu");
		else if (ds[i].diem < 3, 5)
			strcpy_s(ds[i].xepLoai, 10, "kem");
	}
	XuatTieuDe();
	for (int i = 0; i < ds.size(); i++) {
		out << setiosflags(ios::left)
			<< ':'
			<< setw(10)
			<< ds[i].maSV
			<< ':'
			<< setw(40)
			<< ds[i].hoTen
			<< ':'
			<< setw(10)
			<< ds[i].namSinh
			<< ':'
			<< setw(10)
			<< ds[i].lop
			<< ':'
			<< setw(5)
			<< ds[i].diem
			<< ':'
			<< setw(10)
			<< ds[i].xepLoai
			<< ':';
		out << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeDon();
		}
	}
	XuatKeDoi();
	out.close();
}
void TimKiemSinhVien(vector<SinhVien> ds, const char* lop) {
	float max = 0;
	for (int i = 0; i < ds.size(); i++) {
		if (_strcmpi(ds[i].lop, lop) == 0) {
			if (ds[i].diem > max) {
				max = ds[i].diem;
			}
		}

	}

	out << "\n\n\t\t====== lop " << lop << "========\n";
	XuatTieuDe();
	for (int i = 0; i < ds.size(); i++) {
		if (ds[i].diem == max && _strcmpi(ds[i].lop, lop) == 0) {
			Xuat1SinhVien(ds[i]);
			out << endl;
		}

	}
	XuatKeDoi();
}
void XuatTheoXepLoai(vector<SinhVien> ds) {
	out.open("Text1.txt");
	for (int i = 0; i < ds.size()-1; i++) {
		for (int j = i + 1; j < ds.size(); j++) {
			if (_strcmpi(ds[i].xepLoai, ds[j].xepLoai) > 0) {
				Hoan_Vi(ds[i], ds[j]);
			}
		}
	}
	XuatTieuDe();
	for (int i = 0; i < ds.size(); i++) {
		out << setiosflags(ios::left)
			<< ':'
			<< setw(10)
			<< ds[i].maSV
			<< ':'
			<< setw(40)
			<< ds[i].hoTen
			<< ':'
			<< setw(10)
			<< ds[i].namSinh
			<< ':'
			<< setw(10)
			<< ds[i].lop
			<< ':'
			<< setw(5)
			<< ds[i].diem
			<< ':'
			<< setw(10)
			<< ds[i].xepLoai
			<< ':';
		out << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeDon();
		}
	}
	XuatKeDoi();
	out.close();
}