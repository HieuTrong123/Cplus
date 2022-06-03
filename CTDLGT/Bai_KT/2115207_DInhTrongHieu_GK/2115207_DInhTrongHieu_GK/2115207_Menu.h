#pragma once
void Menu() {
	cout << "\n\n\t\t=====================MENU====================\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao bang diem mon hoc";
	cout << "\n2.xuat bang diem mon hoc";
	cout << "\n3.xuat thong tin hoc vien co que quan lam dong va co diem >5";
	cout << "\n4.xuat cac hoc vien co ten HOA va co nam sinh 1990";
	cout << "\n5.xuat cac hoc vien co nam sinh 1990 va co diem <5";
	cout << "\n\n\t\t=====================MENU====================\n";
}
void XuLyMenu(LIST& l) {
	int luaChon;
	while (true)
	{
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			system("cls");
			char filename[20];
			cout << "\n1.tao bang diem mon hoc";
			cout << "\nnhap ten file chua thong tin can thiet: ";
			cin >> filename;
			if (TaoDuLieu(l, filename))
				cout << "\n\n\t\tTHANH CONG\n";
			else 
				cout << "\n\n\t\tTHAT BAI\n";
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2.xuat bang diem mon hoc";
			XuatBangDiem(l);
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3.xuat thong tin hoc vien co que quan lam dong va co diem >5";
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(l);
			cout << "\ndanh sach can tim la: ";
			HocVienQueLam_Dong(l);
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4.xuat cac hoc vien co ten HOA va co nam sinh 1999";
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(l);
			cout << "\ndanh sach can tim la: ";
			HocVienTenHOA_1990(l);
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5.xuat cac hoc vien co nam sinh 1999 va co diem <5";
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(l);
			cout << "\ndanh sach can tim la: ";
			HocVienTenDiem_BeHon5_1990(l);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai lua chon khac!!";
		}
	}
}