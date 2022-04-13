

void Menu() {
	cout << "\n\n\t\t========MENU=========";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.nhap file";
	cout << "\n2.xem thong tin bach hoa";
	cout << "\n3.tinh tong don gia cac mat hang";
	cout << "\n4.tim mat hang co gia tri lon nhat";
	cout << "\n5.sap xep mat hang theo tung loai";
	cout << "\n6.tim mat hang co han su dung khong qua 30 ngay";
	cout << "\n7.xuat ra mat hang theo loai cho truoc";
	cout << "\n8.xoa mat hang co so luong be hon so luong x cho truoc";
	cout << "\n9.them 1 hang vao vi tri cho truoc";
	cout << "\n\n\t\t========MENU=========";
}
void XuLyMenu(BachHoa* ds,int& n) {
	int luaChon;
	char loai[25];
	char filename[30];
	int x;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon : ";
		cin >> luaChon;
		if (luaChon == 0) {
			cout << "\n0.ket thuc chuong trinh";
			system("pause");
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.nhap file";
			cout << "\nnhap ten file de doc du lieu: ";
			cin >> filename;
			if (NhapDuLieuTuFile(filename, ds, n)) {
				cout<<"\ndoc du lieu thanhf cong";
			}
			else {
				cout << "\nthat bai";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem thong tin bach hoa";
			XuatDanhSachBachHoa(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tinh tong gia tri cac mat hang";
			TinhTongDonGia(ds, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tim mat hang co gia tri lon nhat";
			MatHangCoGiaLonNhat(ds, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.sap xep mat hang theo tung loai";
			SapXepTheoLoai(ds, n);

			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6. tim mat hang co han su dung khong qua 30 ngay";
			HanSDBeHon30(ds, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.xuat ra mat hang theo loai cho truoc";
			cout << "\nNhap ten loai hang hoa: ";
			cin >> loai;
			TimHangHoaTheoLoai(loai, ds, n);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.xoa mat hang co so luong be hon so luong x cho truoc";
			cout << "\nNhap so luong x: ";
			cin >> x;
			XoaSoHangHoaBeHonSoLuong(ds, n, x);
			cout << "\nDanh sach sau khi xoa \n";
			XuatDanhSachBachHoa(ds, n);
			system("pause");
		}
		else if (luaChon == 9) {
			cout << "\n9.them mat hang vao vi tri cho truoc";
			cout << "\nNhap vi tri can them : ";
			cin >> x;
			ThemVaoViTriChoTruoc(ds, n, x);
			cout << "\ndanh sach sau khi them nhan vien vao vi tri " << x << endl;
			XuatDanhSachBachHoa(ds, n);
			system("pause");
		}
		else {
			cout << "\nlua chon khong ton tai";
			system("pause");
		}
	}
}