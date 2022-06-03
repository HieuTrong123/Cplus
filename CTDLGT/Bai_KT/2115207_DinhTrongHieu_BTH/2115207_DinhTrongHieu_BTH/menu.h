#pragma once
void Menu() {
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.Tao bang diem hoc vien";
	cout << "\n2.Xuat bang diem hoc vien";
	cout << "\n3.xuat thong tin hoc vien khi biet ma hoc vien";
	cout << "\n4.xac dinh so nut cua cay";
	cout << "\n5.xac dinh chieu cao cua cay";
	cout << "\n6.xac dinh muc cua nut khi biet ma hoc vien";
	cout << "\n7.xuat cac hoc vien co ten cho truoc";
	cout << "\n8.huy nut khi biet ma hoc vien";
}
void XuLyMenu(NODE*& root) {
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
			cout << "\n1.Tao bang diem hoc vien";
			if (NhapTuFile(root)) {
				cout << "\nThanhCong";
			}
			else {
				cout << "\nthat bai";
			}
			cout << endl;
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2.Xuat bang diem hoc vien";
			XuatBangDiem(root);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\m3.xuat thong tin hoc vien khi biet ma hoc vien";
			char maHV[10];
			cout << "\nnhap ma HV: ";
			cin >> maHV;
			cout << "\nhoc vien co maHV : " << maHV << " la: \n";
			TimHVCoMaHV(root, maHV);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4.xac dinh so nut cua cay";
			int dem = 0;
			SoNODE(root, dem);
			cout << "\nso node cua cay la: " << dem;
			cout << endl;
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5.xac dinh chieu cao cua cay";
			cout << "\nchieu cao cua cay la: " << TinhChieuCao(root);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 6) {
			system("cls");
			cout << "\n6.xac dinh muc cua nut khi biet ma hoc vien";
			char maHV[10];
			cout << "\nnhap ma HV: ";
			cin >> maHV;
			cout << "\nhoc vien co maHV : " << maHV << " co so muc la: \n";
			cout<<TimMuc_x(root, maHV);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 7) {
			system("cls");
			cout << "\n7.xuat cac hoc vien co ten cho truoc";
			char ten[10];
			cout << "\nnhap ten : ";
			cin >> ten;
			cout << "\nthong tin hoc vien do la: \n";
			XuatHocVienCoTen(root, ten);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 8) {
			system("cls");
			cout << "\n8.huy nut khi biet ma hoc vien";
			cout << "\ndanh sach ban dau la: ";

			XuatBangDiem(root);
			cout << "\nnhap ma HV: ";
			char maHV[10];
			cin >> maHV;
			Remove(root, maHV);
			cout << "\ndanh sach sau khi xoa la: ";
				XuatBangDiem(root);
			cout << endl;
			system("pause");
		}
	}
}