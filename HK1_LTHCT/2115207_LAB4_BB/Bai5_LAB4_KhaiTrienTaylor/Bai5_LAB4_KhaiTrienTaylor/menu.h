void Menu();
void Xu_Ly_Menu();
void Menu() {
	cout << "\n\n\t\t=========MENU==========\n";
	cout << "\n0.dung chuong trinh";
	cout << "\n1.tinh e^x";
	cout << "\n2.tinh sin(x)";
	cout << "\n3.tinh cos(x)";
	cout << "\n\n\t\t=========MENU==========\n";

}
void Xu_Ly_Menu() {
	int luaChon;
		
	double x;
	while (true) {
		system("cls");
		Menu();
		cout << "\n\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon==0) {
			cout << "Ket thuc";
			system("pause");
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tinh e^x";
			cout << "\nNhap gia tri cua luy thua x : ";
			cin >> x;
			cout << "\ngia tri e^x = "
				<< EMuX(x);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.tinh sin(x)";
			cout << "\nNhap gia tri cua luy thua x : ";
			cin >> x;
			cout << "\ngia tri sin(x) = "  << SinX(x);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tinh cos(x)";
			cout << "\nNhap gia tri cua luy thua x : ";
			cin >> x;
			cout << "\ngia tri cos(x) = " << CosX(x);
			system("pause");
		}
		else {
			cout << "\nlua chon khong ton tai hay nhap lai!!!";
			system("pause");
		}
	}
}