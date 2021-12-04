#define SIZE 10
//Dinh nghia kieu du lieu moi
typedef int MaTranVuong[SIZE][SIZE];
//Khai bao nguyen mau cac ham:
void NhapMaTran(MaTranVuong a, int &n, char kt);
void XuatMaTran(MaTranVuong a, int n);
void TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);
void TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);
void TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);

void NhapMaTran(MaTranVuong a, int &n,char kt)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << endl << kt << "[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	
}
void XuatMaTran(MaTranVuong a, int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << endl << endl;
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
	}
} 

void TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	XuatMaTran(c, n);
}

void TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			c[i][j] = a[i][j] - b[i][j];
	XuatMaTran(c, n);
}

void TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	int i, j, k;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	XuatMaTran(c, n);
}
