#pragma once
void XuatMenu()
{
	cout << "\n======== He thong sap tang dan theo MaNhan Vien===============";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tao du lieu";
	cout << "\n2. Xem du lieu";
	cout << "\n3. Chon truc tiep";
	cout << "\n4. Chen truc tiep";
	cout << "\n5. Doi cho truc tiep";
	cout << "\n6. Noi bot";
	cout << "\n7. Quick Sort";
	cout << "\n8. Heap Sort";

	cout << "\n======== =====================================================\n";
}
void XuLuyMenu(nhanvien a[],int &n) {
	int luaChon;
	nhanvien b[MAX];
	char file[100] = "nv.txt";
	int kq;
	while (true) {
		system("cls");
		XuatMenu();
		cout << "\nNhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			
			system("CLS");
			cout << "\n1. Tao du lieu\n";
			kq = TapTin_Mang1C(file, a, n);
			if (kq)
				cout << "\nDa tao du lieu thanh cong";
			Xuat_DSNV(a, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 2) {
			system("CLS");
			cout << "\n2. Xem danh sach\n";
			Xuat_DSNV(a, n);
			cout << endl;
			cout << "\nChi xuat ma nhan vien:\n";
			Xuat_DSNV_maNV(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			system("CLS");
			cout << "\n4. Chen truc tiep";
			cout << "\nDanh sach hien hanh\n";
			Xuat_DSNV(a, n);
			ChonTrucTiep(a, n);
			cout << "\nDanh sach sau khi sap xep \n";
			Xuat_DSNV(a, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 4) {
			system("CLS");
			cout << "\n4. Chen truc tiep";
			cout << "\nDanh sach hien hanh\n";
			Xuat_DSNV(a, n);
			Insertion_R(a, n);
			cout << "\nDanh sach sau khi sap xep \n";
			Xuat_DSNV(a, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 5) {
			system("CLS");
			cout << "\n5. Doi cho truc tiep";
			cout << "\nDanh sach hien hanh\n";
			Xuat_DSNV(a, n);
			Interchange_R(a, n);
			cout << "\nDanh sach sau khi sap xep \n";
			Xuat_DSNV(a, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 6) {
			system("CLS");
			cout << "\n6. Noi bot";
			cout << "\nDanh sach hien hanh\n";
			Xuat_DSNV(a, n);
			Buble_R(a, n);
			cout << "\nDanh sach sau khi sap xep \n";
			Xuat_DSNV(a, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 7) {
			system("CLS");
			cout << "\n7. Quick Sort";
			cout << "\nDanh sach hien hanh\n";
			Xuat_DSNV(a, n);
			QuickSort(a, n);
			cout << "\nDanh sach sau khi sap xep \n";
			Xuat_DSNV(a, n);
			cout << endl;
			system("pause");
		}
		else if (luaChon == 8) {
			system("CLS");
			cout << "\n8. Heap Sort";
			cout << "\nDanh sach hien hanh\n";
			Xuat_DSNV(a, n);
			HeapSort(a, n);
			cout << "\nDanh sach sau khi sap xep \n";
			Xuat_DSNV(a, n);
			cout << endl;
			system("pause");
		}

	}
}
