#pragma once
void Menu() {
	
	cout << "\n\n\t\t==========MENU=========\n";
	cout << "\n0.ket thuc";
	cout << "\n1.tao du lieu";
	cout << "\n2.xem du lieu";
	cout << "\n3.Selection";
	cout << "\n4.Insertion";
	cout << "\n5.Interchange";
	cout << "\n6.Buble";
	cout << "\n7.Shaker";
	cout << "\n8.Selection_R_L";
	
	cout << "\n\n\t\t==========MENU=========\n";

}
void XuLyMenu(int a[],int& n) {
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
			cout << "\n1.tao du lieu";
			
			TaoDuLieu(a, n);
			
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem du lieu";
			
			Output(a, n);
			
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.Selection";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Selection_R(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.Insertion";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Insertion_R(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.Interchange";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Interchange_R(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.Buble";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Buble_R(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.Shaker";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Shaker(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			Output(a, n);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.Selection_R_L";
			cout << "\ndanh sach ban dau la: ";
			Output(a, n);
			Selection_R_L(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			Output(a, n);
			system("pause");
		}
		else {
			cout << "lua chon khong ton tai hay nhap lai";
			system("pause");
		}
	}
}