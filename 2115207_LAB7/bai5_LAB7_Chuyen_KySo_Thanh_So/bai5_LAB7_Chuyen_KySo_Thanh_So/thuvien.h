#define MAX 100
typedef char Chuoi[MAX];
void Chuyen_Chuoi_Thanh_So(Chuoi a,int b[]);
int Chuyen_KySo_So(char x);
void Xuat_Mang(int b[], int l);
int Chuyen_KySo_So(char x) {
	return x - 48;
}
void Chuyen_Chuoi_Thanh_So(Chuoi a,int b[]) {
	int l = strlen(a);
	for (int i = 0; i < l; i++) {
		
		b[i] =Chuyen_KySo_So(a[i]);
	}
	cout << "\nXuat mang so tu nhien : ";
	Xuat_Mang(b, l);
}
void Xuat_Mang(int b[],int l) {
	for (int i = 0; i < l;i++) {
		cout << b[i];
	}
}