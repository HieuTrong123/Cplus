void Menu();
void XuLyMenu(TaiLieu* a, int& n);
void Menu() {
	cout << "\n\n\t\t==========MENU========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao danh sach tai lieu";
	cout << "\n2.xem danh sach tai lieu";
	cout << "\n3.tinh tong gia tat ca cac tai lieu";
	cout << "\n4.tim danh muc sach duoc xuat boi nhaXb vao namXb cho truoc";
	cout << "\n5.tim nhung bai bao khoa hoc co su tham gia cua cac tacGia cho truoc";
	cout << "\n6.thong ke so luong tai lieu theo moi loai";
	cout << "\n7.liet ke cac tai lieu theo tung nam xuat ban ";
	cout << "\n8.xem thong tin tai lieu theo maTL cho truoc";
	cout << "\n9.sap xep cac tai lieu tang dan theo tua de";
	cout << "\n\n\t\t==========MENU========\n";
}
void XuLyMenu(TaiLieu* a,int &n) {
	int luaChon;
	char nhaXB[25];
	char tacGia[35];
	char maTL[11];
	unsigned namXB;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao danh sach tai lieu";
			Tao_DS_Tai_lieu(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem danh sach tai lieu";
			Xuat_DS_TL(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tinh tong gia tat ca cac tai lieu";
			cout << "\ntong gia cac tai lieu la : " << TongGia(a, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tim danh muc sach duoc xuat boi nhaXb vao namXb cho truoc";
			cout << "\nNhap nam xuat ban : ";
			cin >> namXB;
			cin.ignore();
			cout << "\nnhap nha xuat ban : ";
			gets_s(nhaXB, 25);

			Tim_NhaXB_NamXB(a, n, nhaXB, namXB);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tim nhuong bai bao khoa hoc co su tham gia cua cac tacGia cho truoc";
			cout << "\nNhap tac gia : ";
			cin.ignore();
			gets_s(tacGia, 35);
			Tim_BaoKH_tacGia(a, n, tacGia);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.thong ke so luong tai lieu theo moi loai";
			ThongKeTheoLoai(a, n, "sach");
			_getch();
			ThongKeTheoLoai(a, n, "bao khoa hoc");
			_getch();
			ThongKeTheoLoai(a, n, "tap chi");
			_getch();
			ThongKeTheoLoai(a, n, "luan van");
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.liet ke cac tai lieu theo tung nam xuat ban ";
			cout << "\nMang truoc khi thong ke ";
			Xuat_DS_TL(a, n);
			ThongKeTheoNamXB(a, n);
			cout << "\nmang sau khi thong ke ";
			Xuat_DS_TL(a, n);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.xem thong tin tai lieu theo maTL cho truoc";
			cout << "\nNhap ma tai lieu : ";
			cin.ignore();
			gets_s(maTL, 11);
			Xuat_MaTL(a, n, maTL);
			system("pause");
		}
		else if (luaChon == 9) {
			cout << "\n9.sap xep cac tai lieu tang dan theo tua de";
			cout << "\nMang truoc khi thong ke ";
			Xuat_DS_TL(a, n);
			ThongKeTheoTuaDe(a, n);
			cout << "\nmang sau khi thong ke ";
			Xuat_DS_TL(a, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai ";
			system("pause");
		}
	}
}
