void Menu();
void XuLy_Menu(char* a ,int &n);
void Menu() {
	cout << "\n\n\t\t==========MENU==========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.Nhap Chuoi";
	cout << "\n2.Xem Chuoi";
	cout << "\n3.dem so khoang trang trong chuoi";
	cout << "\n4.tim vi tri xuat hien cua chuoi t trong s .neu s khong chua t thi tra ve -1";
	cout << "\n5.tim vi tri xuat hien dau tien cua X cho truoc trong chuoi s ";
	cout << "\n6.dao vi tri cua tu dau va tu cuoi trong chuoi s";
	cout << "\n7.doi ky tu dau tien cua chuoi s sang hoa cac tu con lai de thuong ";
	cout << "\n8.liet ke tung ky tu va so lan xuat hien cua no trong chuoi s";
	cout << "\n9.dem so tu trong chuoi s";
	cout << "\n\n\t\t==========MENU==========\n";
}
void XuLy_Menu(char *a ,int &n) {
	int luaChon ,m;
	char x;
	while(true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.Nhap Chuoi";
			cout << "\nNhap do dai cua chuoi : ";
			cin >> n;
			a = new char[n];
			NhapMang(a,n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.Xem Chuoi";
			XuatChuoi(a);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.dem so khoang trang trong chuoi";
			cout << "\nso luong khoang trang trong chuoi la : "<<Dem_Khoang_Trang(a);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tim vi tri xuat hien cua chuoi t trong s .neu s khong chua t thi tra ve -1";
			cout << "\nnhap do dai chuoi can tim kiem : ";
			cin >> m;
			cin.ignore();
			char* b = new char[m];
			
			cout << "\nNhap chuoi can tim kiem : ";
			gets_s(b, m);
			cout << "\nXuat chuoi  : " << b;
			cout<<"\nvi tri cua chuoi b la : "<<KiemTraChuoiTrongChuoi(a, b);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tim vi tri xuat hien dau tien cua X cho truoc trong chuoi s ";
			cout << "\nnhap x : ";
			cin >> x;
			cout << "\mvi tri cia x trong chuoi la : "<<TimViTriXDauTien(a, x);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.dao vi tri cua tu dau va tu cuoi trong chuoi s";
			Dao_Nguoc_Chuoi(a);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.doi ky tu dau tien cua chuoi s sang hoa cac tu con lai de thuong ";
			Nan_Chuoi(a);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.liet ke tung ky tu va so lan xuat hien cua no trong chuoi s";
			DemSoLuongKyTu(a, n);
			system("pause");
		}
		else if (luaChon == 9) {
			cout << "\n9.dem so tu trong chuoi s";
			cout << "\nso tu trong chuoi la : "<<Dem_So_Tu(a);
			system("pause");
		}
		else {
			cout << "\nLua chon cua ban khong ton tai!!";
			system("pause");
		}
	}
}