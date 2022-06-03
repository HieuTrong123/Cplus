void Menu() {
	cout << "\n\n\t\t==============MENU================\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao cac so";
	cout << "\n2.xem cac so";
	cout << "\n3.tong 2 so nnguyen lon";
	cout << "\n4.tich 2 so nguyen lon";
	cout << "\n5.hieu 2 so nguyen lon";
	cout << "\n\n\t\t==============MENU================\n";
}
void XuLyMenu(Stack& a,Stack& b) {
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
			if (Tao_Cac_So(a, b))
				cout << "\nthanh cong";
			else {
				cout << "\nthat bai";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2.xem cac so";
			cout << "\nso a la: ";
			Xem_So(a);
			cout << "\nso b la: ";
			Xem_So(b);
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3.tong 2 so nnguyen lon";
			cout << "\nso a la: ";
			Xem_So(a);
			cout << "\nso b la: ";
			Xem_So(b);
			cout << "\ntong 2 so a,b la: ";
			Xem_So(Tong2So(a, b));
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4.tich 2 so nguyen lon";
			cout << "\nso a la: ";
			Xem_So(a);
			cout << "\nso b la: ";
			Xem_So(b);
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5.hieu 2 so nguyen lon";
			cout << "\nso a la: ";
			Xem_So(a);
			cout << "\nso b la: ";
			Xem_So(b);
			cout << "\nhieu 2 so a,b la: ";
			Xem_So(Hieu2So(a, b));
			system("pause");
		}
	}
}