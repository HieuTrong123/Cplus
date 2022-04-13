#pragma once
void Menu() {
	
	cout << "\n\n\t\t==============MENU============\n";
	cout << "\nsap tang day n voi cac chuc nang";
	cout << "\n0.ket thuc";
	cout << "\n1.tao du lieu";
	cout << "\n2.xem du lieu";
	cout << "\n3.Merge Sort";
	cout << "\n4.Heap Sort";
	cout << "\n5.RaDix Sort";
	cout << "\n6.Quick Sort";

	cout << "\n\n\t\t==============MENU============\n";

}
void XuLyMenu(int a[], int& n) {
	int luaChon;
	while (true)
	{
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao du lieu";
			char filename[20];
			cout << "\nnhap ten file chua du lieu phu hop : ";
			cin >> filename;
			if (TaoDuLieu(a, n, filename))
				cout << "\n\n\t\tTHANH CONG\n";
			else
				cout << "\n\n\t\tTHAT BAI\n";
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem du lieu";
			cout << endl;
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.Merge Sort";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			MergeSort(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.Heap Sort";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			HeapSort(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.RaDix Sort";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Radix(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.Quick Sort";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			QuickSort(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua bna khong ton tai hay nhap lai!!";
			system("pause");
		}

	}
}
