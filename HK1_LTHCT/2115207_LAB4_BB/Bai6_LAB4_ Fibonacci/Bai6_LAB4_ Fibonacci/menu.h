void Menu();

void Menu() {
	cout << "\n\n\t\t=======MENU========\n";
	cout << "\n0.Ket thuc";
	cout << "\n1.tim va xuat ra so fibonacci thu m";
	cout << "\n2.liet ke cac so fibonacci be hon n";
	cout << "\n3.liet ke n so fibonacci dau tien";
	cout << "\n\n\t\t=======MENU========\n";
}
void Xu_Ly_Menu(int &n) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			cout << "\nKet thuc ";
			system("pause");
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tim va xuat ra so fibonacci thu n";
		
			cout << "\nNhap n : ";
			cin >> n;
			Xuat_FiBo_Thu_N(n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.liet ke cac so fibonacci be hon n";
			cout << "\nNhap gia tri n  de so sanh : ";
			cin >> n;
			Xuat_FiBo_Nho_Hon_N(n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.liet ke n so fibonacci dau tien";
			
			cout << "\nNhap so luong n so dau tien can xuat : ";
			cin >> n;
			Xuat_FiBo_Dau_Tien(n);
			system("pause");
		}
		else {
			cout << "\nKhong ton tai lua chon hay nhap lai !!!";
			system("pause");
		}
	}
}
