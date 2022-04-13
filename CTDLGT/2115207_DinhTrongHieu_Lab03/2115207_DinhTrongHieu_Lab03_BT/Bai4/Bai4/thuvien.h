#pragma once
#define MAX 100
struct NhanVien {
	char maNV[8];
	char ho[11];
	char tenLot[11];
	char ten[11];
	char diaChi[16];
	int namSinh;
	double luong;


};
int TaoDuLieu(NhanVien ds[], int& n) {
	ifstream in("text.txt");
	if (!in)
		return 0;
	n = 0;
	while (!in.eof()) {
		in >> ds[n].maNV;
		in >> ds[n].ho;
		in >> ds[n].tenLot;
		in >> ds[n].ten;
		in >> ds[n].diaChi;
		in >> ds[n].namSinh;
		in >> ds[n].luong;
		n++;
	}
	in.close();
	return 1;

}
void XuatDongKe(char x) {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 69; i++) {
		cout << x;
	}
	cout << ':';
	cout << endl;
}
void XuatTieuDe() {
	XuatDongKe('=');
	cout << setiosflags(ios::left) << ':' << setw(10) << "maNV" << ':'
		<< setw(10) << "ho" << setw(10) << "ten lot" << setw(10) << "ten" << ':'
		<< setw(10) << "dia chi" << ':' << setw(10) << "nam sinh" << ':'
		<< setw(10) << "luong" << ':';
	XuatDongKe('=');
}
void XuatMotNV(NhanVien nv) {
	cout << setiosflags(ios::left) << ':' << setw(10) << nv.maNV << ':'
		<< setw(10) << nv.ho << setw(10) << nv.tenLot << setw(10) << nv.ten << ':'
		<< setw(10) << nv.diaChi << ':' << setw(10) << nv.namSinh << ':'
		<< setw(10) << nv.luong << ':';
}
void XuatDanhSachNV(NhanVien ds[], int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		XuatMotNV(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
}
void HoanVi(NhanVien& a, NhanVien& b) {
	NhanVien temp = a;
	a = b;
	b = temp;
}
void Shaker(NhanVien a[MAX], int n)
{
	int l = 0, r = n - 1;
	int k = n - 1;
	int j;
	while (l < r)
	{
		
		j = r;//Khoi tao j tu bien phai
		while (j > l)
		{
			if (a[j].luong < a[j - 1].luong)
			{
				HoanVi(a[j], a[j - 1]);
				k = j;				
			}
			
			else if (a[j].luong == a[j - 1].luong) {
				if (_strcmpi(a[j].ten, a[j - 1].ten) < 0) {
					HoanVi(a[j], a[j - 1]);
				}
				else if (_strcmpi(a[j].ten, a[j - 1].ten) == 0) {
					if (_strcmpi(a[j].ho, a[j - 1].ho) < 0) {
						HoanVi(a[j], a[j - 1]);
					}
					else if (_strcmpi(a[j].ho, a[j - 1].ho) == 0) {
						if (a[j].namSinh < a[j - 1].namSinh) {
							HoanVi(a[j], a[j - 1]);
						}
					}
				}
			}
			j = j - 1;
		}
		l = k;//xac dinh lai bien trai l
		j = l; //khoi tao j tu bien trai
		while (j < r)
		{
			if (a[j].luong > a[j + 1].luong)
			{
				HoanVi(a[j], a[j + 1]);
				k = j;
			}
			else if (a[j].luong == a[j - 1].luong) {
				if (_strcmpi(a[j].ten, a[j - 1].ten) > 0) {
					HoanVi(a[j], a[j - 1]);
				}
				else if (_strcmpi(a[j].ten, a[j - 1].ten) == 0) {
					if (_strcmpi(a[j].ho, a[j - 1].ho) > 0) {
						HoanVi(a[j], a[j - 1]);
					}
					else if (_strcmpi(a[j].ho, a[j - 1].ho) == 0) {
						if (a[j].namSinh > a[j - 1].namSinh) {
							HoanVi(a[j], a[j - 1]);
						}
					}
				}
			}
			j = j + 1;
		}
		r = k;//xac dinh lai bien phai l
	}
}