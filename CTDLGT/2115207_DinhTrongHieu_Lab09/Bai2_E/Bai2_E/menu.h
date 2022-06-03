#pragma once
void Menu() {
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.Tao bang diem hoc vien";
	cout << "\n2.xem bang diem hoc vien";
	cout << "\n3.thay doi dia chi cua hoc vien khi biet ma hoc vien";
	cout << "\n4.huy hoc vien co ma hoc vien cho truoc";
	cout << "\n5.huy hoc vien co diem<5";
}
void XuLyMenu(NODE*& p) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			system("cls");
			cout << "\n1.Tao bang diem hoc vien";
			if (TaoDuLieu(p)) {
				cout << "\nTHANH CONG";
			}
			else {
				cout << "\nTHAT BAI";
			}
			cout << "\n";
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem bang diem hoc vien";
			system("cls");
			XuatBangDiem(p);
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3.thay doi dia chi cua hoc vien khi biet ma hoc vien";
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(p);
			char maHV[30];
			cout << "\nnhap ma hoc vien can thay doi dia chi: ";
			cin >> maHV;
			ThayDoiDiaChi(p, maHV);
			cout << "\ndanh sach sau khi thay doi la: ";
			XuatBangDiem(p);
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4.huy hoc vien co ma hoc vien cho truoc";
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(p);
			char maHV[30];
			cout << "\nnhap ma hoc vien can thay doi dia chi: ";
			cin >> maHV;
			Remove(p, maHV);
			cout << "\ndanh sach xoa la: ";
			XuatBangDiem(p);
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5.huy hoc vien co diem<5";
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(p);
			ReMoveDK(p, p);
			cout << "\ndanh sach xoa la: ";
			XuatBangDiem(p);
			system("pause");
		}
	}
	
}