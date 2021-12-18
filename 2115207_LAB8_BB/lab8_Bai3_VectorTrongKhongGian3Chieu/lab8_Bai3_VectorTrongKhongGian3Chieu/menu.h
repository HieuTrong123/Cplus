void Menu() {
	
	cout << "\n\n\t\t=========MENU=========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.Nhap toan do";
	cout << "\n2.xem vector";
	cout << "\n3.Tinh do dai vector u";
	cout << "\n4.kiem tra 2 vector co bang nhau khong";
	cout << "\n5.tinh tong 2 vector u va v";
	cout << "\n6.tinh hieu 2 vector u va v";
	cout << "\n7.tinh tich cua mot so thuc voi mot vector ";
	cout << "\n8.tinh tich vo huong hai vector u va v";
	cout << "\n9.kiem tra hai vector u va v co vuong goc voi nhau khong ";


	cout << "\n\n\t\t=========MENU=========\n";

}
void Xu_Ly_Chuong_Trinh(Vector& u) {
	int luaChon;
	Vector v;
	double k;
	while (true) {
		system("cls");
		Menu();
		cout << "\n\nNhap lua chon cua ban  :  ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.Nhap toan do";
			cout << "\nnhap toan do vector u : ";
			NhapToaDo(u);
			cout << "\nnhap toa do cua v : ";
			NhapToaDo(v);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem vector";
			cout << "\nxem toa do cua u : ";
			XemVecTor(u, 'u');
			cout << "\nxem toa do cua v : ";
			XemVecTor(v, 'v');
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.Tinh do dai vector u";
			cout << "do dai vector u la : " << TinhDoDai(u);
			cout << "do dai vector v la : " << TinhDoDai(v);
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.kiem tra 2 vector co bang nhau khong";
			
			cout << "\nxem toa do cua v : ";
			XemVecTor(v, 'v');
			cout << "\nxem toa do cua u : ";
			XemVecTor(u, 'u');
			if (KiemTra2VectorBangNhau(u, v)) {
				cout << "\nhai vector bang nhau";
			}
			else {
				cout << "\nhai vextor khong bang nhau : ";
			}
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tinh tong 2 vector u va v";
			cout << "\nvector tong cua 2 vec tor u va v la : ( " 
				<< TinhTong(u, v).x << " ; " << TinhTong(u, v).y << " ; "
				<< TinhTong(u, v).z << " ) ";
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.tinh hieu 2 vector u va v";
			cout << "\nvector hieu cua 2 vec tor u va v la : ( "
				<< TinhHieu(u, v).x << " ; " << TinhHieu(u, v).y << " ; "
				<< TinhHieu(u, v).z << " ) ";
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.tinh tich cua mot so thuc voi mot vector  ";
			cout << "\nNhap k : ";
			cin >> k;
			cout << "\nvector tich cua k va vec tor u  la : ( "
				<< TinhTich(u, k).x << " ; " << TinhTich(u, k).y << " ; "
				<< TinhTich(u, k).z << " ) ";
			cout << "\nvector tich cua k va vec tor v  la : ( "
				<< TinhTich(v, k).x << " ; " << TinhTich(v, k).y << " ; "
				<< TinhTich(v, k).z << " ) ";
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.tinh tich vo huong hai vector u va v";
			cout << "tich vo huong cua u va v la : " << TichVoHuong(u, v);
			system("pause");
		}
		else if (luaChon == 9) {
			cout << "\n9.kiem tra hai vector u va v co vuong goc voi nhau khong ";
			if (TichVoHuong(u, v) == 0) {
				cout << "\nHai vector vuong goc voi nhau ";
			}
			else {
				cout << "\nhai vector khong vuong goc voi nhau ";
			}
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai !!";
			system("pause");
		}
	}


}