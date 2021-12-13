#define MAX 50
void Nhap_Ma_Tran_Vuong(int a[MAX][MAX], int n);
void Xuat_Ma_Tran_Vuong(int a[MAX][MAX], int n);
int Tim_Duong_Be_Nhat(int a[MAX][MAX], int n, int i);
int Tim_Am_Lon_Nhat(int a[MAX][MAX], int n, int j);
int Tinh_S(int a[MAX][MAX], int n, int i);
int Tinh_T(int a[MAX][MAX], int n, int j);
void Nhap_Ma_Tran_Vuong(int a[MAX][MAX] ,int n ) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n;j++) {
			cout << "nhap a[ " << i << " ][ " << j << " ] : ";
			cin >> a[i][j];
		}
	}
}
void Xuat_Ma_Tran_Vuong(int a[MAX][MAX] ,int n) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n;j++) {
			cout<<setw(4) << a[i][j];
		}
		cout << endl;
	}
}
int Tim_Duong_Be_Nhat(int a[MAX][MAX] ,int n ,int i) {
	int min;
	for (int j = 0; j < n; j++) {
		if (a[i][j] >0) {
			min = a[i][j];
			
			for (int k = 0; k < n;k++) {
				if (a[i][k] > 0&& a[i][k] < min) {
					min = a[i][k];
					
				}
				
			}
		/*	return min;*/
		}
		else {
			min = 0;
		}
	}
	return min;
}
int Tim_Am_Lon_Nhat(int a[MAX][MAX],int n,int j) {
	int max ;
	for (int i = 0; i < n;i++) {
		if (a[i][j] < 0) {
			max = a[i][j];
			
			for (int k = 0; k < n;k++) {
				if ( a[i][k]<0 && a[i][k] > max) {
					max = a[i][k];
					
				}
				
			}
			
		}

		else
			max = 0;

	}
	return max;
}
int Tinh_S(int a[MAX][MAX],int n ,int i) {
	int hi = Tim_Duong_Be_Nhat(a, n, i)
		,sum=0;
	for (int j = 0; j < n;j++) {
		sum += hi;
	}
	return sum;
}
int Tinh_T(int a[MAX][MAX], int n, int j) {
	int vj = Tim_Am_Lon_Nhat(a, n, j)
		, sum = 0;
	for (int j = 0; j < n; j++) {
		sum += vj;
	}
	return sum;
}