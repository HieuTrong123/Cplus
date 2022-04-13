#pragma once
#define MAX 100
int TaoDuLieu(int a[], int& n, char* filename) {
	ifstream in(filename);
	if (!in)
		return 0;
	n = 0;
	while (!in.eof()) {
		in >> a[n];
		n++;
	}
	in.close();
	return 1;
}
void XemDuLieu(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << endl << a[i];
	}
}
void HoanVi(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
//***************************
void Distribution(int F[MAX], int n, int F1[MAX], int& h1, int F2[MAX], int& h2, int p)
{
	int i, k = 1, l = 0;
	h1 = 0; h2 = 0;
	do
	{
		i = 1;
		while (i <= p && l < n)
		{
			if (k == 1)
			{
				F1[h1++] = F[l];
			}
			else
			{
				F2[h2++] = F[l];
			}
			i++;
			l++;
		}
		k = 3 - k;
	} while (l < n);
}
void Merge(int F1[MAX], int h1, int F2[MAX], int h2, int F[MAX], int p)
{
	int i1 = 0, i2 = 0, r1, r2;
	int h = 0;
	while (i1 < h1 && i2 < h2)
	{
		r1 = r2 = 1;
		while ((r1 <= p) && (r2 <= p) && i1 < h1 && i2 < h2)
		{
			if (F1[i1] <= F2[i2])
			{
				F[h++] = F1[i1];
				r1++;
				i1++;
			}
			else
			{
				F[h++] = F2[i2];
				r2++;
				i2++;
			}
		}
		while (i1 < h1 && r1 <= p)
		{
			F[h++] = F1[i1];
			i1++; r1++;
		}
		while (i2 < h2 && r2 <= p)
		{
			F[h++] = F2[i2];
			i2++; r2++;
		}
	}
	while (i1 < h1)
	{
		F[h++] = F1[i1];
		i1++;
	}
	while (i2 < h2)
	{
		F[h++] = F2[i2];
		i2++;
	}
}
void MergeSort(int F[MAX], int n)
{
	int p = 1, h1, h2;
	int F1[MAX], F2[MAX];
	int i = 1;
	while (p < n)
	{
		Distribution(F, n, F1, h1, F2, h2, p);
		Merge(F1, h1, F2, h2, F, p);
		i++;
		p = p * 2;
	}
}
void Shift(int a[MAX], int l, int r)
{
	int i, j;
	int x;
	i = l; j = 2 * i + 1;
	x = a[i];
	while (j <= r)
	{
		if (j < r)
			if (a[j] < a[j + 1])
				j = j + 1;
		if (a[j] <= x)
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
void Create_Heap(int a[MAX], int n)
{
	int l;
	l = (n - 1) / 2;
	while (l >= 0)
	{
		
			Shift(a, l, n - 1);
		l = l - 1;
	}
}
void HeapSort(int a[MAX], int n)
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
void Partition(int a[MAX], int l, int r)
{
	int i, j;
	int x;
	x = a[(l + r) / 2];
	i = l; j = r;
	do
	{
		while (a[i] < x)
			i++;
		while (a[j] > x)
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
void QuickSort(int a[MAX], int n)
{
	Partition(a, 0, n - 1);
}
void Radix(int a[MAX], int n)
{
	int max, m;
	max = a[0]; m = 0;
	int k, i, j, du, thuong;
	int b0[MAX], b1[MAX], b2[MAX], b3[MAX], b4[MAX], b5[MAX],
		b6[MAX], b7[MAX], b8[MAX], b9[MAX];
	int p0, p1, p2, p3, p4, p5, p6, p7, p8, p9;
	//Tim max(a)
	for (i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];
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
			thuong = a[i];
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