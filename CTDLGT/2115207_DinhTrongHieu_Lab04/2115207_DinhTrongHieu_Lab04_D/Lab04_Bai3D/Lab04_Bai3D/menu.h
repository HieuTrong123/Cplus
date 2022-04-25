#pragma once
void Menu() {
	cout << "\n\n\t\t===========MENU==========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tach danh sach sinh vien thanh 2 danh sach gon nhan vien co luong <=x va cac nhan vien con lai";
	cout << "\n2.tach danh sach nhan vien theo cach luan phien tung nhan vien theo thu tu vao hai danh sach";
	cout << "\n3.dao nguoc dnah sach";
	cout << "\n4.sap danh sach tang dan theo ten,ten trung thi tang dan theo ho,ten va ho dung thi tang dan theo ten lot";
	cout << "\n5.tao danh sach";
	cout << "\n6.xem danh sach";

	cout << "\n\n\t\t===========MENU==========\n";
}
void XuLyMenu(LIST &l) {
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
			cout << "\n1.tach danh sach sinh vien thanh 2 danh sach gon nhan vien co luong <=x va cac nhan vien con lai";
			double x;
			cout << "nhap luong x: ";
			cin >> x;
			Tach_Luong_x(l, x);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.tach danh sach nhan vien theo cach luan phien tung nhan vien theo thu tu vao hai danh sach";
			Tach_LuanPhien(l);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.dao nguoc dnah sach";
			DaoNguoc_DS(l);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.sap danh sach tang dan theo ten,ten trung thi tang dan theo ho,ten va ho dung thi tang dan theo ten lot";
			List_SapTang_Ten_Ho_TLot(l);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tao danh sach";
			if (TapTin_List("Text.txt", l)) {
				cout << "\nthanh cong\n";
			}
			else {
				cout << "\nthat bai\n";
			}
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.xem danh sach";
			Xuat_DSNV(l);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai,hay nhap lai";
		}
	}
}