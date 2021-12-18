void Menu();
void Xu_Ly_Menu(DaThuc A, int m, DaThuc B, int n);
void Menu() {
	cout << "\n\n\t\t========MENU=========\n";
	cout << "\n0.thoat khoi chuong trinh";
	cout << "\n1.nhap da thuc";
	cout << "\n2.xuat da thuc";
	cout << "\n3.cong 2 da thuc";
	cout << "\n4.tru da thuc";
	cout << "\n5.nhan 2 da thuc";
	cout << "\n6.tinh gia tri cua da thuc tai x";
	cout << "\n\n\t\t========MENU=========\n";
}
void Xu_Ly_Menu(DaThuc A,int m,DaThuc B,int n) {
	int luaChon;
	DaThuc C;
	int k = 0;
	double x;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.nhap da thuc";
			cout << "\nNhap da thuc A : ";
			NhapDaThuc(A, m, 'A');
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xuat da thuc";
			cout << "\nda thuc A la : ";
			XuatDaThuc(A, m);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.cong 2 da thuc";
			cout << "\ntong 2 da thuc la : ";
			cout << "\nNhap da thuc B : ";
			NhapDaThuc(B, n, 'B');
			Tong2DaThuc(A, m, B, n, C, k);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.tru da thuc";
			cout << "\nNhap da thuc B : ";
			NhapDaThuc(B, n, 'B');
			Hieu2DaThuc(A, m, B, n, C, k);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.nhan 2 da thuc";
			cout << "\nNhap da thuc B : ";
			NhapDaThuc(B, n, 'B');
			NhanDaThuc(A, m, B, n, C, k);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.tinh gia tri cua da thuc tai x";
			cout << "\nNhap x : ";
			cin >> x;
			cout<<"\ngia tri cua A(x) la : " << A_x(A, m, x);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai!!";
			system("pause");
		}
	}
}