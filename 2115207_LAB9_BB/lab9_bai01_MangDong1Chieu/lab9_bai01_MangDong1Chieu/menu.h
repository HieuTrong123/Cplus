void Menu();
void XuLyMenu(int* a, int& n);
void Menu() {
	cout << "\n\n\t\t========MENU=========\n";
	cout << "\n0.thoat khoi chuong trinh";
	cout << "\n1.nhap tu dong mang";
	cout << "\n2.xem mang";
	cout << "\n3.tinh gia tri lon nhat";
	cout << "\n4.tinh tong cac phan tu cau mang";
	cout << "\n5.dem so duong trong day";
	cout << "\n6.dem so la xuat hien cua x trong day";
	cout << "\n\n\t\t========MENU=========\n";
}
void XuLyMenu(int* a, int& n) {
	int luaChon ,x;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0)
			break;
		else if (luaChon == 1) {
			cout << "\nNhap so phan tu cua mang dong : ";
			cin >> n;
			a = new int[n];
			cout << "\n1.nhap tu dong mang";
			Nhap_Tu_Dong(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem mang";
			Xem_Mang(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tinh gia tri lon nhat";
			cout << "\ngia tri lon nhat cua mang la : " << Tim_Max(a, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tinh tong cac phan tu cau mang";
			cout << "\ntong cac phan tu trong mang la : " << Tinh_Tong(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.dem so duong trong day";
			cout << "\nso luong so duong trong day la : " << Dem_SO_Duong(a, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.dem so la xuat hien cua x trong day";
			cout << "\nNhap Gia tri x : ";
			cin >> x;
			cout << "\nso luong cua x trong mang la : " << Dem_X(a, n, x);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai!!!";
			system("pause");
		}
	}
}