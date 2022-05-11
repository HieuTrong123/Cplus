void Menu() {
	cout << "\n\n\t\t==============MENU================\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao cac so";
	cout << "\n2.xem cac so";
	cout << "\n3.tong 2 so nnguyen lon";
	cout << "\n4.tich 2 so nguyen lon";
	cout << "\n5.chon cac so khac";
	cout << "\n\n\t\t==============MENU================\n";
}
void XuLyMenu() {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			return;
		}
		else if (luaChon == 1) {
			system("cls");
			cout << "\n1.tao cac so";
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2.xem cac so";
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3.tong 2 so nnguyen lon";
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4.tich 2 so nguyen lon";
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5.chon cac so khac";
			system("pause");
		}
	}
}