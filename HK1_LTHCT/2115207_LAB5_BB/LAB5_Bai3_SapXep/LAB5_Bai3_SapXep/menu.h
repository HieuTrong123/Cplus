
void menu();
void XuatMenu(int a[]);
void menu() {
	cout << "\n\n\t\t=======MENU=======\n";
	cout << "\n0.ket thuc";
	cout << "\n1.Nhap mang";
	cout << "\n2,xuat mang";
	cout << "\n3.sap xep cac so duong tang dan,cac so khac giu nguyen";
	cout << "\n4.sap xep so 0 o cuoi mang cac so khac o dau mang va tnag dan";
	cout << "\n5.sap xep cac so 0 o dau mang so am o dau va giam dan so duong o cuoi va tang dan";
	cout << "\n6.sap xep cac so le nam o dau mang va tang dan ,cac so chan o cuoi mang va giam dan";
	cout << "\n7.sap xep cac so nguyen to o dau va tang dan cac so con lai nam o cuoi va giam dan";
	cout << "\n\n\t\t=======END========\n";
}
void XuatMenu(int a[]) {
	int luaChon, n;
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
			cout << "\n3.sap xep cac so duong tang dan,cac so khac giu nguyen";
			SapXepSoDuong(a, n);
			cout << "\nmang sau khi sap xep la : ";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 4) {

			cout << "\n4.sap xep so 0 o cuoi mang cac so khac o dau mang va tnag dan";
			SapXep0OCuoi(a,b, n);
			cout << "\nmang sau khi sap xep la : ";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.sap xep cac so 0 o dau mang so am o gia va gima dan so duong o cuoi va tang dan";
			
			SapXep0ODauMang(a, b, n);
			
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.sap xep cac so le nam o dau mang va tang dan ,cac so chan o cuoi mang va giam dan";
			SapXepChanLe(a, n);
			cout << "\nmang sau khi sap xep la : ";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.sap xep cac so nguyen to o dau va tang dan cac so con lai nam o cuoi va giam dan";
			SapXepSoNT(a, n);
			cout << "\nmang sau khi sap xep la : ";
			XuatMang(a, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai lua chon !!";
			system("pause");
		}
	}
}

