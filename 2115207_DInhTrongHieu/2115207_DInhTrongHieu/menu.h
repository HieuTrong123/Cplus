void Menu();
void XuLyMenu(NhanVien* ds, int& n);
void Menu() {
	cout << "\n\n\t\t===========MENU==============\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao danh sach nhan vien";
	cout << "\n2.xem danh sach nhan vien";
	cout << "\n3.xuat danh sach nhan vien co nam sinh cho truoc";
	cout << "\n4.xuat danh sach sinh vien co luong thap nhat";
	cout << "\n5.xoa nhan vien co que quan cho truoc ra khoi danh sach nhan vien";
	cout << "\n\n\t\t===========END===============\n";
}
void XuLyMenu(NhanVien* ds,int &n) {
	int luaChon;
	char filename[15];
	int namSinh;
	char que[25];
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua Chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			cout << "\n0.ket thuc chuong trinh";
			system("pause");
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao danh sach nhan vien";
			cout << "\nNhap file can doc: ";
			cin >> filename;
			if (Doc_Thong_Tin(filename, ds, n)) {
				cout << "\nThanh cong!!";
			}
			else {
				cout << "\nThat bai!!";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem danh sach nhan vien";
			XuatDanhSachNhanVien(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3,xuat danh sach nhan vien co nam sinh cho truoc";
			cout << "\nNhap nam sinh: ";
			cin >> namSinh;
			XuatNVCoNamSinhCHoTruoc(ds, n, namSinh);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.xuat danh sach sinh vien co luong thap nhat";
			XuatNhanVienLuongMin(ds, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.xoa nhan vien co que quan cho truoc ra khoi danh sach nhan vien";
			cout << "\nNhap que quan: ";
			cin >> que;
			XoaNhanVien(ds, n, que);
			cout << "\n\n\t\t======NHAN VIEN CON LAI SAI KHI XOA========\n";
			XuatDanhSachNhanVien(ds, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai lua chon khac!!";
			system("pause");
		}
	}
}