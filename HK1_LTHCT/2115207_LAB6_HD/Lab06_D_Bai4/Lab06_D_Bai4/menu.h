void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, MaTranVuong c, int& n);
void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong";
	cout << endl << "2. Xem ma tran vuong";
	cout << endl << "3.tinh tong 2 ma tran";
	cout << endl << "4. tinh hieu 2 ma tran";
	cout << endl << "5. tinh tich 2 ma tran ";
	cout << endl << "==========================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}
void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, MaTranVuong c, int& n)
{

	
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		
		system("CLS");
		cout << endl << "1. Nhap ma tran vuong a ";
		cout << "\nNhap cap ma tran vuong : n = ";
		cin >> n;
		NhapMaTran(a, n ,'a');
		cout << endl << "1. Nhap ma tran vuong b ";
		NhapMaTran(b, n, 'b');
		cout << "\nMa tran vuong a vua nhap:\n";
		XuatMaTran(a, n);
		cout << "\nMa tran vuong b vua nhap:\n";
		XuatMaTran(b, n);

		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran vuong";
		cout << "\nMa tran vuong hien hanh:\n";
		XuatMaTran(a, n);
		break;

	case 3:
		system("CLS");
		cout << endl << "3.tinh tong 2 ma tran";
		TinhTong_2_MaTran(a, b, c, n);
		

		break;

	case 4:
		system("CLS");
		cout << endl << "4. tinh hieu 2 ma tran";
		TinhHieu_2_MaTran(a, b, c, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. tinh tich 2 ma tran ";
		TinhTich_2_MaTran(a, b, c, n);
		break;
	
	}
	_getch();
}
