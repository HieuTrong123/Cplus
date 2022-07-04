#pragma once
void Menu() {
	cout << "\n\n\t\t=================MENU==================\n";
	cout << "\n0. thoat chuong trinh ";
	cout << "\n1. tao danh sach";
	cout << "\n2. xuat danh sach";
	cout << "\n3. sua thong tin dia chi nhan vien co ma LD24042 thanh Lam_Dong";
	cout << "\n4. huy nhan vien co ma LD13452";
	cout << "\n5. Tim muc cua nhan vien LD24042";
	cout << "\n\n\t\t=================MENU==================\n";

}
void XuLyMenu(BSTree*& root) {
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
			cout << "\n1. tao danh sach";
			if (NhapTuFile(root))
				cout << "\nthanh cong\n";
			else {
				cout << "\nthat bai\n";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2. xuat danh sach";
			XuatDS_LRN(root);
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3. sua thong tin dia chi nhan vien co ma LD24042 thanh Lam_Dong";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_LRN(root);
			SuaThongTin(root, "LD24042");
			cout << "\ndanh sach sau khi chinh sua la: ";
			XuatDS_LRN(root);
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4. huy nhan vien co ma LD13452";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_LRN(root);
			XoaNV(root);
			cout << "\nDanh sach luc sau la: ";
			XuatDS_LRN(root);
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5. Tim muc cua nhan vien LD24042";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_LRN(root);
			cout <<"\nSo Muc cua LD24042 la: " << SoMucBSTree(root, "LD24042");
			system("pause");
		}
	}
}