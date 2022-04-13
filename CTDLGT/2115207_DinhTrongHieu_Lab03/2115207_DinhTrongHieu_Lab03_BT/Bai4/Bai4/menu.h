#pragma once
void Menu() {

	cout << "\n\n\t\t==============MENU===============";
	cout << "\n0.ket thuc";
	cout << "\n1.tao danh sach";
	cout << "\n2.xem danh sach";
	cout << "\n3.sap xep tang theo muc luong,neu cung luong sap tang dan theo ten,neu cung ten sap xep tang dan theo ho,neu cung ten,ho,luong thi sap xep theo nam sinh";
	

	cout << "\n\n\t\t==============MENU===============";

}
void XuLyMenu(NhanVien ds[], int& n) {
	int luaChon;
	while (true)
	{
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0)
			break;
		else if (luaChon == 1) {
			cout << "\n1.tao danh sach";
			if (TaoDuLieu(ds, n))
				cout << "\n\n\t\tTHANH CONG\n";
			else
				cout << "\n\n\t\tTHAT BAI\n";
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem danh sach";
			XuatDanhSachNV(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.sap xep tang theo muc luong,neu cung luong sap tang dan theo ten,neu cung ten sap xep tang dan theo ho,neu cung ten,ho,luong thi sap xep theo nam sinh";

			cout << "\ndanh sach ban dau la: ";
			XuatDanhSachNV(ds, n);
			Shaker(ds, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XuatDanhSachNV(ds, n);
			system("pause");
		}
		
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai!!";
			system("pause");
		}
	}
}