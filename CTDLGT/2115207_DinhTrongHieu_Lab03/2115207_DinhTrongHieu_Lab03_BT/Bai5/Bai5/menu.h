#pragma once
void Menu() {
	cout << "\n\n\t\t==========MENU===========\n";
	
	cout << "\n0.ket thuc";
	cout << "\n1.tao du lieu";
	cout << "\n2.xem du lieu";
	cout << "\n3.thuat giai chon truc tiep";
	cout << "\n4.thuat giai chen truc tiep";
	cout << "\n5.thuat giai doi cho truc tiep";
	cout << "\n6.thuat giai buble";
	
	cout << "\n\n\t\t==========MENU===========\n";

}
void XuLyMenu(int a[], int& n) {
	int chon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> chon;
		if (chon == 0) {
			break;
		}
		else if (chon == 1) {
			cout << "\n1.tao du lieu";
			if (TaoDuLieu(a, n))
				cout << "\n\n\t\tTHANH CONG\n";
			else
				cout << "\n\n\t\tTHAT BAI\n";
			system("pause");
		}
		else if (chon == 2) {
			cout << "\n2.xem du lieu";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (chon == 3) {
			cout << "\n3.thuat giai chon truc tiep";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			ChonTrucTiep(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (chon == 4) {
			cout << "\n4.thuat giai chen truc tiep";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			ChenTrucTiep(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (chon == 5) {
			cout << "\n5.thuat giai doi cho truc tiep";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			DoiChoTrucTiep(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (chon == 6) {
			cout << "\n6.thuat giai buble";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			BubleSort(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else  {
			cout << "\nlua chon cua ban khong ton tai !!";
			system("pause");
		}
	}
}