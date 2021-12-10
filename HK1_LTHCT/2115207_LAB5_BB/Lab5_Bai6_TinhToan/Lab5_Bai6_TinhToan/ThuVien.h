#define MAX 100
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
float Tinh_Trung_Binh_Cong(int a[], int n);
float Tinh_Tong_Binh_Phuong(int a[], int n);
int Tinh_Tong_So_NT_2_Chu_So(int a[], int n);
void Tinh_Do_Lech(int a[], int b[], int n);
int Tim_Max(int a[], int n);
int abs(int n);
void Nhap_Mang(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		cout << "\nNhap a[ "<<i<<" ] : ";
		cin >> a[i];
	}
}
void Xuat_Mang(int a[] ,int n) {
	for (int i = 0; i < n;i++) {
		cout << a[i] << "   ";
	}
}
float Tinh_Trung_Binh_Cong(int a[] ,int n) {
	int sum = 0;
	for (int i = 0; i < n;i++) {
		sum += a[i];
	}
	return ((sum * 1.0) / n);
}
float Tinh_Tong_Binh_Phuong(int a[] ,int n) {
	int sum=0;
	for (int i = 0; i < n;i++) {
		sum += pow((a[i] * 1.0),2);
	}
	return sum;
}
int Kiem_Tra_So_NT(int n) {
	int kq = 1;
	if (n < 2) {
		kq = 0;
	}
	else {
		if (n==2) {
			kq = 1;
		}
		else {
			for (int i = 2; i < n;i++) {
				if (n % i == 0) {
					kq = 0;
				}
			}
		}
	}
	return kq;
}
int Tinh_Tong_So_NT_2_Chu_So(int a[] ,int n) {
	int sum=0;
	for (int i = 0; i < n;i++) {
		if (Kiem_Tra_So_NT(a[i])==1&&a[i]/10!=0) {
			cout <<"\nso nguyen to 2 chu so trong mang la : " << a[i] << '\t';
			sum += a[i];
		}
	}
	return sum;
}
int Tim_Max(int a[] ,int n) {
	int max = a[0];
	for (int i = 1; i < n;i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
void Tinh_Do_Lech(int a[] ,int b[] ,int n) {
	int m=0
		,kq=0;
	for (int i = n-1; i >=0; i--) {
		kq = a[i] - a[i-1];
		
			b[m] = abs(kq);
			m++;
		
	}
	cout << "\nmang b la mang chua cac do lech  : ";
	Xuat_Mang(b, m-1);
	cout <<"\ndo lech lon nhat la : " << Tim_Max(b, m-1);
}