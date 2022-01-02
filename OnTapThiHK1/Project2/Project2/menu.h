#pragma once


void Menu() {
	cout << "\n\n\t\t==========MENU===========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.nhap mang";
	cout << "\n2.xuat mang";
	cout << "\n3.them 1 phan tu vao vi tri cho tuoc";
	cout << "\n4.xia 1 phan tu tai vo tri cho truoc";
	cout << "\n\n\t\t==========MENU===========\n";
}
void XuLyMenu(int* a,int& n) {
	int luaChon ,x ,vt;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.nhap mang";
			cout << "\nNhap so phan tu cua mang: ";
			cin >> n;
			a = new int[n];
			Nhap_Mang(a, n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xuat mang";
			Xuat_Mang(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.them 1 phan tu vao vi tri cho tuoc";
			cout << "\nNhap phan tu can them: ";
			cin >> x;
			cout << "\nNhap vi tri can them: ";
			cin >> vt;
			Them(a, n, vt, x);

			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.xia 1 phan tu tai vo tri cho truoc";
			cout << "\nNhap vi tri can xoa: ";
			cin >> vt;
			Xoa(a, n, vt);
			system("pause");
		}
		else {
			cout << "\nkhong ton tai lua chon!!";
			system("pause");
		}
	}
}