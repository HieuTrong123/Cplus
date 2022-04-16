#pragma once
#define MAX 100


//Dinh nghi kieu du lieu : nhanvien
struct nhanvien
{
	char maNV[8];
	char hoNV[15];
	char tenLot[10];
	char ten[10];
	char diachi[15];
	int namSinh;
	double luong;
};

//========================================
int TapTin_Mang1C(char* filename, nhanvien a[MAX], int& n);
void Xuat_DSNV(nhanvien a[MAX], int n);
void Xuat_NV(nhanvien p);
void TieuDe();

void Xuat_DSNV_maNV(nhanvien a[MAX], int n);

void Copy(nhanvien b[MAX], nhanvien a[MAX], int n);
void HoanVi(nhanvien& a, nhanvien& b);

//========================================================================
//Cai dat cac ham nhap, xuat du lieu

//Chuyen du lieu tu tap tin sang mang 1 chieu
int TapTin_Mang1C(char* filename, nhanvien a[MAX], int& n)
{

	ifstream in(filename);
	if (!in)
		return 0;

	n = 0;

	while (!in.eof())
	{
		in >> a[n].maNV;
		in >> a[n].hoNV;
		in >> a[n].tenLot;
		in >> a[n].ten;
		in >> a[n].diachi;
		in >> a[n].namSinh;
		in >> a[n].luong;
		n++;
	}
	in.close();
	return 1;
}
//Xuat tieu de
void TieuDe()
{
	cout << "\n=============================================================================\n";
	cout << setiosflags(ios::left);
	cout << setw(10) << "Ma NV"
		<< setw(15) << "Ho NV"
		<< setw(10) << "Tenlot NV"
		<< setw(10) << "Ten SV"
		<< setw(15) << "Dia Chi"
		<< setw(6) << "NS"
		<< setw(15) << "Luong";
	cout << "\n=============================================================================\n";
}

//Xuat 1 nhan vien
void Xuat_NV(nhanvien p)
{
	cout << setiosflags(ios::left)
		<< setw(10) << p.maNV
		<< setw(15) << p.hoNV
		<< setw(10) << p.tenLot
		<< setw(10) << p.ten
		<< setw(15) << p.diachi
		<< setw(6) << p.namSinh
		<< setw(15) << setprecision(2) << setiosflags(ios::fixed) << p.luong;
}

//Xuat danh sach nhan vien
void Xuat_DSNV(nhanvien a[MAX], int n)
{
	int i;
	TieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_NV(a[i]);
	}
	cout << "\n=============================================================================\n";
}

//Xuat danh sach ma nhan vien
void Xuat_DSNV_maNV(nhanvien a[MAX], int n)
{
	int i;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << setw(10) << a[i].maNV;
	}
}

//========================================================================
//cac ham bo tro
void Copy(nhanvien b[MAX], nhanvien a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		b[i] = a[i];
}

void HoanVi(nhanvien& a, nhanvien& b)
{
	nhanvien tam = a;
	a = b;
	b = tam;
}

//=========================================================================

void ChonTrucTiep(nhanvien a[MAX], int n) {
	int i, j, min;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (_strcmpi(a[j].maNV , a[min].maNV)<0) {
				min = j;
			}
			HoanVi(a[j], a[min]);
		}
	}
}
void Insertion_R(nhanvien a[MAX], int n)
{
	int i, pos;
	nhanvien x;
	
		for (i = n - 2; i >= 0; i--)
		{
			x = a[i];
			for (pos = i + 1; (pos < n) && (_strcmpi(a[pos].maNV , x.maNV)<0); pos++)
				a[pos - 1] = a[pos];
			a[pos - 1] = x;
		}
}
void Buble_R(nhanvien a[MAX], int n)
{
	int i, j;
	for (j = n - 1; j > 0; j--)
	{
		for (i = 0; i < n - 1; i++)
			if (_strcmpi(a[i].maNV , a[i + 1].maNV)>0)
				HoanVi(a[i + 1], a[i]);
		cout << "\nBuoc " << n - j << " : ";
		Xuat_DSNV(a, n);
		cout << "\n";
	}
	cout << "\nCo " << n - 1 << " buoc thuc hien thuat giai.\n";
}
void Interchange_R(nhanvien a[MAX], int n)
{
	int i, j;
	for (j = n - 1; j > 0; j--)
	{
		for (i = 0; i < j; i++)
			if (_strcmpi(a[i].maNV , a[j].maNV)>0)
				HoanVi(a[i], a[j]);
	}
}
void Shift(nhanvien a[MAX], int l, int r)
{
	int i, j;
	nhanvien x;
	i = l; j = 2 * i + 1;
	x = a[i];
	while (j <= r)
	{
		if (j < r)
			if (_strcmpi(a[j].maNV , a[j + 1].maNV)<0)
				j = j + 1;
		if (_strcmpi(a[j].maNV, a[j + 1].maNV) <= 0)
			return;
		else
		{
			a[i] = a[j];
			i = j;
			j = 2 * i + 1;
			a[i] = x;
		}
	}
}
void Create_Heap(nhanvien a[MAX], int n)
{
	int l;
	l = (n - 1) / 2;
	while (l >= 0)
	{
		
			Shift(a, l, n - 1);
		l = l - 1;
	}
}
void HeapSort(nhanvien a[MAX], int n)
{
	int r, i = 0;
	Create_Heap(a, n);
	r = n - 1;
	while (r > 0)
	{
		i++;
		HoanVi(a[0], a[r]);
		r = r - 1;
		Shift(a, 0, r);
	}
}
void Partition(nhanvien a[MAX], int l, int r)
{
	int i, j;
	nhanvien x;
	x = a[(l + r) / 2];
	i = l; j = r;
	do
	{
		while (_strcmpi(a[i].maNV, x.maNV) < 0)
			i++;
		while (_strcmpi(a[j].maNV, x.maNV) > 0)
			j--;
		if (i <= j)
		{
			HoanVi(a[i], a[j]);
			i++; j--;
		}
	} while (i <= j);
	if (l < j)
		Partition(a, l, j);
	if (i < r)
		Partition(a, i, r);
}
//Quick sort
void QuickSort(nhanvien a[MAX], int n)
{
	Partition(a, 0, n - 1);
}