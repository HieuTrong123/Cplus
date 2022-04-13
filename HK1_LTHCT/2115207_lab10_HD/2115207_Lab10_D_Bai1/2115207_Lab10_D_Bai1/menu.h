void Menu();
void XuLyMenu(DayDong a, int& n);
void Menu() {
	cout << "\n\n\t\t===========MENU===========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.nhap tu dong mang";
	cout << "\n2.xem mang";
	cout << "\n3.tinh tong cac phan tu trong mang";
	cout << "\n4.tinh tich cac phan tu trong mang";
	cout << "\n5.tinh gia tri nho nhat cua mang";
	cout << "\n6.tinh gia tri lon nhat trong mang";
	cout << "\n7.tinh tong cac so nguyen to";
	cout << "\n8.tinh vi tri cuoi cung x xuat hien trong mang,neu co";
	cout << "\n9.dem so duong chay cua mang";
	cout << "\n\n\t\t===========MENU===========\n";
}
void XuLyMenu(DayDong a ,int &n) {
	int luaChon ,x;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {

			cout << "\n1.nhap tu dong mang";
			cout << "nhap so phan tu cua mang dong : ";
			cin >> n;
			a = new int[n];
			NhapTuDong(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem mang";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tinh tong cac phan tu trong mang";
			cout<<TinhTong(a, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tinh tich cac phan tu trong mang";
			cout<<TinhTich(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tinh gia tri nho nhat cua mang";
			cout<<TinhMin(a, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.tinh gia tri lon nhat trong mang";
			cout<<TinhMax(a, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.tinh tong cac so nguyen to";
			cout<<TinhTong_NT(a, n);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.tinh vi tri cuoi cung x xuat hien trong mang,neu co";
			cout << "\nnhap x: ";
			cin >> x;
			cout<<Tim_Cscc(a, n, x);
			system("pause");
		}
		else if (luaChon == 9) {
			cout << "\n9.dem so duong chay cua mang";

			cout<<DemSo_DC(a, n);
			system("pause");
		}
		else {
			cout << "\mlua chon khong ton tai hay nhap lai!!";
			system("pause");
		}
	
	}
}