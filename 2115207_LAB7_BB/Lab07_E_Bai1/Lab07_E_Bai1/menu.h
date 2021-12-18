void Xu_Ly_Menu(String a);
void Menu();
void Menu() {
	cout << "\n\n\t\t=========MENU==========\n";
	cout << "\n0.ket thuc ";
	cout << "\n1.nhap chuoi";
	cout << "\n2.xem chuoi";
	cout << "\n3.tinh chieu dai chuoi";
	cout << "\n4.chen ky tu x vao dau chuoi";
	cout << "\n5.chen ky tu x vao cuoi chuoi";
	cout << "\n6.chen ky tu x vao vi tri a cho truoc"; 
	cout << "\n7.xoa ky tu dau chuoi";
	cout << "\n8.xoa ky tu cuoi chuoi";
	cout << "\n9.xoa ky tu tai vi tri cho truoc";
	cout << "\n10.cat ky tu dau cuoi roi chen vao ky tu cuoi chuoi";
	cout << "\n11.cat ky tu cuoi chuoi roi chen vao ky tu dau chuoi";
	cout << "\n12.xoa tat ca cac ky tu x cho truoc khoi chuoi";
	cout << "\n13,thay the tat ca ky tu x trng chuoi thanh kys tu y";
	cout << "\n\n\t\t==========END==========\n";
}
void Xu_Ly_Menu(String a) {

	int luaChon ,vt;
	char x ,y;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			cout << "\n0.ket thuc ";
			system("pause");
			break;
		}
		else if (luaChon==1) {
			cout << "\n1.nhap chuoi";
			cout << "\nNhap mang a: ";
			cin.ignore();
			gets_s(a, MAX);
			cout << "\nChuoi a la : " << a;
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem chuoi";
			cout << "\nchuoi a la : ";
			cout << a;
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tinh chieu dai chuoi";
			cout << "\ndo dai chuoi a la : " << TinhChieuDaiChuoi(a);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.chen ky tu x vao dau chuoi";
			cout << "\nNhap ky tu can chen : ";
			cin >> x;
			ChenDau_KT(a, x);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.chen ky tu x vao cuoi chuoi";
			cout << "\nNhap ky tu can chen : ";
			cin >> x;
			ChenCuoi_KT(a, x);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.chen ky tu x vao vi tri a cho truoc";
			cout << "\nNhap ky tu can chen : ";
			cin >> x;
			cout << "\nNhap vi tri can chen : ";
			cin >> vt;
			if (ChenKT_VT(a, x, vt) == 1) {
				cout <<"\nMang a sau khi chen la : " << a;
			}
			else {
				cout << "\nvi tri ba can chen ngoai pham vi cua chuoi!! ";
			}
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.xoa ky tu dau chuoi";
			XoaDau_KT(a);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.xoa ky tu cuoi chuoi";
			XoaCuoi_KT(a);
			system("pause");
		}
		else if (luaChon == 9) {
			cout << "\n9.xoa ky tu tai vi tri cho truoc";
			cout << "\nNhap vi tri can xoa : ";
			cin >> vt;
			if (XoaKT_VT(a, vt) == 1) {
				cout << "mang a sau khi xoa la : " << a;
			}
			else {
				cout << "\nvi tri ba can Xoa ngoai pham vi cua chuoi!! ";
			}
			system("pause");
		}
		else if (luaChon == 10) {
			cout << "\n10.cat ky tu dau cuoi roi chen vao ky tu cuoi chuoi";
			CatDauChenCuoi(a);
			system("pause");
		}
		else if (luaChon == 11) {
			cout << "\n11.cat ky tu cuoi chuoi roi chen vao ky tu dau chuoi";
			CatCuoiChenDau(a);
			system("pause");
		}
		else if (luaChon == 12) {
			cout << "\n12.xoa tat ca cac ky tu x cho truoc khoi chuoi";
			cout << "\nNhap ky tu can xoa : ";
			cin >> x;
			Xoa_x(a, x);
			system("pause");
		}
		else if (luaChon == 13) {
			cout << "\n13,thay the tat ca ky tu x trng chuoi thanh ky tu y";
			cout << "\nNhap ky tu x : ";
			cin >> x;
			cout << "\nNhap ky tu y : ";
			cin >> y;
			Thay_x_Bang_y(a, x, y);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai!!";
			system("pause");
		}


	}
}

