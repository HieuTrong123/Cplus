

void Menu() {
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.Ket thuoc chuong trinh";
	cout << "\n1.dem so luong ky tu x trong chuoi";
	cout << "\n2.xuat cac gia tri ky tu phan biet va so lan tuong ung cua no";
	cout << "\n3.tim vi tri xuat hien dau tien cua ky tu x trong chuoi neu khong tra ve -1";
	cout << "\n4,tim vi tri xuat hien dau tien cuar chuoi t trong chuoi s neu s khong chua t thi tra  ve -1";
	cout << "\n5.dem so tu trong chuoi s";
	cout << "\n6.dao vi tri tu dau va tu cuoi trong chuoi s";
	cout << "\n7.Xem chuoi";
	cout << "\n\n\t\t=========MENU=========\n";
}
void Xu_Ly_Menu(Chuoi a) {
	int luaChon;
	char x;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0)
			break;
		else if (luaChon == 1) {
			cout << "\n1.dem so luong ky tu x trong chuoi";
			cout << "\nNhap phan x can dem : ";
			cin >> x;
			cout<<"\nso luong ky tu "<<x<<" trong mang la "<<Dem_SoX(a, x);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xuat cac gia tri ky tu phan biet va so lan tuong ung cua no";
			Xuat_So_Lan_Xuat_Hien(a);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tim vi tri xuat hien dau tien cua ky tu x trong chuoi neu khong tra ve -1";
			cout << "\nNhap phan x can tim : ";
			cin >> x;
			cout<<"\nvi tri cua "<<x<<" xuat hien dau tien la : " << Vi_Tri_X_Dau_Tien(a, x);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4,tim vi tri xuat hien dau tien cua chuoi t trong chuoi s neu s khong chua t thi tra  ve -1";
			cout<<Vi_Tri_Mang_T_Trong_Mang_S(a);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.dem so tu trong chuoi s";
			cout << "\nso tu cua mang a la : " << Dem_So_Tu(a);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.dao vi tri tu dau va tu cuoi trong chuoi s";
			Dao_Nguoc_Chuoi(a);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.Xem chuoi";
			cout << "\nmang a la : " << a;
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai !!";

			system("pause");
		}
	}
}