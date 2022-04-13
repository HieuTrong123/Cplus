void Xu_Ly_Menu(int a[]);
void Menu();
void Menu() {
	cout << "\n\n\t\t========Menu========\n";
	cout << "\n0.Ket thuc";
	cout << "\n1,Nhap mang";
	cout << "\n2.Xuat mang";
	cout << "\n3.Tinh trung binh cong cua cac phan tu trong mang ";
	cout << "\n4.Tinh tong binh phuong cua cac phan tu trong mang";
	cout << "\n5.Tinh do lech lon nhat giua hai phan tu nam lien tiep nhau";
	cout << "\n6.Tinh tong cac so nguyen to co 2 chu so";
	cout << "\n\n\t\t=========END========\n";
}
void Xu_Ly_Menu(int a[]) {
	int n, luaChon;
	int b[MAX];
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon==0) {
			break;
		}
		else if (luaChon==1) {
			cout << "\nNhap so luong phan tu trong mang : "; cin >> n;
			cout << "\n1,Nhap mang";
			Nhap_Mang(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.Xuat mang";
			Xuat_Mang(a,n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.Tinh trung binh cong cua cac phan tu trong mang ";
			cout << "\nGia tri trung binh cong : "<<Tinh_Trung_Binh_Cong(a,n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.Tinh tong binh phuong cua cac phan tu trong mang";
			cout << "\nTong binh phuong cua cac phan tu la : " << Tinh_Tong_Binh_Phuong(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.Tinh do lech lon nhat giua hai phan tu nam lien tiep nhau";
			Tinh_Do_Lech(a, b, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.Tinh tong cac so nguyen to co 2 chu so";
			cout << "\nGia tri tong cua cac gia tri tren la : " << Tinh_Tong_So_NT_2_Chu_So(a, n);
			system("pause");
		}
		else {
			cout << "\nLua chon cua ban khong ton tai hay nhap lai!!!";
			system("pause");
		}
	}
}
