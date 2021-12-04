void Menu();

void Menu() {
	cout << "\n\n\t\t=======MENU========\n";
	cout << "\n0.Ket thuc";
	cout << "\n1.tim va xuat ra so fibonacci thu n";
	cout << "\n2.liet ke cac so fibonacci be hon n";
	cout << "\n3.liet ke n so fibonacci dau tien";
	cout << "\n\n\t\t=======MENU========\n";
}
void Xu_Ly_Menu(int a[],int &n) {
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
			Fibonacci_Thu_n(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.liet ke cac so fibonacci be hon n";
			cout << "\nNhap n : ";
			cin >> n;
			Be_Hon_Bang_n(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.liet ke n so fibonacci dau tien";
			cout << "\nNhap n : ";
			cin >> n;
			Be_Hon_Bang_n(a, n);
			system("pause");
		}
		else {
			cout << "\nKhong ton tai lua chon hay nhap lai !!!";
			system("pause");
		}
	}
}
