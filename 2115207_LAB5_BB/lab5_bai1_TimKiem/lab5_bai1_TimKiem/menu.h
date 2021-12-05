void Menu();
void XuatMenu(int a[]);
void Menu() {
	cout << "\n\n\t\t=========MENU==========";
	cout << "\n0.Ket Thuc";
	cout << "\n1.nhap mang";
	cout << "\n2.xuat mang";
	cout << "\n3.tim vi tri so nguyen to cuoi cung trong mang,neu mang khong chua so nguyen to thi tra ve -1";
	cout << "\n4.tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no";
	cout << "\n5.tim vi tri co gia tri nho nhat trong mang va vi tri xuat hien dau tien cua no";
	cout << "\n6.tim so am lon nhat trong mang va vi tri cua no ";
	cout << "\n7.tim so duong nho nhat ca gia tri cua no";
	cout << "\n\n\t\t==========END==========";
}
void XuatMenu(int a[]) {
	int b[MAX];
	int c[MAX];
	int luachon ,n;
	while (true) {
		system("cls");
		Menu();
		cout << "\nHay nhap lua chon cua ban! : ";
		cin >> luachon;
		if (luachon==0) {
			break;
		}
		else if (luachon == 1) {
			cout << "\n1.nhap mang";
			cout << "\nNhap so phan tu cua mang : "; 
			cin >> n;
			NhapMang(a,n);
			system("pause");
		}
		else if (luachon == 2) {
			cout << "\n2.xuat mang";
			cout << "\nCac phan tu trong mang la : ";
			XuatMang(a,n);
			system("pause");
		}
		else if (luachon == 3) {
			cout << "\n3.tim vi tri so nguyen to cuoi cung trong mang,neu mang khong chua so nguyen to thi tra ve -1";
			cout<<"\nvi tri So nguyen to cuoi cung cua mang la : "<<TimKiemSoNTCuoiCungTrongMang(a, n);
			system("pause");
		}
		else if (luachon == 4) {
			cout << "\n4.tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no";
			TimPhanTuXuatHienNhieuNHat(a,b,c,n);
			system("pause");
		}
		else if (luachon == 5) {
			cout << "\n5.tim vi tri co gia tri nho nhat trong mang va vi tri xuat hien dau tien cua no";
			PhanTuNhoNhat(a,n);
			system("pause");
		}
		else if (luachon == 6) {
			cout << "\n6.tim so am lon nhat trong mang va vi tri cua no ";
			cout << endl;
			XuatMang(a,n);
			ViTriPhanTuAmLonNhat(a,n);
			system("pause");
		}
		else if (luachon == 7) {
			cout << "\n7.tim so duong nho nhat ca gia tri cua no";
			XuatMang(a, n);
			ViTriPhanTuDuongNhoNhat(a,n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai!";
			system("pause");
		}
	}
}
