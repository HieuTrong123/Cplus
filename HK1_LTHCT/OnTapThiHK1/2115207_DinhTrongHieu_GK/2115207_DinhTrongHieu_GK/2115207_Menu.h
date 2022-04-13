void Menu();
void Xu_Ly_Menu(Chuoi a);
void Menu() {
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.nhap xau ky tu";
	cout << "\n2.xem xau ky tu";
	cout << "\n3.doi cac ky tu thuong trong xau thanh ky tu hoa";
	cout << "\n4.chen mot ky tu vao cuoi xau ky tu";
	cout << "\n5.tia ky tu trong xau ky tu";
	cout << "\n\n\t\t==========END=========\n";
}
void Xu_Ly_Menu(Chuoi a) {
	int luaChon;
	char kt;
	while (true)
	{
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		cin.ignore();
		if (luaChon == 0) {
			cout << "\n0.ket thuc chuong trinh";
			system("pause");
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.nhap xau ky tu";
			cout << "\nNhap a: ";
			Nhap_Xau(a);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem xau ky tu";
			cout << "\nxau a la : ";
			Xuat_Xau(a);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.doi cac ky tu thuong trong xau thanh ky tu hoa";
			Doi_Ky_TuThuong_Hoa(a);
			cout << "\nChuoi sau khi chuyen la : ";
			Xuat_Xau(a);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.chen mot ky tu vao cuoi xau ky tu";
			cout << "\nNhap ky tu can chen vao cuoi: ";
			cin >> kt;
			Chen_KyTu_Vao_Cuoi(a, kt);
			cout << "\nChuoi sau khi them la : ";
			Xuat_Xau(a);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tia ky tu trong xau ky tu";
			cout << endl;
			Tia_KyTu(a);
			Xuat_Xau(a);
			system("pause");
		}
		else {
			cout << "\nlua chon khong ton tai, hay nhap lai";
			system("pause");
		}
		
	}
}