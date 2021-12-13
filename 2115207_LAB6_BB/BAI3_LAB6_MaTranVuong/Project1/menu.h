void Menu() {
	cout << "\n\n\t\t=========MENU========\n";
	cout << "\n0.Ket thuc";
	cout << "\n1.Nhap ma tran";
	cout << "\n2.xuat ma tran";
	cout << "\n3.hoan vi 2 cot j va h cua ma tran ,xuat ket qua ";
	cout << "\n4.hoa vi 2 hang i va k cua ma tran ,xuat ket qua ";
	cout << "\n5.tim ma tran hoan vi";
	cout << "\n\n\t\t=========END=========\n";

}
void Xu_Ly_Menu(int a[MAX][MAX] ,int n) {
	int luaChon, j, h, i, k;
	int b[MAX][MAX];
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon==0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.Nhap ma tran";
			do {
				cout << "\nNhap so luong phan tu trong mang : ";
				cin >> n;
			} while (n<0 && n>MAX);
			Nhap_Ma_Tran(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xuat ma tran";
			cout << endl;
			Xuat_Ma_Tran(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.hoan vi 2 cot j va h cua ma tran ,xuat ket qua ";
			do {
				cout << "\nNhap cot j can hoa vi : ";
				cin >> j;
				cout << "\nNhap cot h can hoan vi : ";
				cin >> h;
			} while (j<0 && h<0 && j>n && h>n);
			Hoan_Vi_2_Cot(a, n, j, h);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.hoa vi 2 hang i va k cua ma tran ,xuat ket qua ";
			do {
				cout << "\nNhap hang i can hoa vi : ";
				cin >> i;
				cout << "\nNhap hang k can hoan vi : ";
				cin >> k;
			} while (i<0 && k<0 && i>n && k>n);
			Hoan_Vi_2_Hang(a, n, i, k);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tim ma tran hoan vi";
			Kiem_Tra_Ma_Tran_Hoan_Vi(a, n, b);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai!!";
			system("pause");
		}
	}
}