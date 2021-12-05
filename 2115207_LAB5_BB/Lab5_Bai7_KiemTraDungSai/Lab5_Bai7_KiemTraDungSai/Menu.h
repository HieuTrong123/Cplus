void Menu();
void Xu_Ly_Menu(int a[]);
void Menu() {
	cout << "\n\n\t\t=======MENU========\n";
	cout << "\n0.Ket thuc";
	cout << "\n1.Nhap mang";
	cout << "\n2.Xuat mang";
	cout << "\n3.mang a khong chua phan tu 0";
	cout << "\n4.mang a co chua 3 phan tu nam lien tiep co gia tri lien tiep nhau";
	cout << "\n5.Mang a chua ca phan tu 0 lan 1";
	cout << "\n6.mang a chua phan tu co gia tri bang trung binh cong cua cac phan tu "; 
	cout << "\n7.mang a khong chua phan tu am ";
	cout << "\n\n\t\t========END========\n";
}
void Xu_Ly_Menu(int a[]) {
	int n ,luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon==0) {
			break;
		}
		else if (luaChon==1) {
			cout << "\n1.Nhap mang";
			cout << "\nNhap so phan tu cua mang : ";
			cin >> n;
			Nhap_mang(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.Xuat mang : ";
			Xuat_Mang(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.mang a khong chua phan tu 0";
			if (Kiem_Tra_Phan_Tu_0(a, n)) {
				cout << "\nmang a khong chua phan tu 0";
			}
			else {
				cout << "\nmang a co chua phan tu 0";
			}
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.mang a co chua 3 phan tu nam lien tiep co gia tri lien tiep nhau";
			if (Kiem_Tra_Phan_Tu_Lien_Tiep(a, n)) {
				cout << "\nTRUE!";
			}
			else
			{
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.Mang a chua ca phan tu 0 lan 1";
			if (Kiem_Tra_0_1(a, n)) {
				
				cout << "\nTRUE!";
			}
			else
			{
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.mang a chua phan tu co gia tri bang trung binh cong cua cac phan tu ";
			cout << "\nGia tri TB cong la : " << Tinh_Trung_Binh_Cong(a, n);
			if (Kiem_Tra_TB_Cong(a, n)) {

				cout << "\nTRUE!";
			}
			else
			{
				cout << "\nFALSE";
			}
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.mang a khong chua phan tu am ";
			if (Kiem_Tra_Mang_Am(a, n)) {

				cout << "\nTRUE!";
			}
			else
			{
				cout << "\nFALSE";
			}
			system("pause");
		}
		else  {
			cout << "\nLua chon cua ban khong ton tai hay nhap lai!!";
			system("pause");
		}
	}
}