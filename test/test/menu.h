void Menu() {
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.nhap du lieu thong tin sinh vien tu file";
	cout << "\n2.xem du lieu thong tin tu file";
	cout << "\n3.xep loai sinh vien";
	cout << "\n4.them mot sinh vien duoc nhap tu ban phim vao vi tri cho truoc";
	cout << "\n5.xoa mot sinh vien tai vi tri cho truoc";
	cout << "\n6.tim sinh vien co diem trung binh cao nhat";
	cout << "\n7.sap xep sinh vien theo lop va theo hoc luc";
	cout << "\n8.sua thong tin sinh vien theo ho ten cho truoc";
	cout << "\n\n\t\t=========MENU=========\n";
}
void XuLyMenu(SinhVien ds[],int& n) {
	int luaChon ,vt;
	char hoTen[40];
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.nhap du lieu thong tin sinh vien tu file";
			if (Nhap_Thong_tin_SV(ds, n)) {
				cout << "\nTHANH CONG!";
			}
			else {
				cout << "\nTHAT BAI!";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem du lieu thong tin tu file trong file khac";
			out.open("Text1.txt");
			if (out) {
				Xem_Thing_Tin_SV(ds, n);
				cout << "\nTHANH CONG!";
			}
			else {
				cout << "\nTHAT BAI!";
			}
			out.close();
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.xuat ra file khac bang danh sach sinh vien da xep loai";
			
			out.open("Text1.txt");
			if (out) {
				XepLoaiSinhVien(ds, n);
				cout << "\nTHAO TAC THANH CONG! ";
			}
			else {
				cout << "\nTHAT BAI!";
			}
			out.close();
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.them mot sinh vien duoc nhap tu ban phim vao vi tri cho truoc";
			out.open("Text1.txt");
			if (out) {
				cout << "\nNhap vi tri ban muon them sinh vien : ";
				cin >> vt;
				cin.ignore();
				ThemSinhVien(ds, n, vt);
				cout << "\nTHAO TAC THANH CONG! ";
			}
			else {
				cout << "\nTHAT BAI!";
			}
			out.close();
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.xoa mot sinh vien tai vi tri cho truoc";
			out.open("Text1.txt");
			if (out) {
				cout << "\nNhap vi tri ban muon xoa sinh vien : ";
				cin >> vt;
				Xoa_Sinh_Vien(ds, n, vt);
				cout << "\nTHAO TAC THANH CONG! ";
			}
			else {
				cout << "\nTHAT BAI!";
			}
			out.close();
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.tim sinh vien co diem trung binh cao nhat";
			out.open("Text1.txt");
			if (out) {
				TimSV(ds, n);
				cout << "\nTHAO TAC THANH CONG! ";
			}
			else {
				cout << "\nTHAT BAI!";
			}
			out.close();
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.sap xep sinh vien theo lop va tang gian theo hoc luc";
			out.open("Text1.txt");
			if (out) {
				out << "\n\n\t\tDanh Sach Lop CTK39 la\n";
				SinhVienLop(ds, n, "CTK39");
				out << "\n\n\t\tDanh Sach Lop CTK38 la\n";
				SinhVienLop(ds, n, "CTK38");
				out << "\n\n\t\tDanh Sach Lop CTK37 la\n";
				SinhVienLop(ds, n, "CTK37");
				cout << "\nTHAO TAC THANH CONG! ";
			}
			else {
				cout << "\nTHAT BAI!";
			}
			out.close();
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.sua thong tin sinh vien theo ho ten cho truoc";
			out.open("Text1.txt");
			if (out) {
				/*cout << "\nNhap ho ten sinh vien can chinh sua: ";
				cin.ignore();
				cin.getline(hoTen, 40);
				ChinhSuaSV(ds, n, hoTen);*/
				TestSapXep(ds, n);
				cout << "\nTHAO TAC THANH CONG! ";
			}
			else {
				cout << "\nTHAT BAI!";
			}
			out.close();
			system("pause");
		}
		else {
			cout << "\nlua chon khong ton tai hay nhap lai!";
			system("pause");
		}

	}
}