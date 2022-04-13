#pragma once
void Menu() {
	cout << "\n\n\t\t=========MENU==========";
	cout << "\n0.Thoat khoi chuong trinh";
	cout << "\n1.doc thong tin nhan vien";
	cout << "\n2.xem danh sach nhan vien";
	cout << "\n3.tinh luong nhan vien theo thang";

	cout << "\n\n\t\t=========MENU==========";
}
void XuLyMenu(NhanVien* ds,int& n) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			system("cls");
			cout << "\n0.Thoat khoi chuong trinh";
			system("pause");
			break;
		}
		else if (luaChon == 1) {
			system("cls");
			cout << "\n1.doc thong tin nhan vien";
			if (Nhap_Thong_Tin(ds, n)) {
				cout << "\nThanh Cong";
			}
			else {
				cout << "\nThat bai";
			}
			system("pause");
			
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2.xem danh sach nhan vien";
			XuatDanhSach(ds, n);
			system("pause");

		}
		else if (luaChon == 3) {
			
			system("cls");
			
			cout << "\n3.tinh luong nhan vien theo thang";
					
			LuongThucNhan(ds, n);
			cout << "\nDanh sach luong nhan vien la: ";
			XuatBangLuong(ds, n);
			system("pause");

		}
		else  {
			system("cls");
			cout << "\nkhong ton tai lua chon!!";
			system("pause");

		}
	}
}
