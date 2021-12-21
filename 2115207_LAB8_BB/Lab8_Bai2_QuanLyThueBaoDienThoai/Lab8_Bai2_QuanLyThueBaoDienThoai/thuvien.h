#define MAX 100
struct NgayHopDong {
	unsigned ngay;
	unsigned thang;
	unsigned nam;
};
struct ThueBao {
	unsigned maSoThueBao;
	char hoTen[51];
	char diaChi[101];
	char soDienThoai[15];
	NgayHopDong ngayHopDong;
};


void Xuat1ThueBao(ThueBao tb);
void Tim_So_Khi_Biet_Ten(ThueBao ds[], int n, char hoTen[51]);
void Tim_Thong_Tin_Khi_Biet_SDT(ThueBao ds[], int n, char soDienThoai[15]);
void Thue_Bao_Cung_Dia_Chi(ThueBao ds[], int n, char diaChi[101]);
void XuatDanhSachThueBao(ThueBao ds[], int n);
void Hoan_Vi(ThueBao& a, ThueBao& b);
void Sap_Xep_Tang_Theo_Ma_Vung(ThueBao ds[], int n);
void ChenThueBao(unsigned maSoThueBao, const char hoTen[], const char diaChi[], const char soDienThoai[],
	unsigned ngay, unsigned thang, unsigned nam, ThueBao tb[MAX], int& n);
void TaoDanhSachThueBao(ThueBao tb[MAX], int& n);
void XuatKeNgangDoi();
void XuatKeNgangDon();
void XuatTheoDinhDang();
void Xuat1ThueBao(ThueBao tb);
void ChenThueBao(unsigned maSoThueBao, const char hoTen[], const char diaChi[], const char soDienThoai[],
	unsigned ngay, unsigned thang, unsigned nam, ThueBao tb[MAX], int& n) {
	if (n < MAX) {
		tb[n].maSoThueBao = maSoThueBao;
		strcpy_s(tb[n].hoTen, 51, hoTen);
		strcpy_s(tb[n].diaChi, 101, diaChi);
		strcpy_s(tb[n].soDienThoai, 12, soDienThoai);
		tb[n].ngayHopDong.ngay = ngay;
		tb[n].ngayHopDong.thang = thang;
		tb[n].ngayHopDong.nam = nam;

		n++;
	}
}
void TaoDanhSachThueBao(ThueBao tb[MAX], int& n) {
	n = 0;
	ChenThueBao(100579, "Nguyen Quoc Binh", "Da Lat", "051.3432157", 1, 3, 2007, tb, n);
	ChenThueBao(100821, "Tran Dinh Quy", "Da Lat", "051.2650120", 1, 5, 2010, tb, n);
	ChenThueBao(100720, "Phan Duc Hai", "Di Linh", "045.0364722", 1, 1, 2006, tb, n);
	ChenThueBao(100521, "Nguyen Thi Dung", "Don Duong", "049.2501213", 1, 5, 2004, tb, n);
	ChenThueBao(100301, "Le Minh Duy", "Da Lat", "051.4210306", 1, 3, 2003, tb, n);
	ChenThueBao(100345, "Pham Cao Thanh", "Di Linh", "045.0154573", 1, 5, 2014, tb, n);
	ChenThueBao(100301, "Nguen Minh Quang", "Don Duong", "049.4210306", 1, 1, 2006, tb, n);
	ChenThueBao(100345, "Pham Duc Duy", "Duc Trong", "055.0154573", 1, 10, 2015, tb, n);

}

void XuatKeNgangDoi()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 95; i++)
		cout << '=';
	cout << ':';
}
void XuatKeNgangDon()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 95; i++)
		cout << '-';
	cout << ':';
}
void XuatTheoDinhDang() {
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(10)

		<< "Ma So"
		<< ':'
		<< setw(25)

		<< "Ho ten"
		<< ':'
		<< setw(21)

		<< "Dia chi"
		<< ':'
		<< setw(27)

		<< "So DT"
		<< ':'
		<< setw(8)

		<< "Ngay HD"
		<< ':';
	XuatKeNgangDoi();
	cout << endl;
}

void Xuat1ThueBao(ThueBao tb) {

	cout << setiosflags(ios::left)
		<< ':'
		<< setw(10)

		<< tb.maSoThueBao
		<< ':'
		<< setw(25)

		<< tb.hoTen
		<< ':'
		<< setw(21)

		<< tb.diaChi
		<< ':'
		<< setw(27)

		<< tb.soDienThoai
		<< ':'
		<< setw(1)
		<< tb.ngayHopDong.ngay
		<< "/"
		<< setw(1)
		<< tb.ngayHopDong.thang
		<< "/"
		<< setw(1)
		<< tb.ngayHopDong.nam
		<< ':';
}

void XuatDanhSachThueBao(ThueBao ds[], int n) {
	XuatTheoDinhDang();
	cout << endl;
	for (int i = 0; i < n; i++) {
		Xuat1ThueBao(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatKeNgangDon();
		}
		cout << endl;
	}
	XuatKeNgangDoi();
	cout << endl;
}
void Tim_So_Khi_Biet_Ten(ThueBao ds[], int n, char hoTen[51]) {
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].hoTen, hoTen) == 0) {
			cout << "\nSp dien thoai la : " << ds[i].soDienThoai;
		}
	}
}
void Tim_Thong_Tin_Khi_Biet_SDT(ThueBao ds[], int n, char soDienThoai[15]) {
	for (int i = 0; i < n; i++) {
		if (strcmp(ds[i].soDienThoai, soDienThoai) == 0) {
			Xuat1ThueBao(ds[i]);
			cout << endl;
		}
	}
}
void Thue_Bao_Cung_Dia_Chi(ThueBao ds[], int n) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(ds[i].diaChi, ds[j].diaChi) > 0) {
				Hoan_Vi(ds[i], ds[j]);
			}
		}
	}
}
void Hoan_Vi(ThueBao& a, ThueBao& b) {
	ThueBao tam = a;
	a = b;
	b = tam;
}
void Sap_Xep_Tang_Theo_Ma_Vung(ThueBao ds[], int n) {
	char maVung1[6];
	char maVung2[6];
	int m1, m2;
	int t1, t2;
	for (int l = 0; l < 2; l++) {
		for (int i = 0; i < n; i++) {
			m1 = 0;
			t1 = 0;
			while (ds[i].soDienThoai[t1] != '.') {
				maVung1[m1++] = ds[i].soDienThoai[t1];
				t1++;
				maVung1[m1] = NULL;
			}
			for (int j = i + 1; j < n; j++) {
				m2 = 0;
				t2 = 0;
				while (ds[j].soDienThoai[t2] != '.') {
					maVung2[m2++] = ds[j].soDienThoai[t2];
					t2++;
					maVung2[m2] = NULL;
				}

				if (strcmp(maVung1, maVung2) > 0) {
					Hoan_Vi(ds[i], ds[j]);

				}


			}

		}
	}

}