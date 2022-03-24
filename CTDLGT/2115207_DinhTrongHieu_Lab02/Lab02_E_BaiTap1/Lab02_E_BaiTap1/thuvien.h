#pragma once
#define MAX 100
struct NhanVien {
	char maNV[8];
	char ho[11];
	char tLot[11];
	char ten[11];
	string ngaySinh;
	char diaChi[16];
	double luong;

};
int Tao_DSNV(char filename[], NhanVien ds[], int& n) {
	ifstream in(filename);
	if (!in)
		return -1;
	n = 0;
	
	while (!in.eof()) {
		
		in >> ds[n].maNV;
		
		in >> ds[n].ho;
		
		in >> ds[n].tLot;
		
		in >> ds[n].ten;
		
		
		getline(in,ds[n].ngaySinh,',');
		
		in >> ds[n].diaChi;
		
		in >> ds[n].luong;
		n++;
	}
	in.close();
	return 1;

}
void XuatDongKe(char x) {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 115; i++) {
		cout << x;
	}
	cout << ':';
	cout << endl;
}
void XuatTieuDe() {
	XuatDongKe('=');
	cout << setiosflags(ios::left) << ':' << setw(15) << "ma NV" << ':' << setw(15) << "ho" << setw(15) << "tLot" << setw(15)
		<< "ten" << ':' << setw(20) << "NTN Sinh"
		<< ':' << setw(15) << "dia chi" << ':' << setw(15) << "luong" << ':';
	XuatDongKe('=');
}
void Xuat_NV(NhanVien nv) {
	cout << setiosflags(ios::left) << ':' << setw(15) << nv.maNV 
		<< ':' << setw(15) << nv.ho << setw(15) << nv.tLot << setw(15) 
		<< nv.ten << ':' << setw(20) << nv.ngaySinh
		<< ':' << setw(15) << nv.diaChi << ':' << setw(15) << nv.luong << ':';
}
void XuatDSNV(NhanVien ds[], int n) {
	
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		Xuat_NV(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
	XuatDongKe('=');
}
void TimTheoDiaChiTen(NhanVien ds[], int n, char diaChi[11], char ten[11]) {
	int kq = -1;
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].diaChi, diaChi) == 0 && _strcmpi(ds[i].ten, ten)) {
			kq = 1;
			break;
		}

	}
	if (kq == -1) {
		cout << "\nkhong ton tai nhan vien co ten " << ten << "va dia chi " << diaChi;
	}
	else {
		cout << "\ndanh sach nhan vien co dia chi " << diaChi << " va ten " << ten << " : ";
		XuatTieuDe();
		for (int i = 0; i < n; i++) {
			if (_strcmpi(ds[i].diaChi, diaChi) == 0 && _strcmpi(ds[i].ten, ten) == 0) {
				Xuat_NV(ds[i]);
				cout << endl;
				if ((i + 1) % 5 == 0) {
					XuatDongKe('-');
				}
			}

		}
		XuatDongKe('=');
	}
}
void TimTheoHoTen(NhanVien ds[],int n,char ho[11],char ten[11]) {
	int kq = -1;
	for (int i = 0; i < n; i++) {
		if (_strcmpi(ds[i].ho, ho) == 0 && _strcmpi(ds[i].ten, ten)) {
			kq = 1;
			break;
		}
			
	}
	if (kq == -1) {
		cout << "\nkhong ton tai nhan vien co ten " << ten << "va ho " << ho;
	}
	else {
		cout << "\ndanh sach nhan vien co ho " << ho << " va ten " << ten << " : ";
		XuatTieuDe();
		for (int i = 0; i < n; i++) {
			if (_strcmpi(ds[i].ho, ho) == 0 && _strcmpi(ds[i].ten, ten)==0) {
				Xuat_NV(ds[i]);
				cout << endl;
				if ((i + 1) % 5 == 0) {
					XuatDongKe('-');
				}
			}

		}
		XuatDongKe('=');
	}
}
int DoDaiChuoi(char NTNSinh[10]) {
	for (int i = 0;; i++) {
		if (NTNSinh[i] == NULL) {
			return i;
		}
	}

}

