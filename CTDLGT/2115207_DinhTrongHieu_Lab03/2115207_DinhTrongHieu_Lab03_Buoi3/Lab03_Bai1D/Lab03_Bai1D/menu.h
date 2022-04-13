#pragma once
void Menu() {
	cout << "\n\n\t\t==========MENU===========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao du lieu";
	cout << "\n2.xem du lieu";
	cout << "\n3.chon truc tiep";
	cout << "\n4.chen truc tiep";
	cout << "\n5.doi cho truc tiep";
	cout << "\n6.noi bot";
	cout << "\n7.chen nhi phan";
	cout << "\n8.radix";
	cout << "\n\n\t\t==========MENU===========\n";
}
void XuLyMenu(int a[],int& n) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\n hay nhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			char filename[20];
			cout << "\n1.tao du lieu";
			cout << "nhap ten file chua thong tin can thiet: ";
			cin >> filename;
			if (File_Array(filename, a, n)) {
				cout << "\n\n\t\tTHANH CONG!!\n";
			}
			else {
				cout << "\n\n\t\tTHAT BAI!!!\n";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem du lieu";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.chon truc tiep";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Selection_L(a, n);
			cout << "\ndanh sach sau khi sap xep la:  ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.chen truc tiep";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Insertion_L(a, n);
			cout << "\ndanh sach sau khi sap xep la:  ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.doi cho truc tiep";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Interchange_L(a, n);
			cout << "\ndanh sach sau khi sap xep la:  ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.noi bot";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Buble_L(a, n);
			cout << "\ndanh sach sau khi sap xep la:  ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.chen nhi phan";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Binary_Insertion(a, n);
			cout << "\ndanh sach sau khi sap xep la:  ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.radix";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Radix(a, n);
			cout << "\ndanh sach sau khi sap xep la:  ";
			Output(a, n);
			system("pause");
		}
		else  {
			cout << "lua chon cua ban khong ton tai hay nhap lai!!";
			system("pause");
		}

	}
}