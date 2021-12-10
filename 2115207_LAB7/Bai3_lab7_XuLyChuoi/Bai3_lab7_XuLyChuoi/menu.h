

void Menu() {
	cout << "\n\n\t\t=========MENU========\n";
	cout << "\n0.Ket thuc chuong trinh";
	cout << "\n1.chuyen tat ca ky tu trong chuoi thanh ky tu thuong";
	cout << "\n2.chuyen tat ca ky tu trng chuoi thanh ky ru HOA";
	cout << "\n3.dao nguoc chuoi";
	cout << "\n4.kiem tra 1 chuoi co phai chuoi doi xung khong";
	cout << "\n\n\t\t=========MENU========\n";
}
void XuLyMenu(xau a) {
	int luaCHon;
	while (true)
	{
		system("cls");
		Menu();
		cout << "\nNhap lua chon cua ban : ";
		cin >> luaCHon;
		if (luaCHon == 0) {
			break;
		}
		else if (luaCHon == 1) {
			cout << "\n1.chuyen tat ca ky tu trong chuoi thanh ky tu thuong";
			Chuyen_Ky_Tu_Thuong(a);
			system("pause");
		}
		else if (luaCHon == 2) {
			cout << "\n2.chuyen tat ca ky tu trng chuoi thanh ky ru HOA";
			Chuyen_Ky_Tu_Hoa(a);
			system("pause");
		}
		else if (luaCHon == 3) {
			cout << "\n3.dao nguoc chuoi";
			Dao_Nguoc(a);
			system("pause");
		}
		else if (luaCHon == 4) {
			cout << "\n4.kiem tra 1 chuoi co phai chuoi doi xung khong";
			Kiem_Tra_Chuoi_Doi_Xung(a);

			
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai !!";
			system("pause");
		}
	}




}