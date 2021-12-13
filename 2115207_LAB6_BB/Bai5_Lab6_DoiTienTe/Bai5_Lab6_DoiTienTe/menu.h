void Menu();
void Xu_Ly_Menu(double temp[], double b[MAX][MAX], double& n);
void Menu() {
	cout << "\n\n\t\t======MENU======\n";
	cout << "\n0.Thoat khoi menu";
	cout << "\n1.Xuat cac gia tri duoc doi theo thu tu  USD, EUR, GBP, INR, AUD, CAD, ZAR, NZD, VNĐ, JPY";
	cout << "\n2.USD";
	cout << "\n3.EUR";
	cout << "\n4.GBP";
	cout << "\n5.INR";
	cout << "\n6.AUD";
	cout << "\n7.CAD";
	cout << "\n8.ZAR";
	cout << "\n9.NZD";
	cout << "\n10.VND";
	cout << "\n11.JPY";
	cout << "\n\n\t\t======MENU======\n";

}
void Xu_Ly_Menu(double temp[] ,double b[MAX][MAX], double& n) {
	int donVi;
	while (true) {
		system("cls");
		Menu();
		cout << "\nHay nhap don vi tien te cua so can doi : ";
		cin >> donVi;
		if (donVi==0) {
			cout << "\nThoat khoi menu";
			system("pause");
			break;
		}
		else if (donVi == 1) {
			cout << "\n1.Xuat cac gia tri duoc doi theo thu tu  USD, EUR, GBP, INR, AUD, CAD, ZAR, NZD, VNĐ, JPY";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Doi_Tien(temp, b, n);
			system("pause");
		}
		else if (donVi == 2) {
			cout << "\n2.USD";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_USD(temp, b, n);
			system("pause");
		}
		else if (donVi == 3) {
			cout << "\n3.EUR";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_EUR(temp, b, n);
			system("pause");
		}
		else if (donVi == 4) {
			cout << "\n4.GBP";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_GBP(temp, b, n);
			system("pause");
		}
		else if (donVi == 5) {
			cout << "\n5.INR";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_INR(temp, b, n);
			system("pause");
		}
		else if (donVi == 6) {
			cout << "\n6.AUD";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_AUD(temp, b, n);
			
			system("pause");
		}
		else if (donVi == 7) {
			cout << "\n7.CAD";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_CAD(temp, b, n);
			system("pause");
		}
		else if (donVi == 8) {
			cout << "\n8.ZAR";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_ZAR(temp, b, n);
			system("pause");
		}
		else if (donVi == 9) {
			cout << "\n9.NZD";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_NZD(temp, b, n);
			system("pause");
		}
		else if (donVi == 10) {
			cout << "\n10.VND";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_VND(temp, b, n);
			system("pause");
		}
		else if (donVi == 11) {
			cout << "\n11.JPY";
			cout << endl;
			cout << "\nNhap gia tri can doi don vi tien te : ";
			cin >> n;
			Xuat_JPY(temp, b, n);
			system("pause");
		}
		else {
			cout << "\nhay nhap lai lua chon cua ban!!!";
			system("pause");
		}
	}
}
