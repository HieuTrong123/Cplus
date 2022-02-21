#pragma once
#define MAX 20
//Các biến toàn cục
int n,
k;
int a[MAX], //luu tru day nhi phan, hoan vi, to hop
b[MAX]; //danh dau
int dem; //dem day nhi phan, hoan vi, to hop
//Xuat day nhi phan, hoan vi, to hop
void Xuat_KQ(int a[MAX], int n)
{
	int i;
	cout << "kq" << setw(3) << dem << " : ";
	for (i = 1; i <= n; i++)
		cout << setw(2) << a[i];
	cout << endl;
}
//Day nhi phan chieu dai n
void LietKe_DayNP(int i)//Try
{
	int j;
	for (j = 0; j <= 1; j++)
	{
		a[i] = j;
		if (i < n)
			LietKe_DayNP(i + 1);
		else
		{
			dem++;
			Xuat_KQ(a, n);
		}
	}
}
void LietKe_TH(int i)//Try
{
	int j;
	for (j = a[i - 1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if (i == k)
		{
			dem++;
			Xuat_KQ(a, k);
		}
		else
			LietKe_TH(i + 1);
	}
}
void KhoiTao_danhdau()
{
	int i;
	for (i = 1; i <= n; i++)
		b[i] = 1;
}
//Hoan vi n so nguyen duong dau tien
void LietKe_HV(int i)//Try
{
	int j;
	for (j = 1; j <= n; j++)
		if (b[j])
		{
			a[i] = j;
			b[j] = 0;
			if (i == n)
			{
				dem++;
				Xuat_KQ(a, n);
			}
			else
				LietKe_HV(i + 1);
			b[j] = 1;
		}
}