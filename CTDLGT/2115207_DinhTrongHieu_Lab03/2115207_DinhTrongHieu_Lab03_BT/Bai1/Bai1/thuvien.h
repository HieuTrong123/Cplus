#pragma once
#define MAX 100
int TaoDuLieu(int a[], int& n,char* filename) {
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
		cout << a[i] << '\t';
	}
}
void HoanVi(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void Selection_L(int a[MAX], int n)
{
	int i, j, cs_min;
	for (i = 0; i < n - 1; i++)
	{
		cs_min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[cs_min])
				cs_min = j;
		HoanVi(a[i], a[cs_min]);
	}
}
void Selection_L_GTLN(int a[MAX], int n)
{
	int i, j, cs_max;
	for (i = n-1; i >=0; i--)
	{
		cs_max = i;
		for (j = i -1; j >=0; j--)
			if (a[j] > a[cs_max])
				cs_max = j;
		HoanVi(a[i], a[cs_max]);
	}
}

void Insertion_L(int a[MAX], int n)
{
	int i, x, pos;
	for (i = 1; i < n; i++)
	{
		x = a[i];
		for (pos = i - 1; (pos >= 0) && (a[pos] > x); pos--)
			a[pos + 1] = a[pos];
		a[pos + 1] = x;
	}
}
void Insertion_R(int a[MAX], int n)
{
	int i, x, pos;
	for (i = 1; i < n; i++)
	{
		x = a[i];
		for (pos = i - 1; (pos >= 0) && (a[pos] < x); pos--)
			a[pos + 1] = a[pos];
		a[pos + 1] = x;
	}
}
void Interchange_L(int a[MAX], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
			if (a[j] < a[i])
				HoanVi(a[i], a[j]);
	}
}
void Interchange_R(int a[MAX], int n)
{
	int i, j;
	for (i = n-1; i >=0; i--)
	{
		for (j = i -1; j >=0; j--)
			if (a[j] < a[i])
				HoanVi(a[i], a[j]);
	}
}
void Buble_L(int a[MAX], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
			if (a[j] < a[j - 1])
				HoanVi(a[j - 1], a[j]);
	}
}
void Buble_R(int a[MAX], int n)
{
	int i, j;
	for (i = n-1; i >=0; i--)
	{
		for (j = 0; j < i; j++)
			if (a[j] > a[j + 1])
				HoanVi(a[j - 1], a[j]);
	}
}
void Binary_Insertion(int a[MAX], int n)
{
	int l, r, m;
	int i, j;
	int x;
	for (i = 1; i < n; i++)
	{
		x = a[i]; l = 0; r = i - 1;
		while (l <= r)
		{
			m = (l + r) / 2;
			if (x < a[m])
				r = m - 1;
			else
				l = m + 1;
		}
		for (j = i - 1; j >= l; j--)
			a[j + 1] = a[j];
			a[l] = x;
	}
}
void Selection_R_L(int a[MAX], int n)
{
	int i, j, cs_min, cs_max;
	for (i = 0; i < n / 2; i++)
	{
		cs_min = i;
		cs_max = n - 1 - i;
		for (j = i; j <= n - 1 - i; j++)
		{
			if (a[j] < a[cs_min])
				cs_min = j;
			if (a[j] > a[cs_max])
				cs_max = j;
		}
		if (cs_min == n - i - 1)
		{
			HoanVi(a[i], a[cs_min]);
			if (cs_max != i)
				HoanVi(a[cs_max], a[n - i - 1]);
		}
		else
		{
			HoanVi(a[cs_max], a[n - i - 1]);
			HoanVi(a[i], a[cs_min]);
		}
	}
}