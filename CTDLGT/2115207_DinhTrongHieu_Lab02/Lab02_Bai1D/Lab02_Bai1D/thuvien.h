#pragma once
#define MAX 100
int TapTin_mang1c(char* filename, int a[MAX], int& n);
void Xuat_Mang(int a[MAX], int n);
int TKTT_DauTien(int a[MAX], int n, int x);
int TKTT_DauTien_LC(int a[MAX], int n, int x);
int TKTT_CuoiCung(int a[MAX], int n, int x);
void TKTT_CacChiSo(int a[MAX], int n, int x);
int TapTin_mang1c(char* filename, int a[MAX], int& n)
{
	int i;
	ifstream in(filename); //Mo tập tin filename de doc
	if (!in)
		return 0;//khong thanh cong
	in >> n;
	for (i = 0; i < n; i++)
		
		in >> a[i];
	in.close();
	return 1;//thanh cong
}
void Xuat_Mang(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
}
int TKTT_DauTien(int a[MAX], int n, int x)
{
	int i = 0;
	while ((i < n) && (a[i] != x)) i++;
	if (i == n)
		return -1;
	return i;
}
//Co linh canh, tra ve chi so i dau tien, neu co x
int TKTT_DauTien_LC(int a[MAX], int n, int x)
{
	int i = 0;
	a[n] = x; //Linh canh
	while (a[i] != x) i++;
	if (i == n)
		return -1;
	return i;
}
//Tra ve chi so i cuoi cung, neu co x
int TKTT_CuoiCung(int a[MAX], int n, int x)
{
	int i = n - 1;
	while ((i >= 0) && (a[i] != x)) i--;
	return i;
}
//Tra ve cac chi so xuat hien, neu co x
void TKTT_CacChiSo(int a[MAX], int n, int x)
{
	int i, kq = -1;
	for (i = 0; i < n; i++)
		if (a[i] == x)
		{
			kq = 1;
			break;
		}
	if (kq == -1)
		cout << endl << x << " khong co trong a";
	else
	{
		cout << endl << x << " xuat hien trong a tai cac vi tri :\n";
		for (i = 0; i < n; i++)
			if (a[i] == x)
				cout << i << '\t';
	}
}