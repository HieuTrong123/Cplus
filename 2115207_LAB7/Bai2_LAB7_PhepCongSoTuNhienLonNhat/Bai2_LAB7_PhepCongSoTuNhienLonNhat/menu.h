

void Menu() {
	cout << "\n\n\t\t========MENU========\n";
	cout << "\n0.ket thuc";
	cout << "\n1.xem chuoi ";
	cout << "\n2.Tinh tong so tu nhien lon";
	cout << "\n\n\t\t========MENU========\n";

}
void Xu_Ly_Menu(SoTuNhienLon m , SoTuNhienLon n, SoTuNhienLon t) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n2.xem chuoi ";
			cout << "chuoi m la : "<<m;
			cout << "chuoi n la : " << n;
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n3.Tinh tong so tu nhien lon";
			CongSoTuNhienLon(m, n, t);
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai !!";
			system("pause");
		}
	}
}
