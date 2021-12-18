


void Menu() {
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.Thoat khoi chuong trinh";
	cout << "\n1.tao bang diem sinh vien";
	cout << "\n2.xem bang diem sinh vien";
	cout << "\n3.xem bang diem day du - co ket qua XLHT";
	cout << "\n4.xuat bang diem sinh vien theo tung lop";
	cout << "\n5.sap bang diem sinh vien giam dan theo diem trung binh";
	cout << "\n6.sap xep va xuat bang diem tang dan theo ten ,neu trung ten ,sap tang dan theo ma sinh vien";
	cout << "\n7.tim va xuat thong tin cua sinh vien co ten cho truoc";
	cout << "\n8.tim va xuat thong tin sinh vien co diem trung binh cao nhat";
	cout << "\n9.xep loai hoc luc cua sinh vien dua vao diem trung binh ";
	cout << "\n\n\t\t=========MENU=========\n";
}
void Xu_Ly_Menu(DanhSach ds[MAX] ,int &n) {
	int luaChon;
	char hoTen[27];
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao bang diem sinh vien";
			TaoDanhSachSinhVien(ds, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem bang diem sinh vien";
			Xuat_Bang_Diem_SV(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.xem bang diem day du - co ket qua XLHT";
			Xem_Danh_Sach(ds, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.xuat bang diem sinh vien theo tung lop";
			Sap_Xep_Theo_Lop(ds, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.sap bang diem sinh vien giam dan theo diem trung binh";
			Sap_Xem_Giam_Theo_DTB(ds, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.sap xep va xuat bang diem tang dan theo ten ,neu trung ten ,sap tang dan theo ma sinh vien";
			Sap_Xep_Tang_Theo_Ten(ds, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.tim va xuat thong tin cua sinh vien co ten cho truoc";
			cin.ignore();
			cout << "\nNhap do ten sinh vien can tim kiem : ";
			gets_s(hoTen,27);
			Tim_Kiem_Sv(ds, n, hoTen);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.tim va xuat thong tin sinh vien co diem trung binh cao nhat";
			Xuat_Max_DiemTB(ds, n);
			system("pause");
		}
		else if (luaChon == 9) {
			cout << "\n9.xep loai hoc luc cua sinh vien dua vao diem trung binh ";
			Xep_Loai_Sinh_Vien(ds, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khng ton tai!!";
			system("pause");
		}

	}
}