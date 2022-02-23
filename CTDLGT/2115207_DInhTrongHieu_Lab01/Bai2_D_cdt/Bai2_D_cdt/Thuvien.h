#pragma once
#define MAX 100
void NhapDay(int a[MAX], int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		a[i] = i;
	}
}
void XuatDay(int a[MAX], int n)
{
	for (int i = 1; i <= n; i++)
		cout << a[i] << '\t';
}
void HoanVi(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}
void Exchange(int a[MAX], int i, int j, int m)
{
	for (int k = 0; k <= m - 1; k++)
		HoanVi(a[i + k], a[j + k]);
}
void Transpose(int a[MAX], int n, int m)
{
	//m=3,n=10
	// 1 2 3 4 5 6 7 8 9 10

	
	
	int i, j;
	i = m;//i=3
	j = n - m;//j=7
	m = m + 1; //m=4
		while (i != j)
			if (i > j)
			{
				Exchange(a, m - i, m, j);
			//a,1,4,1
				i = i - j;
				//i=2
				//a,2,4,1
				//i=1
			}
			else
			{
				j = j - i;
				
				//j=4
				Exchange(a, m - i, m + j, i);
				//a,1,8,3
				//j=1
				//a,1,5,3
			}
	Exchange(a, m - i, m, i);
	//a,3,4,1
}
