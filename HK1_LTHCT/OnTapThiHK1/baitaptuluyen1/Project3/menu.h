void Menu() {
	cout << "\n\n\t\t==========MENU============\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.doc thong tin nhan vien tu file";
	cout << "\n2.xem thong tin nhan vien";
	cout << "\n3.in ra file ten duoc doi thanh chu hoa";
	cout << "\n4.tim kiem nhan vien co dia chi cho truoc voi cac tu duoc dat cach nhau bang dau gach duoi";
	cout << "\n5.tim nhan vien co luong cao nhat";
	cout << "\n6.Xoa nhan vien co muc luong thap nhat";
	cout << "\n7.sap xep nhan vien tang dan theo luong";
	cout << "\n8.Them 1 Nhan Vien vao vi tri cho truoc trong danh sach";
	cout << "\n9.xuat danh sach nhan vien theo dia chi";
	cout << "\n\n\t\t==========MENU============\n";
}
void XuLyMenu(NhanVien ds[],int& n) {
	int stt;
	char diaChi[10];
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban: ";
		cin >> stt;
		if (stt == 0) {
			break;
		}
		else if (stt == 1) {
			if (DocNhanVien(ds, n, "doc.txt"))
				cout << "\nthanh cong!";
			else 
				cout << "\nthat bai!";
			system("pause");
		}
		else if (stt == 2) {
			XuatDSNhanVien(ds, n);
			system("pause");
		}
		else if (stt == 3) {
			DoiTenHoa(ds, n);
			system("pause");
		}
		else if (stt == 4) {
			cout << "\nnhap dia chi can tim kiem: ";
			cin.ignore();
			gets_s(diaChi, 10);
			InNhanVienCoDiaChi(ds, n, diaChi);
			system("pause");
		}
		else if (stt == 5) {
			InNhanVienCoLuongMAX(ds, n);
			system("pause");
		}
		else if (stt == 6) {
			XoaNhanVienLuongThapNhat(ds, n);
			system("pause");
		}
		else if (stt == 7) {
			SapXepTangTheoLuong(ds, n);
			system("pause");
		}
		else if (stt == 8) {
			ThemNhanVienVaoDanhSach(ds, n);
			system("pause");
		}
		else if (stt == 9) {
			XuatTheoDiaChi(ds, n);
			system("pause");
		}
		else {
			cout << "\nchuc nang khong ton tai hay nhap lai!!";
			system("pause");
		}
	}
}
