
void menu();
void XuatMenu(int a[]);
void menu() {
	cout << "\n\n\t\t=======MENU=======\n";
	cout << "\n0.ket thuc";
	cout << "\n1.Nhap mang";
	cout << "\n2,xuat mang";
	cout << "\n3.chen vi tri x vao mang a tai vi tri cho truoc";
	cout << "\n4.chen phan tu x vap sau phan tu lon nhat (dau tien tim duoc) trong mang";
	cout << "\n5.chen phan tu x vao truoc so nguyen to dau tien trong mang neu khong co so nguyen to nao thi chen dau";
	cout << "\n6.chen phan tu x vao sau moi phan tu y cho truoc neu mang khong chua y thi chen tai vi tri 0";
	cout << "\n7.thay the gia tri nho nhat bang gia tri x cho truoc";
	cout << "\n\n\t\t=======END========\n";
}
void XuatMenu(int a[]) {
	int luaChon, n ,vt ,x ,y;
	int b[MAX];

	while (true) {
		system("cls");
		menu();
		cout << "\nNhap lua chon cua ban : "; cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.Nhap mang";
			cout << "\nNhap so luong phan tu trong mang : "; cin >> n;
			NhapMang(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2,xuat mang";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.chen vi tri x vao mang a tai vi tri cho truoc";
			cout << "\nNhap gia tri x can chen : "; cin >> x;
			cout << "\nNhap vi tri can chen : "; cin >> vt;
			Chen(a, n, x, vt);
			cout << "\nMang sau khi chen : ";
			XuatMang(a,n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.chen phan tu x vap sau phan tu lon nhat (dau tien tim duoc) trong mang";
			cout << "\nNhap gia tri x can chen : "; cin >> x;
			ChenSauMaxDauTien(a, n, x);
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.chen phan tu x vao truoc so nguyen to dau tien trong mang neu khong co so nguyen to nao thi chen dau";
			cout << "\nNhap gia tri x can chen : "; cin >> x;
			ChenSauSoNT(a, n, x);
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.chen phan tu x vao sau moi phan tu y cho truoc neu mang khong chua y thi chen tai vi tri 0";
			cout << "\nNhap gia tri can chen x vao sau : "; cin >> y;
			cout << "\nNhap gia tri x can chen : "; cin >> x;
			ChenVaoSauKyTuY(a, n, y, x);
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.thay the gia tri nho nhat bang gia tri x cho truoc";
			cout << "\nNhap gia tri x can chen : "; cin >> x;
			ThayThe(a, n, x);
			XuatMang(a, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai lua chon !!";
			system("pause");
		}
	}
}


