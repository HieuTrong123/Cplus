#pragma once
void Menu() {
	cout << "\n\n\t\t===========MENU=============\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1. tao du lieu";
	cout << "\n2. xem du lieu";
	cout << "\n3. Tim x - Co / Khong";
	cout << "\n4. Tim x - Tra ve vi tri nut dau tien xuat hien neu co";
	cout << "\n5. Tim x - Tra ve vi tri nut cuoi cung xuat hien neu co";
	cout << "\n6. Tim x - Xuat cac vi tri xuat hien neu co";
	cout << "\n7. Xuat DS moi, voi Head moi tro toi nut x xuat hien cuoi cung";
	cout << "\n8. Chen x vao dau danh sach vong";
	cout << "\n9. Chen x vao cuoi danh sach vong";
	cout << "\n10. Huy nut dau danh sach vong";
	cout << "\n11. Huy nut cuoi danh sach vong";
	cout << "\n12. Huy toan bo danh sach vong";
	cout << "\n13. Dem so nut danh sach vong";
	cout << "\n\n\t\t===========MENU=============\n";

}
void XuLyMenu(LLIST& l) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nhay nhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			system("cls");
			char filename[MAX];
			cout << "\n1. tao du lieu";
			system("CLS");
			cout << "\nNhap ten tap tin, filename = ";
			_flushall();
			cin >> filename;
			if (!File_LLIST(filename, l))
			{
				cout << "\nLoi mo file ! nhap lai\n";
				_getch();
			}
			else
			{
				cout << "\nDu lieu tap tin " << filename << " da duoc chuyen vao DSLKDV l"
					<< "\nNhan phim bat ky de tiep tuc";
				_getch();
				break;
			}
			
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2. xem du lieu";
			Output_Llist(l);
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3. Tim x - Co / Khong";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			int x;
			cout << "\nnhap x: ";
			cin >> x;
			if (Search(l, x)) {
				cout << "\nCo";
			}
			else {
				cout << "\nKhong";
			}
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4. Tim x - Tra ve vi tri nut dau tien xuat hien neu co";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			int x;
			cout << "\nnhap x: ";
			cin >> x;
			cout << "\nvi tri dau tien cua x la: " << Search_Pos_First(l, x);
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5. Tim x - Tra ve vi tri nut cuoi cung xuat hien neu co";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			int x;
			cout << "\nnhap x: ";
			cin >> x;
			cout << "\nvi tri cuoi cung cua x la: " <<Search_Pos_End(l, x);
			system("pause");
		}
		else if (luaChon == 6) {
			system("cls");
			cout << "\n6. Tim x - Xuat cac vi tri xuat hien neu co";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			cout << "danh sach ban dau la: ";
			int x;
			cout << "\nnhap x: ";
			cin >> x;
			Search_All_Pos_x(l, x);
			system("pause");
		}
		else if (luaChon == 7) {
			system("cls");
			cout << "\n7. Xuat DS moi, voi Head moi tro toi nut x xuat hien cuoi cung";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			int x;
			cout << "\nnhap x: ";
			cin >> x;
			cout << "\ndanh sach moi la: ";
			Head_New(l, x);
			Output_Llist(l);
			system("pause");
		}
		else if (luaChon == 8) {
			system("cls");
			cout << "\n8. Chen x vao dau danh sach vong";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);

			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			system("pause");
		}
		else if (luaChon == 9) {
			system("cls");
			cout << "\n9. Chen x vao cuoi danh sach vong";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			system("pause");
		}
		else if (luaChon == 10) {
			system("cls");
			cout << "\n10. Huy nut dau danh sach vong";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			RemoveHead(l);
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			system("pause");
		}
		else if (luaChon == 11) {
			system("cls");
			cout << "\n11. Huy nut cuoi danh sach vong";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			RemoveTail(l);
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			system("pause");
		}
		else if (luaChon == 12) {
			system("cls");
			cout << "\n12. Huy toan bo danh sach vong";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			RemoveLLIST(l);
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			system("pause");
		}

		else if (luaChon == 13) {
			system("cls");
			cout << "\n13. Dem so nut danh sach vong";
			cout << "danh sach ban dau la: ";
			Output_Llist(l);
			
			system("pause");
		}
	}
}