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
void HonaVi(NhanVien& a, NhanVien& b) {
	NhanVien temp = a;
	a = b;
	b = temp;
}
void ChonTrucTiep(NhanVien ds[], int n) {
	int cs_min;
	for (int i = 0; i < n; i++) {
		cs_min = i;
		for (int j = i + 1; j < n; j++) {
			if (_strcmpi(ds[j].maNV, ds[cs_min].maNV) < 0) {
				cs_min = j;
				HonaVi(ds[i], ds[cs_min]);
			}
		}
	}


}
void ChenTrucTiep(NhanVien ds[], int n) {
	int j;
	for (int i = 1; i < n; i++) {
		NhanVien x = ds[i];
		for (j = i - 1; j >= 0 && _strcmpi(ds[j].diaChi, x.diaChi) > 0; j--) {
			ds[j + 1] = ds[j];

		}
		ds[j + 1] = x;
	}
}
void Radix(NhanVien a[], int n)
{
	int max, m;
	max = a[0].namSinh; m = 0;
	int k, i, j, du, thuong;
	NhanVien b0[MAX], b1[MAX], b2[MAX], b3[MAX], b4[MAX], b5[MAX],
		b6[MAX], b7[MAX], b8[MAX], b9[MAX];
	int p0, p1, p2, p3, p4, p5, p6, p7, p8, p9;
	//Tim max(a)
	for (i = 0; i < n; i++)
		if (a[i].namSinh > max)
			max = a[i].namSinh;
	//Xã dinh so cac chu so cua max(a) : m
	while (max != 0)
	{
		max = max / 10;
		m++;
	}
	k = 0; //khoi tao chu so k = 0 : hang don vi
	while (k < m)
	{
		p0 = p1 = p2 = p3 = p4 = p5 = p6 = p7 = p8 = p9 = 0;//khoi tao chi so cua cac lo
		for (i = 0; i < n; i++)
		{
			//xac dinh chu so hang k cua a[i] : du
			thuong = a[i].namSinh;
			for (j = 0; j <= k; j++)
			{
				du = thuong % 10;
				thuong = thuong / 10;
			}
			//Phan vao cac lo
			switch (du)
			{
			case 0:b0[p0++] = a[i];
				break;
			case 1:b1[p1++] = a[i];
				break;
			case 2:b2[p2++] = a[i];
				break;
			case 3:b3[p3++] = a[i];
				break;
			case 4:b4[p4++] = a[i];
				break;
			case 5:b5[p5++] = a[i];
				break;
			case 6:b6[p6++] = a[i];
				break;
			case 7:b7[p7++] = a[i];
				break;
			case 8:b8[p8++] = a[i];
				break;
			case 9:b9[p9++] = a[i]; 
				break;
			}
		}//Phan xong vao cac lo khi xet hang k
		//Noi lai theo trinh tu de co day a tang theo hang k
		j = 0;
		for (i = 0; i < p0; i++)
			a[j++] = b0[i];
		for (i = 0; i < p1; i++)
			a[j++] = b1[i];
		for (i = 0; i < p2; i++)
			a[j++] = b2[i];
		for (i = 0; i < p3; i++)
			a[j++] = b3[i];
		for (i = 0; i < p4; i++)
			a[j++] = b4[i];
		for (i = 0; i < p5; i++)
			a[j++] = b5[i];
		for (i = 0; i < p6; i++)
			a[j++] = b6[i];
		for (i = 0; i < p7; i++)
			a[j++] = b7[i];
		for (i = 0; i < p8; i++)
			a[j++] = b8[i];
		for (i = 0; i < p9; i++)
			a[j++] = b9[i];
		k++; //xet tiep hang k lon hon, khi k = m thi dung
	}
}