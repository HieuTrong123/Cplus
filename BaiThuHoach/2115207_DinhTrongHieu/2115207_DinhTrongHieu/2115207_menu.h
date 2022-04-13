void Menu();
void XuLyMenu(BangDiem* ds, int& n);

void Menu() {
	cout << "\n\n\t\t============MENU============\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao bang diem mon hoc";
	cout << "\n2.xem bang diem mon hoc";
	cout << "\n3.xuat sinh vien co ma sinh vien cho truoc";
	cout << "\n4.xuat cac sinh vien co ten la HOA thuoc lop CTK19";
	cout << "\n5.xuat cac sinh vien co diem thap nhat";
	cout << "\n\n\t\t============END=============\n";
}
void XuLyMenu(BangDiem* ds,int &n) {
	int luaChon;
	char filename[15];
	char maSV[8];
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			cout << "\n0.ket thuc chuong trinh";
			break;
			system("pause");
			
		}
		else if (luaChon == 1) {
			
			system("cls");
			cout << "\n1.tao bang diem mon hoc";
			cout << "\nNhap file ban de doc thong tin: ";
			cin >> filename;
			if (TaoBangDiem(filename, ds, n)) {
				cout << "\nThanh cong!!" << endl;
			}
			else {
				cout << "\nThat bai!!" << endl;
			}
			system("pause");
		}
		else if (luaChon == 2) {
			
			system("cls");
			cout << "\n2.xem bang diem mon hoc";
			XuatDanhSachBD(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			
			system("cls");
			cout << "\n3.xuat sinh vien co ma sinh vien cho truoc";
			cout << "\nDanh sach ban dau : ";
			XuatDanhSachBD(ds, n);
			cout << "\nNhap maSV: ";
			cin >> maSV;
			XuatSinhViencoMaSVChoTruoc(ds, n, maSV);
			system("pause");
		}
		else if (luaChon == 4) {
		
			system("cls");
			cout << "\n4.xuat cac sinh vien co ten la HOA thuoc lop CTK19";
			cout << "\nDanh sach ban dau : ";
			XuatDanhSachBD(ds, n);
			SinhVienTenHoaCtk39(ds, n);
			system("pause");
		}
		else if (luaChon == 5) {
		
			system("cls");
			cout << "\n5.xuat cac sinh vien co diem thap nhat";
			cout << "\nDanh sach ban dau : ";
			XuatDanhSachBD(ds, n);
			XuatSinhVienDiemThapNhat(ds, n);
			system("pause");
		}
		else {
			system("cls");
			cout << "\nlua chon khong ton tai hay nhap lai";
			system("pause");
		}

	}
}
