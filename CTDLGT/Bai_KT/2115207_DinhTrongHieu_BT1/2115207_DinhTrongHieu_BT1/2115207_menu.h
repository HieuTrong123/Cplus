#pragma once
void Menu() {
	cout << "\n\n\t\t========================MENU=========================";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao bang diem hoc vien";
	cout << "\n2.xuat bang diem hoc vien";
	cout << "\n3.xuat thong tin cac hoc vien co que quan Lam_Dong va co diem > 5";
	cout << "\n4.xuat cac hoc vien co ten la Hoa va co nam sinh 1990";
	cout << "\n5.xuat cac hoc vien co nam sinh 1990 va co diem < 5";
	cout << "\n\n\t\t========================MENU=========================";
}
void XuLyMenu(SinhVien ds[], int& n) {
	int chon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nhay nhap lua chon cua ban: ";
		cin >> chon;
		if (chon == 0) {
			break;
		}
		else if (chon == 1) {
			system("cls");
			cout << "\n1.tao bang diem hoc vien\n";
			if (TaoThongTin(ds, n)) {
				cout << "\n\n\t\tTHANH CONG\n";
			}
			else {
				cout << "\n\n\t\tTHAT BAI\n";
			}
			system("pause");
		}
		else if (chon == 2) {
			system("cls");
			cout << "\n2.xuat bang diem hoc vien\n";
			XuatDS(ds, n);
			system("pause");
		}
		else if (chon == 3) {
			system("cls");
			cout << "\n3.xuat thong tin cac hoc vien co que quan Lam_Dong va co diem > 5\n";
			cout << "danh sach ban dau la: ";
			XuatDS(ds, n);
			cout << "\ndanh sach tim kiem duoc la: ";
			XuatTHongTinSVLamDong(ds, n);
			system("pause");
		}
		else if (chon == 4) {
			system("cls");
			cout << "\n4.xuat cac hoc vien co ten la Hoa va co nam sinh 1990\n";
			cout << "danh sach ban dau la: ";
			XuatDS(ds, n);
			cout << "\ndanh sach tim kiem duoc la: ";
			TimKiemHoa(ds, n);
			system("pause");
		}
		else if (chon == 5) {
			system("cls");
			cout << "\n5.xuat cac hoc vien co nam sinh 1990 va co diem < 5\n";
			cout << "danh sach ban dau la: ";
			XuatDS(ds, n);
			cout << "\ndanh sach tim kiem duoc la: ";
			TimKiemSV1990(ds, n);
			system("pause");
		}
	}

}