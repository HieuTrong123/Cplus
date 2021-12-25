void Menu() {
	cout << "\n\n\t\t========MENU=========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao ma tran";
	cout << "\n2.xem ma tran";
	cout << "\n3.kiem tran ma tran co phai la doi xung";
	cout << "\n4.kiem tran ma tran co phai ma tran tam giac tren";
	cout << "\n5.kiem tran ma tran co phai tam giac duoi";
	cout << "\n6.kiem tran ma tran co phai ma tran tam giac cheo";
	cout << "\n7.kiem tra ma tran co phai tam giac don vi";
	cout << "\n\n\t\t========MENU=========\n";
}
void Xu_Ly_Menu(int *a ,int &n) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao ma tran";
			cout << "\nNhap kich thuoc ma tran : ";
			cin >> n;
			a = new int[n * n];
			Tao_Ma_Tran(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem ma tran";
			cout << endl;
			Xem_Ma_Tran(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.kiem tran ma trna co phai la doi xung";
			if (KiemTraDoiXung(a, n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.kiem tran ma tran co phai ma tran tam giac tren";
			if (Kiem_Tra_Ma_Tran_Tam_Giac_Tren(a, n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.kiem tran ma tran co phai tam giac duoi";
			if (Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(a, n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.kiem tran ma tran co phai ma tran tam giac cheo";
			if (Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(a, n) == 1 && Kiem_Tra_Ma_Tran_Tam_Giac_Tren(a, n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}

			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.kiem tra ma tran co phai tam giac don vi";
			if (Kiem_Tra_Ma_Tran_Don_Vi(a, n) == 1 && Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(a, n) == 1 && Kiem_Tra_Ma_Tran_Tam_Giac_Tren(a, n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai!!!";
			system("pause");
		}
	}


}