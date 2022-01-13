void Menu() {
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.doc file thong tin sinh vien";
	cout << "\n2.Xuat ra file Text1.txt danh sach sinh vien";
	cout << "\n3.sap xep theo lop";
	cout << "\n4.xep loai sinh vien";
	cout << "\n5.tim kiem sinh vien co diem cao nhat tai lop";
	cout << "\n6.xuat sinh vien theo hoc luc";
	cout << "\n\n\t\t=========MENU=========\n";
}void XuLyMenu(vector<SinhVien>& ds) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.doc file thong tin sinh vien";
			if (DocFile(ds)) {
				cout << "\nthanh cong!";
			}
			else {
				cout << "\nthat bai!";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.Xuat ra file Text1.txt danh sach sinh vien";
			if (XuatDanhSachSinhVien(ds)) {
				cout << "\nthanh cong!";
			}
			else {
				cout << "\nthat bai!";
			}
			system("pause");

		}
		else if (luaChon == 3) {
			cout << "\n3.sap xep theo lop";
			SapXepTheoLop(ds);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.xep loai sinh vien";
			XepLoaiSinhVien(ds);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tim kiem sinh vien co diem cao nhat tai lop";
			out.open("Text1.txt");
			TimKiemSinhVien(ds, "ctk37");
			TimKiemSinhVien(ds, "ctk38");
			TimKiemSinhVien(ds, "ctk39");
			out.close();
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.xuat sinh vien theo hoc luc";
			XuatTheoXepLoai(ds);
			system("pause");
		}
		else {
			cout << "\nlua chon khong ton tai hay nhap lai";
			system("pause");
		}
	}
}