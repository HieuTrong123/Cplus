void Menu();
void Xu_Ly_Menu(int a[MAX][MAX], int& n);
void Menu() {
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.Ket thuc ";
	cout << "\n1.Nhap ma tran vuong ";
	cout << "\n2.Xuat ma tran vuong  ";
	cout << "\n3.kiem tra ma tran co phai la ma tran doi xungw";
	cout << "\n4.Kiem tra  ma tran co phai ma tran tam giac tren ";
	cout << "\n5.Kiem tra  ma tran co phai ma tran tam giac duoi";
	cout << "\n6.Kiem tra ma tran co phai la ma tran cheo ";
	cout << "\n7.Kiem tra ma tran co phai la ma tran don vi ";
	cout << "\n\n\t\t=========END==========\n";

}
void Xu_Ly_Menu(int a[MAX][MAX] ,int &n) {
	int luachon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luachon;
		if (luachon==0) {
			break;
		}
		else if (luachon == 1) {
			cout << "\n1.Nhap ma tran vuong ";
			do {
				cout << "\nNhap so phan tu trong ma tran : ";
				cin >> n;
			} while (n<0 && n>MAX);
			Nhap_Ma_Tran(a, n);
			system("pause");
		}
		else if (luachon == 2) {
			cout << "\n2.Xuat ma tran vuong \n ";
			Xuat_Ma_tran(a, n);
			system("pause");
		}
		else if (luachon == 3) {
			cout << "\n3.kiem tra ma tran co phai la ma tran doi xungw";
			if (Kiem_Tra_Ma_Tran_Doi_Xung(a,n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luachon == 4) {
			cout << "\n4.Kiem tra  ma tran co phai ma tran tam giac tren ";
			if (Kiem_Tra_Ma_Tran_Tam_Giac_Tren(a, n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luachon == 5) {
			cout << "\n5.Kiem tra  ma tran co phai ma tran tam giac duoi";
			if (Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(a, n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luachon == 6) {
			cout << "\n6.Kiem tra ma tran co phai la ma tran cheo ";
			if (Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(a, n) == 1 && Kiem_Tra_Ma_Tran_Tam_Giac_Tren(a, n) == 1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luachon == 7) {
			cout << "\n7.Kiem tra ma tran co phai la ma tran don vi ";
			if (Kiem_Tra_Ma_Tran_Don_Vi(a, n) == 1&&Kiem_Tra_Ma_Tran_Tam_Giac_Duoi(a,n)==1&&Kiem_Tra_Ma_Tran_Tam_Giac_Tren(a,n)==1) {
				cout << "\nTRUE";
			}
			else {
				cout << "\nFALSE";
			}
			system("pause");
		}
		else {
			cout << "\nLua chon cua ban khong ton tai hay nhap lai!!";
			system("pause");
		}
	}
}