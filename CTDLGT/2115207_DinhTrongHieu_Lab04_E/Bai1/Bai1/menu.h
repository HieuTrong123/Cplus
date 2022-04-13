#pragma once
void Menu() {
	cout << "\n\n\t\t===============MENU==============\n";
	cout << "\n0.thoat khoi chuong trinh";
	cout << "\n1.tao danh sach";
	cout << "\n2.xem danh sach";
	cout << "\n3.tinh gia tri nho nhat cua danh sach";
	cout << "\n4.tinh gia tri lon nhat cua danh sach";
	cout << "\n5.dem gia tri x xuat hien bao nhieu lan trong danh sach";
	cout << "\n6.tinh tong gia tri trong danh sach";
	cout << "\n7.tinh tong gia tri khac nhau trong danh sach";
	cout << "\n8.xuat cac gia tri khac nhau torng danh sach";
	cout << "\n9.sap day tang dan bang thuat giai chen truc tiep";
	cout << "\n10.sap danh sach theo yeu cau : 0 o dau,am giam dan,duong tang dan";
	cout << "\n\n\t\t===============MENU==============\n";


}
void XuLyMenu(LIST& l) {
	while (true) {
		int chon;
		system("cls");
		Menu();
		cout << "\nNhpa lua chon cua ban: ";
		cin >> chon;
		if (chon == 0) {
			break;
		}
		else if (chon == 1) {
			cout << "\n1.tao danh sach";
			cout << endl;
			TaoDuLieu(l);
			char filename[20];
			cout << "nhap ten file chua thong tin : ";
			cin >> filename;
			if (TaoDnahSach(l, filename)) {
				cout << "\n\n\t\tTHANH CONG\n";
			}
			else {
				cout << "\n\n\t\tTHAT BAI\n";
			}
			system("pause");
		}
		else if (chon == 2) {
			cout << "\n2.xem danh sach\n";
			XemDanhSach(l);
			system("pause");
		}
		else if (chon == 3) {
			cout << "\n3.tinh gia tri nho nhat cua danh sach";
			cout << "\ndanh sach:\n";
			XemDanhSach(l);
			cout << "gia tri nho nhat danh sach la: " << TimMin(l);
			system("pause");
		}
		else if (chon == 4) {
			cout << "\n4.tinh gia tri lon nhat cua danh sach";
			cout << "\ndanh sach:\n";
			XemDanhSach(l);
			cout << "gia tri lon nhat danh sach la: " << TimMax(l);
			system("pause");
		}
		else if (chon == 5) {
			cout << "\n5.dem gia tri x xuat hien bao nhieu lan trong danh sach";
			cout << "\ndanh sach:\n";
			XemDanhSach(l);
			int x;
			cout << "nhap x: ";
			cin >> x;
			cout << "\nso lan xuat hien x la: " << demX(l, x);
			system("pause");
		}
		else if (chon == 6) {
			cout << "\n6.tinh tong gia tri trong danh sach";
			cout << "\ndanh sach:\n";
			XemDanhSach(l);
			cout << "\ntong gia tri torng danh sach la: " << Tong(l);
			system("pause");
		}
		else if (chon == 7) {
			cout << "\n7.tinh tong gia tri khac nhau trong danh sach";
			cout << "\ndanh sach:\n";
			XemDanhSach(l);
			cout << "\ntong gia tri khac nhau trong danh sach la: " << Tong(DSGTKhacNhau(l));
			system("pause");
		}
		else if (chon == 8) {
			cout << "\n8.xuat cac gia tri khac nhau torng danh sach";
			cout << "\ndanh sach:\n";
			XemDanhSach(l);
			cout<<"\ndanh sach khac nhau la: \n";
			XemDanhSach(DSGTKhacNhau(l));
			system("pause");
		}
		else if (chon == 9) {
			cout << "\n9.sap day tang dan bang thuat giai chen truc tiep";
			cout << "\ndanh sach truoc khi sap xep la: \n";
			XemDanhSach(l);
			SapXepChenTrucTiep(l);
			cout << "\ndanh sach sau khi sap xep la: \n";
			XemDanhSach(l);
			system("pause");
		}
		else if (chon == 10) {
			cout << "\n10.sap danh sach theo yeu cau : 0 o dau,am giam dan,duong tang dan";
			cout << "\ndanh sach truoc khi sap xep la: \n";
			XemDanhSach(l);
			SapXepTheoYeuCau(l);
			cout << "\ndanh sach sau khi sap xep la: \n";
			XemDanhSach(l);
			system("pause");
		}
		else {
			cout << "\nlua chon ban nhap khong ton tai hay nhap lai";
			system("pause");
		}
	}
}
