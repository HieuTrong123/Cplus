void Menu();
void XuLyMenu(int *a, int& n);
void Menu() {
	cout << "\n\n\t\t========MENU========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.nhap tu dong";
	cout << "\n2.xem mang";
	cout << "\n3.dem so lan xuat hien cua x trong day";
	cout << "\n4.dem so cac so nguyen to trong day";
	cout << "\n\n\t\t========MENU========\n";
}
void XuLyMenu(int *a,int &n) {
	int luaChon ,x;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.nhap tu dong";
			cout << "\nNhap so phan tu cua mang: ";
			cin >> n;
			a = new int[n];
			NhapTuDong(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem mang";
			XemMang(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.dem so lan xuat hien cua x trong day";
			cout << "\nNhap x: ";
			cin >> x;
			cout<<"\nso luong x trong mang la: "<<DemX(a, n, x);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.dem so cac so nguyen to trong day";
			cout << "\nso luong so nguyen to trong mang la: " << DemSoNT(a, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai!!";
			system("pause");
		}
	}

}

