typedef int* MaTranVuong;
void NhapMaTran(MaTranVuong& a, int n,char kt);
void XuatMaTran(MaTranVuong a, int n);
MaTranVuong TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, int n);
MaTranVuong TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, int n);
MaTranVuong TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, int n);
void NhapMaTran(MaTranVuong& a, int n, char kt)
{
	int i, j;
	srand(time(NULL));
	for (i = 0; i < n; i++) 
		for (j = 0; j < n; j++) 
		{
			/*cout << endl << kt << "[" << i << "][" << j << "]= ";*/
			/*cin >> *(a + i * n + j);*/
			*(a + i * n + j) = rand() % ((10 - (0) + 1) + (0));
		}
}
void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << endl << endl;
		for (j = 0; j < n; j++)
			cout << setw(4) << *(a + i * n + j);
	}
}
MaTranVuong TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	int i, j;
	MaTranVuong c;
	c = new int[n * n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(c + i * n + j) = *(a + i * n + j) + *(b + i * n + j);
	return c;
}
MaTranVuong TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	MaTranVuong c;
	int i, j;
	c = new int[n * n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(c + i * n + j) = *(a + i * n + j) - *(b + i * n + j);
	return c;
}
MaTranVuong TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	MaTranVuong c;
	int i, j, k;
	c = new int[n * n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			*(c + i * n + j) = 0;
			for (k = 0; k < n; k++)
				*(c + i * n + j) += *(a + i * n + k) * *(b + k * n + j);
		}
	return c;
}