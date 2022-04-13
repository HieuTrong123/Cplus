#pragma once
void Menu() {
	cout << "\n\n\t\t============MENU=============\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao du lieu";
	cout << "\n2.xem du lieu";
	cout << "\n3.QuickSort";
	cout << "\n4.HeapSort";
	cout << "\n5.MergSort";
	cout << "\n\n\t\t============MENU=============\n";
}
void XuLyMenu(sinhvien ds[], int& n) {
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
			char filename[20];
			cout << "\n1.tao du lieu";
			cout << "\nNhap ten file chua du lieu can nhap: ";
			cin >> filename;
			if (File_Array(filename, ds, n)) {
				cout << "\n\n\t\tTHANH CONG\n";

			}
			else {
				cout << "\n\n\t\tTHAT BAI\n";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem du lieu";
			Output_Arr(ds, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.QuickSort";
			QuickSort(ds, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.HeapSort";
			HeapSort(ds, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.MergSort";
			MergeSort(ds, n);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai!!";
			system("pause");
		}
	}

}