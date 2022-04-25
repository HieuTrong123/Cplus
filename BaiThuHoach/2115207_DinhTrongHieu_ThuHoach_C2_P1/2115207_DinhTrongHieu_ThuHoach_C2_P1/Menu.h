#pragma once
void Menu() {
	cout << "\n\n\t\t========MENU=========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao danh sach hoc vien";
	cout << "\n2.xem danh sach hoc vien";
	cout << "\n3.xuat danh sach hoc vien theo tung lop";
	cout << "\n4.xuat danh sach hoc vien co ten la HOA va co diem trung binh >=6";
	cout << "\n5.xuat danh sach hoc vien co so tin chi <=35";
	cout << "\n\n\t\t========MENU=========\n";

}
void XuLyMenu(HocVien* ds,int& n) {
	int luaChon;
	while (true)
	{
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao danh sach hoc vien";
			if (TaoDanhSach(ds, n)) {
				cout << "\nthanh cong";
			}
			else {
				cout << "\nthat bai";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem danh sach hoc vien";
			XuatDanhSach(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.xuat danh sach hoc vien theo tung lop";
			XuatTieuDe();
			cout << "lop CTK36\n";
			XuatDongKe('-');
			cout << endl;
			TimKiemHocVienTheoLop(ds, n, "CTK36");
			_getch();
			cout << "\nlop CTK37\n";
			XuatDongKe('-');
			cout << endl;
			TimKiemHocVienTheoLop(ds, n, "CTK37");
			_getch();
			cout << "\nlop CTK38\n";
			XuatDongKe('-');
			cout << endl;
			TimKiemHocVienTheoLop(ds, n, "CTK38");
			cout << endl;
			XuatDongKe('=');
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.xuat danh sach hoc vien co ten la HOA va co diem trung binh >=6";
			XuatTieuDe();
			TimHoa(ds, n);
			XuatDongKe('=');
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.xuat danh sach hoc vien co so tin chi <=35";
			XuatTieuDe();
			LocTinChi(ds, n);
			XuatDongKe('=');
			system("pause");
		}
		else {
			cout << "\nlua chon khong ton tai hay nhap lai";
			system("pause");
		}

	}


}