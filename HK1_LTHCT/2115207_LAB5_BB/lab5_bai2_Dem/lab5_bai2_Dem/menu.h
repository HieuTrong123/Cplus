
void menu();
void XuatMenu(int a[]);
void menu() {
	cout << "\n\n\t\t=======MENU=======\n";
	cout << "\n0.ket thuc";
	cout << "\n1.Nhap mang";
	cout << "\n2,xuat mang";
	cout << "\n3.dem so luong so co 3 chu so";
	cout << "\n4.dem cac so nam ngoai pham vi [max...min] cho truoc";
	cout << "\n5.dem so luong so chinh phuong";
	cout << "\n6.dem so lan xuat hien cua phan tu xke tu vi tri vt cho truoc";
	cout << "\n7.dem so luong cac duong chay trong day biet rang dung chay la cac day con co thu tu dai nhat gom nhuong phan tu nam ke tiep nhau (truong hop cac phan tu trong mang phan biet) ";
	cout << "\n\n\t\t=======END========\n";
}
void XuatMenu(int a[]) {
	int luaChon ,n ,max ,min, vt,x;
	while (true) {
		system("cls");
		menu();
		cout << "\nNhap lua chon cua ban : "; cin >> luaChon;
		if (luaChon==0) {
			break;
		}
		else if (luaChon==1) {
			cout << "\n1.Nhap mang";
			cout << "\nNhap so luong phan tu trong mang : "; cin >> n;
			NhapMang(a,n);
			system("pause");
		}
		else if (luaChon==2) {
			cout << "\n2,xuat mang";
			XuatMang(a, n);
			system("pause");
		}
		else if (luaChon==3) {
			cout << "\n3.dem so luong so co 3 chu so ";
			cout<<DemSo3ChuSo(a,n);
			system("pause");
		}
		else if (luaChon==4) {
			
			cout << "\n4.dem cac so nam ngoai pham vi [max...min] cho truoc";

			cout << "\nNhap gia tri min : "; cin >> min;
			cout << "\nNhap gia tri max : "; cin >> max;
			cout<<"\nso luong cac phan tu nam ngoai [min..max] la : "<<DemSoNgoaiMinMax(a,n,min,max);
			system("pause");
		}
		else if (luaChon==5) {
			cout << "\n5.dem so luong so chinh phuong";
			cout << "\nso luong so chinh phuong trong mang la : " << DemSoChinhPhuong(a, n);
			system("pause");
		}
		else if (luaChon==6) {
			cout << "\n6.dem so lan xuat hien cua phan tu xke tu vi tri vt cho truoc";
			cout << "\nNhap vi tri : "; cin >> vt;
			cout << "\nNhap x : "; cin >> x;
			cout<<DemX(a, n,vt,x);
			system("pause");
		}
		else if (luaChon==7) {
			cout << "\n7.dem so luong cac duong chay trong day biet rang dung chay la cac day con co thu tu dai nhat gom nhuong phan tu nam ke tiep nhau";
			DemSoDuongChay(a, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai hay nhap lai lua chon !!";
			system("pause");
		}
	}
}
