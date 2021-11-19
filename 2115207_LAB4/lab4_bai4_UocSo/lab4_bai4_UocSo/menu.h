void Menu() {
	cout << "\n\n\t\t===========MENU==========\n";
	cout << "\n0.Ket thuc ";
	cout << "\n1.xuat tat ca cac uoc so cua n";
	cout << "\n2.dem so luong cac uoc so cua n";
	cout << "\n3.tinh tong cac uoc so cua n";
	cout << "\n4.tim so lon nhat nho hon hoac bang n ma la luy thua cua 2 ";
	cout << "\n5.kiem tra so n co phai la so hoan hao khongbiet rang ,so hoan hao la so co tong cac uoc bang hai lan chinh no";
	cout << "\n\n\t\t===========END===========\n";
}
void XuatMenu() {
	int n;
	while (true) {
		int luachon;
		system("cls");
		Menu();

		cout << "\nNhap lua chon : ";
		cin >> luachon;
		if (luachon == 0) {
			break;

		}
		else if (luachon == 1) {
			cout << "\n1.xuat tat ca cac uoc so cua n";
			cout << "\nNhap gia tri n : "; cin >> n;
			XuatCacUocSoN(n);
			system("pause");
		}
		else if (luachon == 2) {
			cout << "\n2.dem so luong cac uoc so cua n";
			cout << "\nNhap gia tri n : "; cin >> n;
			cout<<"\nSo luong uoc so tu 1...n la : " << DemSoLuongUoc(n);
			system("pause");
		}
		else if (luachon == 3) {
			cout << "\n3.tinh tong cac uoc so cua n";
			cout << "\nNhap gia tri n : "; cin >> n;
			cout << "\nTong cac uoc tu 1...n la : " << TongCacUocSo(n);
			system("pause");
		}
		else if (luachon == 4) {
			cout << "\n4.tim so lon nhat nho hon hoac bang n ma la luy thua cua 2 ";
			cout << "\nNhap gia tri n : "; cin >> n;
			TimSoLonNhatLuyThua2(n);
			system("pause");
		}
		else if (luachon == 5) {
			cout << "\n5.kiem tra so n co phai la so hoan hao khong ";
			cout << "\nNhap gia tri n : "; cin >> n;
			if (KiemTraSoHoanThien(n)) {
				cout << "\nn la so hoan thien !";
			}
			else {
				cout << "\nn khong phai la so hoan thien !";
			}
			system("pause");
		}
		else {
			cout << "lua chon cua ban khong ton tai! hay nhap lai";
			system("pause");

		}
	}
}

