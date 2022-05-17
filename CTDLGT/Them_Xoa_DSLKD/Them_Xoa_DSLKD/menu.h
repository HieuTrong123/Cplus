void Menu() {
	
	cout << "\n\n\t\t=============MENU=============\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao DSLKD";
	cout << "\n2.xem DSKLD";
	cout << "\n3.sap xep DSLKD giam dan";
	cout << "\n4.xoa phan tu co gia tri nho nhat khoi DSLK";
	cout << "\n5. them phan tu x vao sau phan tu nho nhat";
	cout << "\n6. them phan tu x vao truoc phan tu nho nhat";
	cout << "\n7.them x vao vt cho truoc";
	cout << "\n8.xoa x tai vt cho truoc";
	cout << "\n\n\t\t=============MENU=============\n";
	
}
void XuLyMenu(LinkedList& a) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			system("cls");
			cout << "\n1.tao DSLKD";
			TaoDSLK(a);
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2.xem DSKLD";
			cout << "\nDSLK la: ";
			XemDSLK(a);
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3.sap xep DSLKD giam dan";
			cout << "\nDSLK ban dau la: ";
			XemDSLK(a);
			SapXepDSLKGiam(a);
			cout << "\nDSLK sau khi sap xep la: ";
			XemDSLK(a);
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4.xoa phan tu co gia tri nho nhat khoi DSLK";
			cout << "\nDSLK ban dau la: ";
			XemDSLK(a);
			XoaMin(a);
			cout << "\nDSLK sau khi xoa min la: ";
			XemDSLK(a);
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5. them phan tu x vao sau phan tu nho nhat";
			int x;
			cout << "\nDSLK truc khi them la: ";
			XemDSLK(a);
			cout << "\nnhap x can them: ";
			cin>> x;
			ChenSau(a, x);
			cout << "\nDSLK sau khi them la: ";
			XemDSLK(a);
			system("pause");
		}
		else if (luaChon == 6) {
			system("cls");
			cout << "\n6. them phan tu x vao truoc phan tu nho nhat";
			int x;
			cout << "\nDSLK truc khi them la: ";
			XemDSLK(a);
			cout << "\nnhap x can them: ";
			cin >> x;
			ChenTruoc(a, x);
			cout << "\nDSLK sau khi them la: ";
			XemDSLK(a);

			system("pause");
		}
		else if (luaChon == 7) {
			system("cls");
			cout << "\n7.them x vao vt cho truoc";
			int x;
			cout << "\nDSLK truc khi them la: ";
			XemDSLK(a);
			cout << "\nnhap x can them: ";
			cin >> x;
			int vt;
			cout << "\nnhap vi tri can chen: ";
			cin >> vt;
			ChenVT(a, vt, x);
			cout << "\nDSLK sau khi them la: ";
			XemDSLK(a);
			system("pause");
		}
		else if (luaChon == 8) {
			system("cls");
			cout << "\n8.xoa x tai vt cho truoc";
			cout << "\nDSLK ban dau la: ";
			XemDSLK(a);
			int vt;
			cout << "\nnhap vi tri can xoa: ";
			cin >> vt;
			XoaVT(a, vt);
			cout << "\nDSLK sau khi xoa min la: ";
			XemDSLK(a);
			system("pause");
		}
	}

}