
struct NgayHopDong {
	int ngay;
	int thang;
	int nam;
};
struct ThueBao {
	int maSoThueBao;
	char hoTen[51];
	char diaChi[101];
	char soDienThoai[15];
	NgayHopDong ngayHopDong;
};
void NhapThongTin1ThueBao(ThueBao& tb);
void NhapDanhSachThueBao(ThueBao ds[], int& n);
void Xuat1ThueBao(ThueBao tb);
void Tim_So_Khi_Biet_Ten(ThueBao ds[], int n, char hoTen[51]);
void Tim_Thong_Tin_Khi_Biet_SDT(ThueBao ds[], int n, char soDienThoai[15]);
void Thue_Bao_Cung_Dia_Chi(ThueBao ds[], int n, char diaChi[101]);
void XuatDanhSachThueBao(ThueBao ds[], int n);
void Hoan_Vi(ThueBao& a, ThueBao& b);
void Sap_Xep_Tang_Theo_Ma_Vung(ThueBao ds[], int n);
void NhapThongTin1ThueBao(ThueBao &tb) {
	cout << "\nNhap ma so thue bao : ";
	cin >> tb.maSoThueBao;
	cin.ignore();
	cout << "Nhap ho ten : ";
	cin.ignore();
	gets_s(tb.hoTen, 51);
	cout << "\nNhap dia chi : ";
	cin.ignore();
	gets_s(tb.diaChi,101);
	cout << "\nNhap so dien thoai bat dau tu so 0 : ";
	cin.ignore();
	gets_s(tb.soDienThoai,15);
	cout << "\nNhap ngay hop dong : ";
	do {
		cout << "\nNgay : ";
		cin >> tb.ngayHopDong.ngay;
		cout << "\nthang : ";
		cin >> tb.ngayHopDong.thang;
		cout << "\nnam : ";
		cin >> tb.ngayHopDong.nam;
		if (tb.ngayHopDong.ngay > 40 || tb.ngayHopDong.thang > 12) {
			cout << "\nNgay thang vua nhap khong hop le hay nhap lai ";
		}
	} while (tb.ngayHopDong.ngay > 40 || tb.ngayHopDong.thang > 12);
}
void NhapDanhSachThueBao(ThueBao ds[],int &n) {
	cout << "\nnhap so thue bao : ";
	cin >> n;
	for (int i = 0; i < n;i++) {
		cout << "\nnhap thue bao thu " << i + 1;
		NhapThongTin1ThueBao(ds[i]);
	}
}
void Xuat1ThueBao(ThueBao tb) {
	cout << "\nma so thue bao la : " << tb.maSoThueBao;
	cout << "\nho ten la : " << tb.hoTen;
	cout << "\ndia chi la : " << tb.diaChi;
	cout << "\nso dien thoai la : " << tb.soDienThoai;
	cout << "\nNgay hop dong la ngay " << tb.ngayHopDong.ngay << " thang " << tb.ngayHopDong.thang << " nam "
		<< tb.ngayHopDong.nam;
}
void XuatDanhSachThueBao(ThueBao ds[],int n) {
	for (int i = 0; i < n;i++) {
		cout << "\nthue bao thu " << i + 1;
		Xuat1ThueBao(ds[i]);
		cout << endl;
	}
}
void Tim_So_Khi_Biet_Ten(ThueBao ds[],int n,char hoTen[51]) {
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].hoTen, hoTen)==0) {
			cout <<"\nSp dien thoai la : " << ds[i].soDienThoai;
		}
	}
}
void Tim_Thong_Tin_Khi_Biet_SDT(ThueBao ds[],int n,char soDienThoai[15]) {
	for (int i = 0; i < n;i++) {
		if (strcmp(ds[i].soDienThoai, soDienThoai) == 0) {
			Xuat1ThueBao(ds[i]);
			cout << endl;
		}
	}
}
void Thue_Bao_Cung_Dia_Chi(ThueBao ds[] ,int n,char diaChi[101]) {
	
	for (int i = 0; i < n;i++) {
		if (_strcmpi(ds[i].diaChi, diaChi) == 0) {
			Xuat1ThueBao(ds[i]);
			cout << endl;
		}
	}
}
void Hoan_Vi(ThueBao &a,ThueBao &b) {
	ThueBao tam = a;
	a = b;
	b = tam;
}
void Sap_Xep_Tang_Theo_Ma_Vung(ThueBao ds[],int n) {
	char maVung1[5];
	char maVung2[5];
	int m1 = 0, m2 = 0;
	int t1 = 0,
		t2=0;
	for (int i = 0; i < n; i++) {
		while (ds[i].soDienThoai[t1] != '.') {
			maVung1[m1++] = ds[i].soDienThoai[t1];
			t1++;
			maVung1[m1] = NULL;
		}
		for (int j = i + 1; j < n;j++) {
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