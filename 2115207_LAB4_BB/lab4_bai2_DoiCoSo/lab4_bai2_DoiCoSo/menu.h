void Menu();
void XuatMenu(int n);
void Menu() {
	cout << "\n\n\t\t===========MENU==========\n";
	cout << "\n0.Ket thuc ";
	cout << "\n1.doi sang he nhi phan";
	cout << "\n2.doi sang he bat phan";
	cout << "\n3.doi sang he thap luc phan";
	cout << "\n4.doi sang he co so 7";
	cout << "\n\n\t\t===========END===========\n";
}
void XuatMenu(int n) {
	while (true) {
		int luachon;
		system("cls");
		Menu();

		cout << "\nNhap lua chon : ";
		cin >> luachon;
		if (luachon == 0) {
			break;

		}
		else if (luachon == 1) {
			cout << "\n1.doi sang he nhi phan : ";
			DoiCoSo(n,2);
			system("pause");
		}
		else if (luachon == 2) {
			cout << "\n2.doi sang he bat phan : ";
			DoiCoSo(n,8);
			system("pause");
		}
		else if (luachon == 3) {
			cout << "\n3.doi sang he thap luc phan : ";
			DoiCoSo(n,16);
			system("pause");
		}
		else if (luachon == 4) {
			cout << "\n4.doi sang he co so 7 : ";
			DoiCoSo(n,7);
			system("pause");
		}
		else {
			cout << "lua chon cua ban khong ton tai! hay nhap lai";
			system("pause");

		}
	}
}
