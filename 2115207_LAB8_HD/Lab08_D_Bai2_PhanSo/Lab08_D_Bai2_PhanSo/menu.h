


void XuatMenu() {
	cout << "\n\n\t\t===========MENU=========\n";
	cout << "0.ket thuc chuong trinh";
	cout << "\n1.Nhap phan so";
	cout << "\n2.xem phan so";
	cout << "\n3.rut gon phan so";
	cout << "\n4.cong 2 phan so";
	cout << "\n5.tru phan so";
	cout << "\n6.nhan hai phan so ";
	cout << "\n7.chia phan so";
	cout << "\n8.so sanh hai phan so";
	cout << "\n\n\t\t===========MENU=========\n";
}
void Xu_Ly_Menu(PhanSo &a) {
	int luaChon;
	PhanSo b;
	while (true) {
		system("cls");
		XuatMenu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.Nhap phan so";
			cout << "\nNhap phan so a : ";
			Nhap_PS(a);
			cout << "\nNhap phan so b : ";
			Nhap_PS(b);


			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem phan so";
			cout << "\nPhan so a la : ";
			XuatPS(a);
			cout << "\nPhan so b la : ";
			XuatPS(b);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.rut gon phan so";
			cout << "\nPhan so a sau khi rut gon la : ";
			cout<<RutGon(a).tu<<"/"<<RutGon(a).mau;
			cout << "\nPhan so b sau khi rut gon la : ";
			cout << RutGon(b).tu << "/" << RutGon(b).mau;
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.cong 2 phan so";
			
			cout << "\nphep cong 2 phan so ;a : ";
			cout << CongPhanSo(a, b).tu << "/" << CongPhanSo(a, b).mau;
			
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tru phan so";
			cout << "\nPhep nhan 2 phan so la : ";
			cout << TruPhanSo(a, b).tu << "/" << TruPhanSo(a, b).mau;
		
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.nhan hai phan so ";
			cout << "phep nhan 2 phan so la : ";
			cout << NhanPhanSo(a, b).tu << "/" << NhanPhanSo(a, b).mau;;
			
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.chia phan so";
			cout << "\nPhep chia 2 phan so : ";
			cout << ChiaPhanSo(a, b).tu << "/" << ChiaPhanSo(a, b).mau;
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.so sanh hai phan so";
			
			if (SoSanhPhanSo(a, b) > 0) {
				cout << "\nphan so a lon hon b ! ";
			}
			else if(SoSanhPhanSo(a ,b)==0) {
				cout << "\nhai phan so bang nhau !";
			}
			else {
				cout << "\nphan so a be hon phan so b !";
			}
			system("pause");
		}

	}
}