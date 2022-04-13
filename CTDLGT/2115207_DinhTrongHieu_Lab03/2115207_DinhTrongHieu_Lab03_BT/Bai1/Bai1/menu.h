#pragma once
void Menu() {
	cout << "\n\n\t\t============MENU============";
	cout << "\n0.ket thuc";
	cout << "\n1.tao du lieu";
	cout << "\n2.xem du lieu";
	cout << "\n3.thuat giai chon truc tiep-tai moi buoc dua GTNN ve dau mang";
	cout << "\n4.thuat giai chon truc tiep-tai moi buoc dua GTLN ve dau mang";
	cout << "\n5.thuat giai chon hai dau";
	cout << "\n6.thuat giai chen truc tiep-chen vao day con tang ben trai";
	cout << "\n7.thuat giai chen truc tiep-chen vao day con tang ben phai";
	cout << "\n8.thuat giai chen nhi phan";
	cout << "\n9.thuat giai doi cho truc tiep-tai moi buoc dua GTNN ve dau mang";
	cout << "\n10.thuat giai doi cho truc tiep-tai moi buoc dua GTLN ve dau mang";
	cout << "\n11.thuat giai buble-tai moi buoc dua GTNN ve dau mang";
	cout << "\n12.thuat giai buble-tai moi buoc dua GTLN ve dau mang";

	cout << "\n\n\t\t============MENU============";

}
void XuLyMenu(int a[],int& n) {
	int luaChon;
	while (true)
	{
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.tao du lieu";
			char filename[20];
			cout << "\nnhap ten file chua du lieu: ";
			cin >> filename;
			TaoDuLieu(a, n, filename);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem du lieu";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.thuat giai chon truc tiep-tai moi buoc dua GTNN ve dau mang";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Selection_L(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.thuat giai chon truc tiep-tai moi buoc dua GTLN ve dau mang";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Selection_L_GTLN(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.thuat giai chon hai dau";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Selection_R_L(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.thuat giai chen truc tiep-chen vao day con tang ben trai";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Insertion_L(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.thuat giai chen truc tiep-chen vao day con tang ben phai";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Insertion_R(a, n);

			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.thuat giai chen nhi phan";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Binary_Insertion(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 9) {
			cout << "\n9.thuat giai doi cho truc tiep-tai moi buoc dua GTNN ve dau mang";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Interchange_L(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 10) {
			cout << "\n10.thuat giai doi cho truc tiep-tai moi buoc dua GTLN ve dau mang";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Interchange_R(a, n);

			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 11) {
			cout << "\n11.thuat giai buble-tai moi buoc dua GTNN ve dau mang";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Buble_L(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			system("pause");
		}
		else if (luaChon == 12) {
			cout << "\n12.thuat giai buble-tai moi buoc dua GTLN ve cuoi mang";
			cout << "\ndanh sach ban dau la: ";
			XemDuLieu(a, n);
			Buble_R(a, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XemDuLieu(a, n);
			
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai!!!";
			system("pause");
		}
	}
}