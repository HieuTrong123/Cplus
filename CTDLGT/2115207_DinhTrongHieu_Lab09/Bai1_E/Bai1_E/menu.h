void Menu() {
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.tao cay nhi phan";
	cout << "\n2.xuat cay nhi phan (NLR)";
	cout << "\n3.dem so nut cua cay";
	cout << "\n4.xac dinh chieu cao cua cay";
	cout << "\n5.dem so nut cua cay o muc k";
	cout << "\n6.dem so nut cua la cay";
	cout << "\n7.dem so nut co dung 2 nut con khac rong ";
	cout << "\n8.huy nut co khoa cho truoc";
	cout << "\n9.chen mot khoa vao cay";
}
void XuLyMenu(Btree*& p) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			return;
		}
		else if(luaChon == 1) {
			system("cls");
			cout << "\n1.tao cay nhi phan";
			if (NhapTuFile(p)) {
				cout << "\nTHANH CONG";
			}
			else {
				cout << "\nTHAT BAI";
			}
			cout << "\n";
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2.xuat cay nhi phan (NLR)";
			Xuat(p);
			cout << "\n";
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3.dem so nut cua cay";
			cout << "\ncay ban dau la: ";
			Xuat(p);
			cout << "\nso nut cua cay la: " << DemSoNode(p);
			cout << "\n";
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4.xac dinh chieu cao cua cay";
			cout << "\ncay ban dau la: ";
			Xuat(p);
			cout << "\nchieu cao cay p la: " << TinhChieuCao(p);
			cout << "\n";
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5.dem so nut cua cay o muc k";
			cout << "\ncay ban dau la: ";
			Xuat(p);
			int x;
			cout << "\nnhap mua k: ";
			cin >> x;
			cout << "\nnode muc " << x << " la: ";
			XuatNodeMuc_x(p, x,p);
			system("pause");
			
		}
		else if (luaChon == 6) {
			system("cls");
			cout << "\n6.dem so nut cua la cay";
			cout << "\ncay ban dau la: ";
			Xuat(p);
			int dem = 0;
			DenNutLa(p, dem);
			cout << "\nso nut la cua cay la: " << dem;

			system("pause");
			
		}
		else if (luaChon == 7) {
			system("cls");
			cout << "\n7.dem so nut co dung 2 nut con khac rong ";
			cout << "\ncay ban dau la: ";
			Xuat(p);
			int dem = 0;
			DenNut2ConKhacRong(p,dem);
			cout << "\nso nut con co 2 nut khac rong cua cay la: " << dem;
			system("pause");

		}
		else if (luaChon == 8) {
			system("cls");
			cout << "\n8.huy nut co khoa cho truoc";
			cout << "\ncay ban dau la: ";
			Xuat(p);
			int x;
			cout << "\nnhap data can xoa : ";
			cin >> x;
			Remove(p, x);
			cout << "\ncay luc sau la: ";
			Xuat(p);
			system("pause");
		}
		else if (luaChon == 9) {
			system("cls");
			cout << "\n9.chen mot khoa vao cay";
			cout << "\ncay ban dau la: ";
			Xuat(p);
			int x;
			cout << "\nnhap data can them : ";
			cin >> x;
			TaoDuLieu(p, x);
			cout << "\ncay luc sau la: ";
			Xuat(p);
			system("pause");
		}
	}
}