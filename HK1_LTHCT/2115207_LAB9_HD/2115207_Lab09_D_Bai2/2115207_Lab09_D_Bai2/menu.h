

void Menu();
void Xu_Ly_Menu(MaTranVuong a, MaTranVuong b, int& n);
void Menu() {

	cout << "\n\n\t\t========MENU=========\n";
	cout << "\n0.ket thuc chuong trinh ";
	cout << "\n1.nhap tu dong ma tran";
	cout << "\n2.xem mang";
	cout << "\n3.cong ma tran";
	cout << "\n4.tru ma tran";
	cout << "\n5.nhan ma tran";
	cout << "\n\n\t\t========MENU=========\n";
}
void Xu_Ly_Menu( MaTranVuong a, MaTranVuong b, int& n ) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			cout << "\n0.ket thuc chuong trinh ";
			system("pause");
			break;
		}
		if (luaChon == 1) {
			cout << "\n1.nhap tu dong ma tran";
			cout << "\nnhap mang a : ";
			NhapMaTran(a, n,'a');
			cout << "\nnhap mang b : ";
			NhapMaTran(b, n, 'b');
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem mang";
			cout << "\nMang a la : ";
			XuatMaTran(a, n);
			cout << "\nMang b la : ";
			XuatMaTran(b, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.cong ma tran";
			cout << "\ntong 2 ma tran la : ";
			XuatMaTran(TinhTong_2_MaTran(a, b, n),n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tru ma tran";
			cout << "\nHieu 2 ma tran la : ";
			XuatMaTran(TinhHieu_2_MaTran(a, b, n), n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.nhan ma tran";
			cout << "\nTich 2 ma tran la : ";
			XuatMaTran(TinhTich_2_MaTran(a, b, n), n);
			system("pause");
		}
		else{
			cout << "\nLua chon khong ton tai !!!";
			system("pause");
		}
	}
}