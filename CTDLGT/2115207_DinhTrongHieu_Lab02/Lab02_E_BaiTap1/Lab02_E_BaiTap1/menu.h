#pragma once
void XuatMenu() {
	cout << "\n\n\t\t==========MENU===========\n";
	cout << "\n0.ket thuc";
	cout << "\n1.tao danh sach nhan vien";
	cout << "\n2.xem danh sach nhan vien";
	cout << "\n3.tim kiem theo ho,ten";
	cout << "\n4.tim kiem nam sinh";
	cout << "\n5.tim kiem theo ho,ten va nam sinh";
	cout << "\n6.tim kiem theo ten va dia chi";
	cout << "\n7.tim kiem theo nam sinh va luong";
	cout << "\n8.tim kiem nhi phan theo ma nhan vien khi cho truoc ma nhan vien";
	cout << "\n\n\t\t==========MENU===========\n";
}
void XuLyMenu(NhanVien ds[],int& n) {
	int luaChon;
	char ho[11];
	char ten[11];
	char nam[10];
	while (true) {
		system("cls");
		XuatMenu();
		cout << "nhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao danh sach nhan vien";
			char filename[20];
			cout << "\nnhap ten file chua danh sach nhan vien: ";
			cin >> filename;
			if (Tao_DSNV(filename, ds, n)) {
				cout << "\n\n\t\tthanh cong";
			}
			else {
				cout << "\n\nt\t\tthat bai";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem danh sach nhan vien";
			XuatDSNV(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tim kiem theo ho,ten";
			
			cout << "\nnhap ho : ";
			cin >> ho;
			cout << "\nnhap ten: ";
			cin >> ten;
			TimTheoHoTen(ds, n, ho, ten);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tim kiem nam sinh";
			
			cout<<"\nnhap nam sinh can tim: ";
			cin >> nam;
			TimKiemNamSinh(ds, n, nam);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tim kiem theo ho,ten va nam sinh";
			cout << "\nnhap ho : ";
			cin >> ho;
			cout << "\nnhap ten: ";
			cin >> ten;
			cout << "\nnhap nam sinh can tim: ";
			cin >> nam;
			TimTheoHoTenNamSinh(ds, n, ho, ten, nam);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.tim kiem theo ten va dia chi";
			cout << "\nnhap ten: ";
			cin >> ten;
			char diaChi[16];
			cout << "\nnhap dia chi can tim: ";
			cin >> diaChi;
			TimTheoDiaChiTen(ds, n, diaChi, ten);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.tim kiem theo nam sinh va luong";
			double luong;
			cout << "\nNhap luong can tim: ";
			cin >> luong;
			cout << "\nnhap nam sinh can tim: ";
			cin >> nam;
			TimKiemNamSinhLuong(ds, n, nam, luong);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.tim kiem nhi phan theo ma nhan vien khi cho truoc ma nhan vien";
			TKNP_Theo_TichLuy(ds, n);
			system("pause");
		}
		else  {
			cout << "\nlua chon khong ton tai hay nhap lai!!";
			system("pause");
		}
	}

}
