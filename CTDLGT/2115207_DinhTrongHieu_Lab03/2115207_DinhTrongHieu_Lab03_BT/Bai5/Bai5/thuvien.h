#pragma once
#define MAX 100
int TaoDuLieu(int a[], int& n) {
	ifstream in("text.txt");
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
void XemDuLieu(int a[],int n) {
	for (int i = 0; i < n; i++) {
		cout << '\t' << a[i];
	}
}
void HoanVi(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void ChonTrucTiep(int a[], int n) {
	int cs_min;
	int demLanSS = 0,
		demSwap = 0;
	for (int i = 0; i < n; i++) {
		cs_min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[cs_min]) {
				cs_min = j;
				demLanSS++;
				HoanVi(a[i], a[cs_min]);
				demSwap++;
			}
			else
				demLanSS++;
		}
	}
	cout << "\nso lan thuc hien so sanh la :" << demLanSS;
	cout << "\nso lan thuc hien hoan vi la: " << demSwap;
}
void DoiChoTrucTiep(int a[], int n) {
	
	int demLanSS = 0,
		demSwap = 0;
	for (int i = 0; i < n; i++) {
		
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
				
				demLanSS++;
				HoanVi(a[i], a[i]);
				demSwap++;
			}
			else
				demLanSS++;
		}
	}
	cout << "\nso lan thuc hien so sanh la :" << demLanSS;
	cout << "\nso lan thuc hien hoan vi la: " << demSwap;
}
void ChenTrucTiep(int a[], int n) {
	int x, j;
	int demSoLanSS = 0;
	for (int i = 1; i < n; i++) {
		x = a[i];
		for (j = i - 1; j >= 0 ; j--) {
			if (a[j] > x) {
				a[j + 1] = a[j];
				demSoLanSS++;
			}
			else {
				demSoLanSS++;
			}
			
		}
		a[j + 1] = x;
	}
	cout << "\nso lan thuc hien so sanh la: " << demSoLanSS;
}
void BubleSort(int a[],int n) {
	int demSoLanSS = 0,
		demSoLanSwap = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				demSoLanSS++;
				HoanVi(a[j], a[j - 1]);
				demSoLanSwap++;
			}
			else {
				demSoLanSS++;
			}
		}
	}
	cout << "\nso lan thuc hien so sanh la :" << demSoLanSS;
	cout << "\nso lan thuc hien hoan vi la: " << demSoLanSwap;
}
