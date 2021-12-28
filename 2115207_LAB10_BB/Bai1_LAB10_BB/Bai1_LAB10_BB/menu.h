void Menu();
void XuLyMenu();
void Menu() {
	cout << "\n\n\t\t===========MENU===========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.dao nguoc so nguyen duong n";
	cout << "\n2.dem so luong cac so cua so nguyen duong n";
	cout << "\n3.tim chu so co gia tri lon nhat trong cac so nguyen duong";
	cout << "\n4.doi sang he nhi phan so nguyen duong n";
	cout << "\n5.tim chu so dau tien trong n";
	cout << "\n\n\t\t===========MENU===========\n";
}
void XuLyMenu() {
	int luaChon ,n;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.dao nguoc so nguyen duong n";
			cout << "\nNhap so can dao nguoc: ";
			cin >> n;
			cout<<"\nso sau kgi dao nguoc la : " << DaoNguocSo(n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.dem so luong cac so cua so nguyen duong n";
			cout << "\nNhap so n: ";
			cin >> n;
			cout<<"\nso luong chu so la : " << DemSoLuongSoDuong(n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tim chu so co gia tri lon nhat trong cac so nguyen duong";
			cout << "\nNhap so n: ";
			cin >> n;
			cout<<"\nchu so lon nhat la: " << TimChuSoLonNhat(n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.doi sang he nhi phan so nguyen duong n";
			cout << "\nNhap so n: ";
			cin >> n;
			DoiHeSo(n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tim chu so dau tien trong n";
			cout << "\nNhap so n: ";
			cin >> n;
			cout<<"\nchu so dau tien la : " << TimChuSoDauTien(n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai!!";
			system("pause");
		}
	}
}
