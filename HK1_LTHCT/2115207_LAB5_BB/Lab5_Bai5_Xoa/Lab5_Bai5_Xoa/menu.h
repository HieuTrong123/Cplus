void Menu();
void XuatMenu(int a[]);
void Menu() {
	cout << "\n\n\t\t=======MENU=======\n";
	cout << "\n0.ket thuc";
	cout << "\n1.Nhap mang";
	cout << "\n2,xuat mang";
	cout << "\n3.xoa phan tu tai vt cho truoc khoi mang a";
	cout << "\n4.xoa phan tu x dau tien tim duoc trong mang";
	cout << "\n5.xoa moi phan tu x trong mang a ";
	cout << "\n6.xoa trung ";
	cout << "\n7.xoa phan tu trong doan [min...max] cho truoc";
	cout << "\n\n\t\t=======END========\n";
}
void XuatMenu(int a[]) {
	int luaChon, n, vt ,x,min,max;
	int b[MAX];

	while (true) {
		system("cls");
		Menu();
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
			cout << "\n3.xoa phan tu tai vt cho truoc khoi mang a";
			cout << "\nNhap vi tri can xoa : "; cin >> vt;
			Xoa(a, n, vt);
			cout << "\nMang sau khi xoa la : ";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.xoa phan tu x dau tien tim duoc trong mang";
			cout << "\nNhap gia tri can xoa : "; cin >> x;
			Xoa_X_Dau_Tien(a, n, x);
			cout << "\nMang sau khi xoa la : ";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.xoa moi phan tu x trong mang a ";
			cout << "\nNhap gia tri can xoa : "; cin >> x;
			Xoa_X(a, n, x);
			cout << "\nMang sau khi xoa la : ";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.xoa trung ";
			Xoa_Trung(a, n);
			cout << "\nMang sau khi xoa la : ";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.xoa phan tu trong doan [min...max] cho truoc";
			cout << "\nNhap [min..."; cin >> min;
			cout << "..max] : "; cin >> max;
			Xoa_Phan_Tu_Trong_Doan_Min_Max(a, n, min, max);
			cout << "\nMang sau khi xoa la : ";
			XuatMang(a, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai lua chon !!";
			system("pause");
		}
	}
}


