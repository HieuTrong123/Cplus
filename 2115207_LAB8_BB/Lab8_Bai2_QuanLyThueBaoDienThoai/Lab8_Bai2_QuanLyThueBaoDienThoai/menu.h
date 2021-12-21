

void Menu(){
	cout << "\n\n\t\t======MENU=======\n";
	cout << "\n0.thoat khoi chuong trinh";
	cout << "\n1.tao danh sach thue bao";
	cout << "\n2.xem danh sach thue bao";
	cout << "\n3.Tim so dien thoai khi biet ten";
	cout << "\n4.tim thong tin thoe bao khi biet so dien thoai";
	cout << "\n5.xuat cac thue bao co cung dia chi";
	cout << "\n6.sap xep cac thue bao tang dan theo ma vung";
	cout << "\n\n\t\t======MENU=======\n";
}
void Xu_Ly_Menu(ThueBao ds[],int &n) {
	int luaChon;
	char hoTen[51];
	char soDienThoai[15];
	while (true) {
		system("cls");
		Menu();
		cout << "\n\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao danh sach thue bao";
			TaoDanhSachThueBao(ds, n);
		
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem danh sach thue bao";
			XuatDanhSachThueBao(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.Tim so dien thoai khi biet ten";
			cout << "\nnhap ho ten co truoc : ";
			cin.ignore();
			cin.getline(hoTen, 51);
			Tim_So_Khi_Biet_Ten(ds, n, hoTen);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tim thong tin thoe bao khi biet so dien thoai";
			cout << "\nNhap so dien thoai cho truoc : ";
			cin.ignore();
			cin.getline(soDienThoai, 15);
			Tim_Thong_Tin_Khi_Biet_SDT(ds, n, soDienThoai);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.xuat cac thue bao co cung dia chi";
			Thue_Bao_Cung_Dia_Chi(ds, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.sap xep cac thue bao tang dan theo ma vung";
			Sap_Xep_Tang_Theo_Ma_Vung(ds, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai : ";
			system("pause");
		}
	}
}