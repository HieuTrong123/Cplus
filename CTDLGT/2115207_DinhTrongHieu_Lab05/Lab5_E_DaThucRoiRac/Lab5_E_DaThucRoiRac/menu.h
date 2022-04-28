#pragma once
void Menu() {
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.nhap du lieu cho da thuc";
	cout << "\n2.xem da thuc";
	cout << "\n3.tong 2 da thuc";
	cout << "\n4.hieu 2 da thuc";
	cout << "\n5.tich 2 da thuc";
	cout << "\n6.tinh dao ham da thuc";
	cout << "\n7.tinh tich ohan ham da thuc";
	cout << "\n8.tinh gia tri da thuc tai x";
}
void XuLyMenu(LIST& A,LIST& B) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua bna: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\n1.nhap du lieu cho da thuc";
			if (TaoDuLieu(A, B)) {
				cout << "\nthanh cong\n";
			}
			else {
				cout << "\nthat bai\n";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\n2.xem da thuc";
			cout << "\nda thuc A: ";
			Output_Poly(A);
			cout << "\nda thuc B: ";
			Output_Poly(B);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\n3.tong 2 da thuc";
			cout << "\nda thuc A: ";
			Output_Poly(A);
			cout << "\nda thuc B: ";
			Output_Poly(B);
			cout << "\ntong 2 da thuc A B la: ";
			Output_Poly(Add(A, B));
			system("pause");
		}
		else if (luaChon == 4) {
			cout << "\n4.hieu 2 da thuc";
			cout << "\nda thuc A: ";
			Output_Poly(A);
			cout << "\nda thuc B: ";
			Output_Poly(B);
			cout << "\nhieu 2 da thuc A B la: ";
		    Output_Poly(Hieu(A, B));
			system("pause");
		}
		else if (luaChon == 5) {
			cout << "\n5.tich 2 da thuc";
			cout << "\nda thuc A: ";
			Output_Poly(A);
			cout << "\nda thuc B: ";
			Output_Poly(B);
			cout << "\ntich 2 da thuc A B la: ";
			Output_Poly(NhanHaiDaThuc(A, B));
			system("pause");
		}
		else if (luaChon == 6) {
			cout << "\n6.tinh dao ham da thuc";
			cout << "\nda thuc A: ";
			Output_Poly(A);
			cout << "\nda thuc B: ";
			Output_Poly(B);
			cout << "\ndao ham da thuc A la: ";
			Output_Poly(DaoHam(A));
			cout << "\ndao ham da thuc B la: ";
			Output_Poly(DaoHam(B));
			system("pause");
		}
		else if (luaChon == 7) {
			cout << "\n7.tinh tich phan ham da thuc";
			cout << "\nda thuc A: ";
			Output_Poly(A);
			cout << "\nda thuc B: ";
			Output_Poly(B);
			cout << "\ntich phan da thuc A la: ";
			Output_Poly(TichPhan(A));
			cout << "\ntich phan da thuc B la: ";
			Output_Poly(TichPhan(B));
			system("pause");
		}
		else if (luaChon == 8) {
			cout << "\n8.tinh gia tri da thuc tai x";
			cout << "\nda thuc A: ";
			Output_Poly(A);
			cout << "\nda thuc B: ";
			Output_Poly(B);
			double k;
			cout << "\nnhap x: ";
			cin >> k;
			cout << "\ngia tri da thuc A tai x= " << k << " la: "<<GiaTriTaiX(A,k);

			cout << "\ngia tri da thuc B tai x= " << k << " la: " << GiaTriTaiX(B, k);
			system("pause");
		}
		else {
			cout << "\nlua chon khong ton tai hay nhap lai!";
			system("pause");
		}
	}
	
}