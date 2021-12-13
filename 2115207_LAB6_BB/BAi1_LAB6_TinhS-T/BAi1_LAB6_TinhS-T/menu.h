void Menu();
void Xu_Ly_Menu(int a[MAX][MAX], int& n);
void Menu() {
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.ket thuc";
	cout << "\n1.Nhap ma tran vuong ";
	cout << "\n2.Xuat ma tran vuong";
	cout << "\n3.xuat S voi hi la so duong nho nhat hang i";
	cout << "\n4. xiat T voi vj la so am lon nhat cot j";
	cout << "\n\n\t\t==========END=========\n";

}
void Xu_Ly_Menu(int a[MAX][MAX] ,int &n) {
	int luachon ,i ,j;
	while (true) {
		system("cls");
		Menu();
		cout << "\n\nNhap lua chon cua ban : ";
		cin >> luachon;
		if (luachon == 0) {
			break;
		}
		else if (luachon == 1) {
			cout << "\n1.Nhap ma tran vuong";
			cout << "\nNhap so phan tu cua mang n : ";
			cin >> n;
			Nhap_Ma_Tran_Vuong(a, n);
			system("pause");
		}
		else if (luachon == 2) {
			cout << "\n2.Xuat ma tran vuong\n";
			Xuat_Ma_Tran_Vuong(a, n);
			system("pause");
		}
		else if (luachon == 3) {
			cout << "\n3.xuat S voi hi la so duong nho nhat hang i";
			 do {
				 cout << "\nNhap hang i can tinh : ";
				 cin >> i;
			} while (i < 0 || i > n - 1);
			cout<<"\nGia tri cua s la : "<<Tinh_S(a, n, i);
			system("pause");
		}
		else if (luachon == 4) {
			cout << "\n4. xiat T voi vj la so am lon nhat cot j";
			do {
				cout << "\nnhap cot j can tinh : ";
				cin >> j;
			} while (i < 0 || i > n - 1);
			cout<<"\ngia tri cua T la : " << Tinh_T(a, n, j);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai !!";
		}
	}
}
