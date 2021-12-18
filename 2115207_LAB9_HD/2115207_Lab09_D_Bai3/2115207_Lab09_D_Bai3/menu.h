void Menu();
void XuLyMenu(ChuoiDong a);
void Menu() {
	cout << "\n\n\t\t========MENU========\n";
	cout << "\n0.Ket thuc chuong trinh";
	cout << "\n1.Nhap chuoi";
	cout << "\n2.xem chuoi";
	cout << "\n3.tinh chieu dai chuoi";
	cout << "\n4.chen vi tri x vao chuoi tai vi tri cho truoc ";
	cout << "\n5.xoa ky tu tai vi tri cho truoc ";
	cout << "\n6.cat ky tu cuoi chen vao dau";
	cout << "\n7.xoa tat ca ky tu x";
	cout << "\n\n\t\t========MENU========\n";
}
void XuLyMenu(ChuoiDong a) {
	int luaChon;
	char x;
	int vt;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.Nhap chuoi";
			Nhap_Chuoi(a);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem chuoi";
			Xem_Chuoi(a);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tinh chieu dai chuoi";
			cout<<"\nChieu dai chuoi a la : " << TinhChieuDaiChuoi(a);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.chen vi tri x vao chuoi tai vi tri cho truoc ";
			cout << "\nNhap x can chen vao chuoi : ";
			cin >> x;
			cout << "\nNhap vi tri can chen : ";
			cin >> vt;
			if (ChenKT_VT(a, x, vt)) {
				cout << "\nthanh cong";
			}
			else {
				cout << "\nthat bai";
			}

			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.xoa ky tu tai vi tri cho truoc ";
			cout << "\nNhap vi tri can xoa : ";
			cin >> vt;
			if (XoaKT_VT(a, vt)) {
				cout << "\nthanh cong";
			}
			else {
				cout << "\nthat bai";
			}
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.cat ky tu cuoi chen vao dau";
			CatCuoiChenDau(a);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.xoa tat ca ky tu x";
			cout << "\nNhap x : ";
			cin >> x;
			Xoa_x(a, x);
			system("pause");
		}
		else {
			cout << "\nLua chon cua ban khong ton tai !!";
			system("pause");
		}


	}
}