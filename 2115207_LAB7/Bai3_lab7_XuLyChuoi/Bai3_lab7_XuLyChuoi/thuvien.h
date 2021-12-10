#define MAX 50
typedef char xau[MAX];
void Hoan_Vi(char& a, char& b);
void Chuyen_Ky_Tu_Thuong(xau a);
void Chuyen_Ky_Tu_Hoa(xau a);
void Dao_Nguoc(xau a);
void Kiem_Tra_Chuoi_Doi_Xung(xau a);
void Chuyen_Ky_Tu_Thuong(xau a) {
	for (int i = 0; a[i] != NULL;i++) {
		if (a[i] >= 'A' && a[i] <='Z') {
			a[i] += 32;
		}
	}
	cout <<"\nchuoi sau khi nan ten la : " << a;
}
void Chuyen_Ky_Tu_Hoa(xau a) {
	for (int i = 0; a[i] != NULL; i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
		}
	}
	cout << "\nchuoi sau khi nan ten la : " << a;
}
void Dao_Nguoc(xau a) {
	int l = strlen(a);
	for (int i = 0; i < l / 2;i++) {
		Hoan_Vi(a[i], a[l - i - 1]);
	}
	cout <<"\nchuoi sau khi dao nguoc la : " << a;
}
void Hoan_Vi(char &a,char &b) {
	char tam = a;
	a = b;
	b = tam;
}
void Kiem_Tra_Chuoi_Doi_Xung(xau a) {
	xau b;
	int l = strlen(a);
	strcpy_s(b, MAX, a);
	for (int i = 0; i < l / 2; i++) {
		Hoan_Vi(a[i], a[l - i - 1]);
	}
	if (strcmp(a, b)==0) {
		cout << "\nTRUE";
	}
	else {
		cout << "\nFALSE";
	}
	
}