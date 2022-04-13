#pragma once


void Menu() {
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tinh tong n so le duong dau tien";
	cout << "\n2.tinh tich n so le duong dau tien";
	cout << "\n3.tinh tong";
	cout << "\n\n\t\t=========MENU=========\n";
}
void XuLyMenu() {
	int luaChon ,n,k;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tinh tong n so le duong dau tien";
			cout << "\nNhap n: ";
			cin >> n;
			k = n * 2;
			cout<<"\nTong n so le dau tien la: " << TinhTongSoLe(n,k);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.tinh tich n so le duong dau tien";
			cout << "\nNhap n: ";
			cin >> n;
			k = n * 2;
			cout << "\nTich n so le dau tien la: " << TinhTichSoLe(n, k);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tinh tong";
			cout << "\nNhap n: ";
			cin >> n;
			cout<<TongGiaiThua(n);
			system("pause");
		}
		else {
			cout << "\nlua chon khong ton tai hay nhap lai!!!";
			system("pause");
		}
	}
}