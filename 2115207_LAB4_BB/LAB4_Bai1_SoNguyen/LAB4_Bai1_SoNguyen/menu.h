void Menu();
void XuatMenu(int n);
void XuatSoDenn(int n);
void Menu() {
	cout << "\n\n\t\t===========MENU==========\n";
	cout << "\n0.Ket thuc ";
	cout << "\n1.Xuat cac so tu mot toi n,cach nhau mot dau tab moi dong chua 10 so";
	cout << "\n2.dem so luong cac so chia het cho 3 nhung khong chia het cho 4 trong doan [1.n]";
	cout << "\n3.dem so luong chu so cua n";
	cout << "\n4.dao nguoc so n";
	cout << "\n5.tin tong cac chu so trong n";
	cout << "\n6,cho biet chu so dau tien trong n";
	cout << "\n7.tim so nguyen m lon nhat sao cho toong 1+2+...m<=n";
	cout << "\n\n\t\t===========END===========\n";
}
void XuatMenu(int n) {
	while (true) {
		int luachon;
		system("cls");
		Menu();
	
			cout << "\nNhap lua chon : ";
			cin >> luachon;
		if (luachon==0) {
			break;

		}
		else if (luachon == 1) {
			cout << "\n1.Xuat cac so tu mot toi n,cach nhau mot dau tab moi dong chua 10 so";
			cout << endl;
			XuatSoDenn(n);
			system("pause");
		}
		else if (luachon == 2) {
			cout << "\n2.dem so luong cac so chia het cho 3 nhung khong chia het cho 4 trong doan [1.n]";
			cout << endl;
			SoChiaHetCho3(n);
			system("pause");
		}
		else if (luachon == 3) {
			cout << "\n3.dem so luong chu so cua n";
			cout << "\nSo luong so n la : "<<SoLuongSoN(n);
			system("pause");
		}
		else if (luachon == 4) {
			cout << "\n4.dao nguoc so n";
			cout << "\nSo sau khi dao nguoc la : "<<DaoNguocSo(n);
			system("pause");
		}
		else if (luachon == 5) {
			cout << "\n5.tin tong cac chu so trong n";
			cout << "\nTong cac so trong n la : "<<TongCacSo(n);
			system("pause");
		}
		else if (luachon == 6) {
			cout << "\n6,cho biet chu so dau tien trong n";
			cout << "\nSo dau tien cua so n la : "<<SoDauTien(n);
			system("pause");
		}
		else if (luachon == 7) {
			cout << "\n7.tim so nguyen m lon nhat sao cho toong 1+2+...m<=n";
			cout << "\nGia tri cua m la : "<<TimM(n);
			system("pause");
		}
		else {
				cout << "lua chon cua ban khong ton tai! hay nhap lai";
				system("pause");
			
		}
	}
}