void TimKiemNamSinh(NhanVien ds[], int n,char nam[]) {
	int kq = -1;
	
	for (int i = 0; i < n; i++) {
		
		char a[10];
		int m = 0;
		int lenght = ds[i].ngaySinh.length();
		for (int k = lenght - 1; k >= 0; k--) {
			if (ds[i].ngaySinh[k] != NULL) {
				if (ds[i].ngaySinh[k] == '/') {
					break;
				}
				a[m] = ds[i].ngaySinh[k];
				m++;
				a[m] = NULL;
			}
		}
		int l = DoDaiChuoi(a);
		for (int z = 0; z < l / 2; z++) {
			if (a[z] != NULL && a[l - z - 1] != NULL) {

				char temp = a[z];

				a[z] = a[l - z - 1];
				a[l - z - 1] = temp;
			}

		}
		if (_strcmpi(a, nam) == 0) {
			kq = 1;
			break;
		}

	}
	if (kq == -1) {
		cout << "\nkhong ton tai nhan vien co nam sinh " << nam;
	}
	else {
		cout << "\ndanh sach nhan vien co co nam sinh " << nam;
		XuatTieuDe();
		for (int i = 0; i < n; i++) {
			char a[10];
			int m = 0;
			int lenght = ds[i].ngaySinh.length();
			for (int k = lenght - 1; k >= 0; k--) {
				if (ds[i].ngaySinh[k] != NULL) {
					if (ds[i].ngaySinh[k] == '/') {
						break;
					}
					a[m] = ds[i].ngaySinh[k];
					m++;
					a[m] = NULL;
				}
			}
			int l = DoDaiChuoi(a);
			for (int z = 0; z < l / 2; z++) {
				if (a[z] != NULL && a[l - z - 1] != NULL) {

					char temp = a[z];

					a[z] = a[l - z - 1];
					a[l - z - 1] = temp;
				}

			}
			if (_strcmpi(a, nam) == 0) {
				Xuat_NV(ds[i]);
				cout << endl;
				if ((i + 1) % 5 == 0) {
					XuatDongKe('-');
				}
			}

		}
		XuatDongKe('=');
	}
}
void TimKiemNamSinhLuong(NhanVien ds[], int n, char nam[],double luong) {
	int kq = -1;
	for (int i = 0; i < n; i++) {
		char a[10];
		int m = 0;
		int lenght = ds[i].ngaySinh.length();
		for (int k = lenght - 1; k >= 0; k--) {
			if (ds[i].ngaySinh[k] != NULL) {
				if (ds[i].ngaySinh[k] == '/') {
					break;
				}
				a[m] = ds[i].ngaySinh[k];
				m++;
				a[m] = NULL;
			}
		}
		int l = DoDaiChuoi(a);
		for (int z = 0; z < l / 2; z++) {
			if (a[z] != NULL && a[l - z - 1] != NULL) {

				char temp = a[z];

				a[z] = a[l - z - 1];
				a[l - z - 1] = temp;
			}

		}
		if (_strcmpi(a, nam) == 0 && ds[i].luong == luong) {
			kq = 1;
			break;
		}

	}
	if (kq == -1) {
		cout << "\nkhong ton tai nhan vien co nam sinh " << nam << "va luong "<<luong;
	}
	else {
		cout << "\ndanh sach nhan vien co co nam sinh " << nam << "va luong " << luong;
		XuatTieuDe();
		for (int i = 0; i < n; i++) {
			char a[10];
			int m = 0;
			int lenght = ds[i].ngaySinh.length();
			for (int k = lenght - 1; k >= 0; k--) {
				if (ds[i].ngaySinh[k] != NULL) {
					if (ds[i].ngaySinh[k] == '/') {
						break;
					}
					a[m] = ds[i].ngaySinh[k];
					m++;
					a[m] = NULL;
				}
			}
			int l = DoDaiChuoi(a);
			for (int z = 0; z < l / 2; z++) {
				if (a[z] != NULL && a[l - z - 1] != NULL) {

					char temp = a[z];

					a[z] = a[l - z - 1];
					a[l - z - 1] = temp;
				}

			}
			if (_strcmpi(a, nam) == 0&&ds[i].luong==luong) {
				Xuat_NV(ds[i]);
				cout << endl;
				if ((i + 1) % 5 == 0) {
					XuatDongKe('-');
				}
			}

		}
		XuatDongKe('=');
	}
}

