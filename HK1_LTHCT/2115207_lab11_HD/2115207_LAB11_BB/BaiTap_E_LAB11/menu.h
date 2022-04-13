


void Menu() {
	cout << "\n\n\t\t=========MENU==========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.chuyen du lieu cua tap tin vao mang 1 chieu truong hop text1";
	cout << "\n2.chuyen du lieu cua tap tin vao mang 1 chieu truong hop text2";
	cout << "\n3.chuyen du lieu cua tap tin cau truc vao mang cau truc";
	cout << "\n\n\t\t=========MENU==========\n";
}
void XuLyMenu() {
	int luaChon ,a[100];
	NhanVien ds[100];
	int n;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.chuyen du lieu cua tap tin vao mang 1 chieu truong hop text1";
			cout << "\nmang duoc doc tu file la : ";
			NhapVaoMang1ChieuText1("Text1.txt", a, n);
			for (int i = 0; i < n; i++) {
				cout << a[i] << '\t';
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.chuyen du lieu cua tap tin vao mang 1 chieu truong hop text2";
			cout << "\nmang duoc doc tu file la : ";
			NhapVaoMang1ChieuText2("Text2.txt", a, n);
			for (int i = 0; i < n; i++) {
				cout << a[i] << '\t';
			}
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.chuyen du lieu cua tap tin cau truc vao mang cau truc";
			NhapFileNV("Text3.txt", ds, n);
			cout << "\nDanh sach nhan vien la : ";
			XuatNV(ds, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai!!!";
			system("pause");
		}
	}
}