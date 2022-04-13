#define TAB '\t'
typedef int* DayDong; 
void NhapTuDong(DayDong a, int n);
void XuatMang(DayDong a, int n);
int TinhTong(DayDong a, int n);
int TinhTich(DayDong a, int n);
int TinhMin(DayDong a, int n);
int TinhMax(DayDong a, int n);
int TinhSo_DC(DayDong a, int n);
int KiemTra_NT(int x);
int TinhTong_NT(DayDong a, int n);
int Tim_Cscc(DayDong a, int n, int x);
int DemSo_DC(DayDong a, int n);
void NhapTuDong(DayDong a, int n)
{
	int i;
	// Gieo số ngẫu nhiên đầu tiên
	srand((unsigned)time(NULL));
	// Duyệt qua từng phần tử từ vị trí 0 tới n-1
	for (i = 0; i < n; i++)
	{
		// Sinh một số ngẫu nhiên trong phạm vi
		// [-20..20) rồi gán cho phần tử thứ i
		*(a + i) = -20 + rand() % 40;
	}
}
void XuatMang(DayDong a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << *(a + i) << TAB;
}
//tinh tong
int TinhTong(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *a;
	else
		if (n > 1)
			kq = TinhTong(a, n - 1) + *(a + n - 1);
	return kq;
}
//tinh tich
int TinhTich(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *a;
	else
		if (n > 1)
			kq = *(a + n - 1) * TinhTich(a, n - 1);
	return kq;
}
//Tinh min
int TinhMin(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *(a + 0);
	else
		if (n > 1)
			if (TinhMin(a, n - 1) > *(a + n - 1))
				kq = *(a + n - 1);
			else
				kq = TinhMin(a, n - 1);
	return kq;
}
//Tinh max
int TinhMax(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *(a + 0);
	else
		if (n > 1)
			if (TinhMax(a, n - 1) < *(a + n - 1))
				kq = *(a + n - 1);
			else
				kq = TinhMax(a, n - 1);
	return kq;
}
//Tinh so duong chay
int TinhSo_DC(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = 1;
	else
		if (n > 1)
			if (*(a + n - 1) < *(a + n - 2))
				kq = TinhSo_DC(a, n - 1) + 1;
			else
				kq = TinhSo_DC(a, n - 1);
	return kq;
}
//Kiem tra nguyen to
int KiemTra_NT(int x)
{
	int i, m,
		kq;
	if (x < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((double)x);
		kq = 1;
		for (i = 2; i <= m; i++)
			if (x % i == 0)
			{
				kq = 0;
				break; 
			}
	}
	return kq;
}
//Tinh tong nguyen to
int TinhTong_NT(DayDong a, int n)
{
	int kq;
	if (n == 1)
		if (KiemTra_NT(*a))
			kq = *a;
		else
			kq = 0;
	else
		if (n > 1)
			if (KiemTra_NT(*(a + n - 1)))
				kq = TinhTong_NT(a, n - 1) + *(a + n - 1);
			else
				kq = TinhTong_NT(a, n - 1);
	return kq;
}
//vi tri cuoi cung x xuat hien
int Tim_Cscc(DayDong a, int n, int x)
{
	int kq;
	if (n == 1)
		if (*a == x)
			kq = 0;
		else
			kq = -1;
	else
		if (n > 1)
			if (*(a + n - 1) == x)
				kq = n - 1;
			else
				kq = Tim_Cscc(a, n - 1, x);
	return kq;
}
//Dem so duong chay
int DemSo_DC(DayDong a, int n)
{
	int kq = 0;
	if (n == 1)
		kq = 1;
	else
		if (n > 1)
			if (*(a + n - 1) < *(a + n - 2))
				kq = DemSo_DC(a, n - 1) + 1;
			else
				kq = DemSo_DC(a, n - 1);
	return kq;
}
