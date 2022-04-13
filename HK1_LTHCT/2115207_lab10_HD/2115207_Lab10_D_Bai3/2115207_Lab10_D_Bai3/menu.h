void Menu();
void XuLyMenu();
void Menu() {
	cout << "\n\n\t\t==========MENU==========\n";
	cout << "\n0.ket thuc";
	cout << "\n1.nhap mang";
	cout << "\n2xuat mang";
	cout << "\n3.liet ke hoan vi cua n so nguyen duong dau tien";
	cout << "\n\n\t\t==========MENU==========\n";

}
void XuLyMenu() {
	int luaChon ,k;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.nhap mang";
			cout << "\nNhap phan tu mang : ";
			cin >> n;
			Nhap_Mang();
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2xuat mang";
			Xuat_Mang();
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.liet ke hoan vi cua n so nguyen duong dau tien";
			cout << "\nnhap k so can hoan vi: ";
			cin >> k;
			LietKe_HoanVi(k);
			
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai!!!";
			system("pause");
		}
	}
}