void TimTheoHoTenNamSinh(NhanVien ds[], int n, char ho[11], char ten[11],char nam[]) {
	int kq = -1;
	for (int i = 0; i < n; i++) {
		char a[10];
		int m = 0;
		int lenght = ds[i].ngaySinh.length();
		for (int k = lenght - 1; k >= 0; k--) {
			if (ds[i].ngaySinh[k] != NULL) {
				if (ds[i].ngaySinh[k] == '/') {
					break;
				}
				a[m] = ds[i].ngaySinh[k];
				m++;
				a[m] = NULL;
			}
		}
		int l = DoDaiChuoi(a);
		for (int z = 0; z < l / 2; z++) {
			if (a[z] != NULL && a[l - z - 1] != NULL) {

				char temp = a[z];

				a[z] = a[l - z - 1];
				a[l - z - 1] = temp;
			}

		}
		if (_strcmpi(a, nam) == 0&&_strcmpi(ds[i].ho, ho) == 0 && _strcmpi(ds[i].ten, ten)==0) {
			kq = 1;
			break;
		}

	}
	if (kq == -1) {
		cout << "\nkhong ton tai sinh vien co ten " << ten << "va ho " << ho;
	}
	else {
		cout << "\ndanh sach nhan vien co ho " << ho << " va ten " << ten << " : ";
		XuatTieuDe();
		for (int i = 0; i < n; i++) {
			if (_strcmpi(ds[i].ho, ho) == 0 && _strcmpi(ds[i].ten, ten)) {
				Xuat_NV(ds[i]);
				cout << endl;
				if ((i + 1) % 5 == 0) {
					XuatDongKe('-');
				}
			}

		}
		XuatDongKe('=');
	}
}
int KiemTraDayTang(string x[MAX], int n)
{
	int i, kq = 1;
	for (i = 0; i < n - 1; i++)
		if (x[i].compare(x[i + 1])>0)
		{
			kq = 0;//khong tang
			break;
		}
	return kq;
}
//Kiem tra day so nguyen giam, giam : 1, khong giam : 0
int KiemTraDayGiam(string x[MAX], int n)
{
	int i, kq = 1;
	for (i = 0; i < n - 1; i++)
		if (x[i].compare(x[i + 1]) < 0)
		{
			kq = 0; //khong giam
			break;
		}
	return kq;
}
int TKNP_Tang(string x[MAX], int n, char maNV[8])
{
	int kq = -1, midle, left = 0, right = n - 1;
	do
	{
		midle = (left + right) / 2;

		if (maNV == x[midle])
		{
			kq = midle;
			break;
		}
		else
			if (x[midle].compare((string)maNV)>0)
				right = midle - 1;
			else
				left = midle + 1;
	} while (left <= right);
	return kq;
}
int TKNP_Giam(string x[MAX], int n, char maNV[])
{
	int kq = -1, midle, left = 0, right = n - 1;
	do
	{
		midle = (left + right) / 2;
		if (maNV == x[midle])
		{
			kq = midle;
			break;
		}
		else
			if (x[midle].compare((string)maNV) < 0)
				left = midle + 1;
			else
				right = midle - 1;
	} while (left <= right);
	return kq;
}
void Xuat_TKNP_Theo_TichLuy(char maNV[], NhanVien a[MAX], int n, int kq)
{
	if (kq == -1)
	{
		cout << "\nKhong co sinh vien trong danh sach co so TC tich luy == " << maNV << " :\n";
		return;
	}
	else
	{
		cout << "\nThong tin sinh vien trong danh sach co so TC tich luy == " << maNV << " :\n";
		XuatTieuDe();
		cout << endl;
		Xuat_NV(a[kq]);
		cout << endl;
		return;
	}
}
void TKNP_Theo_TichLuy(NhanVien a[MAX], int n)
{
	int i, kq;
	string x[MAX];
	for (i = 0; i < n; i++)
		x[i] = a[i].maNV;
	if (!KiemTraDayGiam(x, n) && !KiemTraDayTang(x, n))
	{
		cout << "\nDay so nguyen tao boi truong tich luy khong don dieu";
		cout << "\nKhong su dung duoc thuat giai tim kiem nhi phan!\n";
		return;
	}
	char maNV[8];
	cout << "\nNhap so ma so : ";
	cin >> maNV;
	if (KiemTraDayTang(x, n))
	{
		kq = TKNP_Tang(x, n, maNV);
		Xuat_TKNP_Theo_TichLuy(maNV, a, n, kq);
	}
	if (KiemTraDayGiam(x, n))
	{
		kq = TKNP_Giam(x, n, maNV);
		Xuat_TKNP_Theo_TichLuy(maNV, a, n, kq);
	}
}
