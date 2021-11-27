void Menu();
void XuatMenu();
void Menu() {
	cout << "\n\n\t\t===========MENU==========\n";
	cout << "\n0.Ket thuc ";
	cout << "\n1.Kiem tra n co phai la so nguyen to";
	cout << "\n2.xuat ra man hinh cac so nguyen to trong pham vi tu 1 den n moi so cach nhau 1 dau tab moi dong 5 so";
	cout << "\n3.dem so luong so nguyen to trong pham vi tu 1...n";
	cout << "\n4.Tinh tong cac uoc so nguyen to";
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
			cout << "\n1.Kiem tra n co phai la so nguyen to";
			cout << "\nNhap gia tri n : "; cin >> n;
			if (KiemTraSoNT(n) == true) {
				cout << "\nn la so nguyen to!";
			}
			else {
				cout << "\nn khong phai la so nguyen to!";
			}
			system("pause");
		}
		else if (luachon == 2) {
			cout << "\n2.xuat ra man hinh cac so nguyen to trong pham vi tu 1 den n moi so cach nhau 1 dau tab moi dong 5 so";
			cout << "\nNhap gia tri n : "; cin >> n;
			XuatSoNT(n);
			system("pause");
		}
		else if (luachon == 3) {	
            cout << "\n3.dem so luong so nguyen to trong pham vi tu 1...n";
			cout << "\nNhap gia tri n : "; cin >> n;
			cout<<"\nSo luong so nguyen to trong doan 1...n la  : " << DemSoLuongSoNT(n);
			system("pause");
		}
		else if (luachon == 4) {
			cout << "\n4.Tinh tong cac uoc so nguyen to";
			cout << "\nNhap gia tri n : "; cin >> n;
			cout<<"\nTong cac so nguyen to trong doan 1....n la : " << TinhTongSoNT(n);
			system("pause");
		}
		else {
			cout << "lua chon cua ban khong ton tai! hay nhap lai";
			system("pause");

		}
	}
}
