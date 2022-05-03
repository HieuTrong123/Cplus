void Menu() {
	cout << "\n\n\t\t===============MENU===============\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao bang diem hoc vien";
	cout << "\n2.xuat bang diem hoc vien";
	cout << "\n3.sap bang diem tang dan theo ma hoc vien bang thuat giai chon truc tiep";
	cout << "\n4.sap bang diem tang dan theo diem bang thuat giai quick sort";
	cout << "\n5.sap bang diem theo yeu cau:";
	cout << "\n\t\t-tang dan theo ten hoc vien bang thuat giai chen truc tiep";
	cout << "\n\t\t-neu trung nhau thi tang dan theo ho hoc vien ";
	cout << "\n\t\t-neu van co ho hoc vien trung nhau thi tang dan theo ten lot hoc vien";
	cout << "\n\n\t\t===============MENU===============\n";
}
void XuLyMenu(HocVien ds[],int& n) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			system("cls");
			cout << endl;
			cout << "\n0.ket thuc chuong trinh";
			cout << endl;
			system("pause");
			break;
		}	
		else if (luaChon == 1) {
			system("cls");
			cout << "\n1.tao bang diem hoc vien";
			cout << endl;
			char filename[15];
			cout << "\nnhap ten file chua thong tin can thiet: ";
			cin >> filename;
			if (TaoBangDiem(filename, ds, n)) {
				cout << "\nbang diem duoc tao thanh cong!";
			}
			else {
				cout << "\nbang diem duoc tao that bai!";
			}
			cout << endl;
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xuat bang diem hoc vien";
			system("cls");
			cout << endl;
			XuatBangDiem(ds, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3.sap bang diem tang dan theo ma hoc vien bang thuat giai chon truc tiep";
			cout << endl;
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			Selection_L(ds, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XuatBangDiem(ds, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4.sap bang diem tang dan theo diem bang thuat giai quick sort";
			cout << endl;
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			QuickSort(ds, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XuatBangDiem(ds, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5.sap bang diem theo yeu cau:";
			cout << "\n\t\t-tang dan theo ten hoc vien bang thuat giai chen truc tiep";
			cout << "\n\t\t-neu trung nhau thi tang dan theo ho hoc vien ";
			cout << "\n\t\t-neu van co ho hoc vien trung nhau thi tang dan theo ten lot hoc vien";
			cout << endl;
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			Insertion_L(ds, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XuatBangDiem(ds, n);
			cout << endl;
			system("pause");
		}
		else {
			system("cls");
			cout << endl;
			cout << "\nlua chon cua ban khong ton tai hay nhap lai lua chon khac hoac nhap 0 de ket thuc chuong trinh!";
			cout << endl;
			system("pause");
		}
	}
}