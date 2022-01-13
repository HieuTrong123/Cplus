


struct HoTen {
	char ho[10];
	char tLot[10];
	char ten[10];
};
struct NTNSinh {
	int ngay;
	int thang;
	int nam;

};
struct NhanVien {
	int maNV;
	HoTen ht;
	NTNSinh ntn;
	char diaChi[10];
	double luong;
};
void NhapFileNV(const char* filename, NhanVien *ds, int& n);
void XuatNV(NhanVien *ds, int n);
void NhapVaoMang1ChieuText1(const char* filename, int a[], int& n);
void NhapVaoMang1ChieuText2(const char* filename, int a[], int& n);
void NhapFileNV(const char* filename, NhanVien *ds, int& n) {
	ifstream in(filename);
	if (!in) {
		cout << "\nkhong nhap duoc tu file!";
		return;
	}
	n = 0;
	while (!in.eof()) {
		in >> ds[n].maNV;
		in >> ds[n].ht.ho;
		in >> ds[n].ht.tLot;
		in >> ds[n].ht.ten;
		in >> ds[n].ntn.ngay;
		in >> ds[n].ntn.thang;
		in >> ds[n].ntn.nam;
		in >> ds[n].diaChi;
		in >> ds[n].luong;
		n++;
	}
	in.close();
}
void XuatNV(NhanVien *ds, int n) {
	cout << endl;
	for (int i = 0; i < 103; i++) {
		cout << '=';
	}
	cout << endl;
	cout << setiosflags(ios::left);
	cout << setw(20) << "MS"
		<< setw(9) << "ho"
		<< setw(7) << "tLot"
		<< setw(7) << "ten"
		<< setw(20) << "NTN Sinh"
		<< setw(20) << "Dia chi"
		<< setw(20) << "Luong";
	cout << endl;
	for (int i = 0; i < 103; i++) {
		cout << '=';
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setiosflags(ios::left) 
			<< setw(20) << ds[i].maNV
			<< setw(9) << ds[i].ht.ho
			<< setw(7) << ds[i].ht.tLot
			<< setw(7) << ds[i].ht.ten
			<< setw(2) << ds[i].ntn.ngay << '/'
			<< setw(2) << ds[i].ntn.thang << '/'
			<< setw(14) << ds[i].ntn.nam
			<< setw(20) << ds[i].diaChi
			<< setiosflags(ios::fixed) << setprecision(2) << setw(20) << ds[i].luong;
		cout << endl;
	}
	for (int i = 0; i < 103; i++) {
		cout << '=';
	}
	cout << endl;
}
void NhapVaoMang1ChieuText1(const char* filename,int a[],int &n) {
	ifstream in(filename);
	if (!in)
		return;
	in >> n;
	for (int i = 0; i < n; i++) {
		in >> a[i];
	}
	in.close();
}
void NhapVaoMang1ChieuText2(const char* filename, int a[], int& n) {
	ifstream in(filename);
	if (!in)
		return;
	n = 0;
	while (!in.eof()) {
		in >> a[n];
		n++;
	}
	in.close();
}
