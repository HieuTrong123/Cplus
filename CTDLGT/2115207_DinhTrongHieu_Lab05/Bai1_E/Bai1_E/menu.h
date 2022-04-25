#pragma once
void Menu() {
	cout << "\n\n\t\t==============MENU==============\n";
	cout << "\n0. Ket thuc chuong trinh ";
	cout << "\n1. Nhap du lieu cua tap hop";
	cout << "\n2. Xem du lieu tap hop";
	cout << "\n3. Giao 2 tap hop";
	cout << "\n4. Hop 2 tap hop";
	cout << "\n5. Hieu 2 tap hop";
	cout << "\n6. Hieu doi xung 2 tap hop";
	cout << "\n7. Tinh phan bu cua A trong U";
	/*cout << "\n7. Tích Descartes 2 tập hợp";*/
	cout << "\n8. Kiem tra phan tu co thuoc tap hop";
	/*cout << "\n9. Kiểm tra quan hệ bao hàm giữa 2 tập";
	cout << "\n10. Tính lực lương tập hợp";*/
	cout << "\n\n\t\t==============MENU==============\n";
}
void XuLyMenu(Node& a, Node& b, Node& u) {
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
			cout << "\n1. Nhap du lieu cho tap hop";

			if (TaoThongTin(a, b, u)) {
				cout << "\nThanh cong\n";
			}
			else {
				cout << "\nThat bai\n";
			}
			cout << endl;
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2. Xem du lieu tap hop";
			cout << "\nList a la : \n";
			XemDuLieu(a);
			cout << "\nList b la : \n";
			XemDuLieu(b);
			cout << "\nList u la : \n";
			XemDuLieu(u);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3. Giao 2 tap hop";
			cout << "\nList a la : \n";
			XemDuLieu(a);
			cout << "\nList b la : \n";
			XemDuLieu(b);
			cout << "\nlist giao cua a va b : \n";
			XemDuLieu(GiaoHaiTapHop(a, b));
			cout << endl;
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4. Hop 2 tap hop";

			cout << "\nList a la : \n";
			XemDuLieu(a);
			cout << "\nList b la : \n";
			XemDuLieu(b);
			cout << "\nlist hop cua a va b : \n";
			XemDuLieu(HopHaiTapHop(a, b));
			cout << endl;
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5. Hieu 2 tap hop";
			cout << "\nList a la : \n";
			XemDuLieu(a);
			cout << "\nList b la : \n";
			XemDuLieu(b);
			cout << "\nHieu a/b la: \n";
			XemDuLieu(HieuHaiTapHop(a, b));
			cout << "\nHieu b/a la: \n";
			XemDuLieu(HieuHaiTapHop(b, a));
			cout << endl;
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6. Hieu doi xung 2 tap hop";
			cout << "\nList a la : \n";
			XemDuLieu(a);
			cout << "\nList b la : \n";
			XemDuLieu(b);
			cout << "\nHieu doi xung 2 tap hop a,b: \n";
			XemDuLieu(HieuDoiXung(a, b));
			cout << endl;
			system("pause");
		}
		else if (luaChon == 7)
		{
			cout << "\n7. Tinh phan bu cua A trong U";
			cout << "\nList a la : \n";
			XemDuLieu(a);
			cout << "\nList u la : \n";
			XemDuLieu(u);
			cout << "\nPhan bu cua A trong U: \n";
			XemDuLieu(HieuHaiTapHop(u, a));
			cout << endl;
			system("pause");
		}
		/*else if (luaChon == 7) {
			cout << "\n7. Tích Descartes 2 tập hợp";
			cout << "\nLisr a la : \n";
			XemDuLieu(a);
			cout << "\nLisr b la : \n";
			XemDuLieu(b);
			cout << "\ntich 2 tap hop: ";
			Tich(a, b);
			system("pause");
		}*/
		else if (luaChon == 8) {
			cout << "\n8. Kiem tra phan tu co thuoc tap hop";
			cout << "\nLisr a la : \n";
			XemDuLieu(a);
			/*cout << "\nLisr b la : \n";
			XemDuLieu(b);*/
			int x;
			cout << "\nNhap phan tu can kiem tra: ";
			cin >> x;
			if (KiemTraXcoThuocTapHop(a, x)) {
				cout << endl <<  x << " thuoc a";
			}
			else {
				cout << endl <<  x << " khong thuoc a";
			}
			/*if (KiemTraXcoThuocTapHop(b, x)) {
				cout << "\nx thuoc b";
			}
			else {
				cout << "\nx khong thuoc b";
			}*/
			cout << endl;
			system("pause");
		}
		/*	else if (luaChon == 9) {
				cout << "\n9. Kiểm tra quan hệ bao hàm giữa 2 tập";
				cout << "\nLisr a la : \n";
				XemDuLieu(a);
				cout << "\nLisr b la : \n";
				XemDuLieu(b);
				if (KiemTraBaoHam(a, b)) {
					cout << "\na thuoc b";
				}
				else {
					cout << "\na khong thuoc b";
				}
				system("pause");
			}
			else if (luaChon == 10)
			{
				cout << "\n10. Tính lực lương tập hợp";
				cout << "\nLisr a la : \n";
				XemDuLieu(a);
				cout << "\nLisr b la : \n";
				XemDuLieu(b);
				cout << "\nluc luong tap hop a la: " << TinhLucLuong(a);
				cout << "\nluc luong tap hop b la: " << TinhLucLuong(b);

				system("pause");
			}*/
	}
}