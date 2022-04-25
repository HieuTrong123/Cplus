#pragma once
void Menu() {
	cout << "\n\n\t\t==========MENU=============\n";
	cout << "\n0.ket thuc chuong";
	cout << "\n1.tao danh sach ";
	cout << "\n2.xem danh sach";
	cout << "\n3.cham luong";
	cout << "\n\n\t\t==========MENU=============\n";


}
void XuLyMenu(List& l) {
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
			cout << "\n1.tao danh sach ";
			if (TaoDanhSach(l)) {
				cout << "\n\n\t\tTHANH CONG\n";
			}
			else {
				cout << "\n\n\t\tTHAT BAI\n";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem danh sach";
			cout << "\ndanh sach nhan vien: \n";
			XuatDSNV(l);
			cout << "\ndanh sach cham luong nhan vien: \n";
			XuatDSCL(l);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.cham luong";
			XuatBangLuong(l);
			system("pause");
		}
	}
}