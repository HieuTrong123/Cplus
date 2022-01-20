#pragma once
void XuatMenu();
void XuLyMenu(char filename, SinhVien a[MAX], int n);

void XuatMenu() {
	cout << "\n====CHON CHUC NANG====";
	cout << "\n0. Thoat khoi chuong trinh!";
	cout << "\n1. Tao bang diem mon hoc";
	cout << "\n2. Xem bang diem mon hoc";
	cout << "\n3. Xuat sinh vien co ma sinh vien cho truoc";
	cout << "\n4. Xuat cac sinh vien co ten Hoa thuoc lop CTK19";
	cout << "\n5. Xuat cac sinh vien co diem thap nhat";
	cout << "\n======================";
}

void XuLyMenu(char filename[MAX], SinhVien a[MAX], int n) {
	int stt;
	char maso[8];
	while (true) {
		system("CLS");
		XuatMenu();
		cout << "\nChon chuc nang: ";
		cin >> stt;
		if (stt == 0) {
			cout << "\nThoat khoi chuong trinh!";
			break;
		}
		else if (stt == 1) {
			system("CLS");
			cout << "\n1. Tao bang diem mon hoc";
			cout << "\n";
			cout << "\nNhap ten file mo de doc: ";
			cin >> filename;
			Doc_File_DuLieu(filename, a, n);
			if (Doc_File_DuLieu(filename, a, n)) {
				cout << "\nDoc file du lieu thanh cong";
			}
			else {
				cout << "\nDoc file du lieu that bai";
			}
			cout << "\n";
			system("pause");
		}
		else if (stt == 2) {
			system("CLS");
			cout << "\n2. Xem bang diem mon hoc";
			cout << "\n";
			XuatDanhSach(a, n);
			cout << "\n";
			system("pause");
		}
		else if (stt == 3) {
			system("CLS");
			cout << "\n3. Xuat sinh vien co ma sinh vien cho truoc";
			cout << "\n";
			cout << "\nNhap ma sinh vien muon tim: ";
			cin >> maso;
			XuatSinhVien_Ma(a, n, maso);
			cout << "\n";
			system("pause");
		}
		else if (stt == 4) {
			system("CLS");
			cout << "\n4. Xuat cac sinh vien co ten Hoa thuoc lop CTK19";
			cout << "\n";
			XuatCacSinhVienTenHoa(a, n);
			cout << "\n";
			system("pause");
		}
		else if (stt == 5) {
			system("CLS");
			cout << "\n5. Xuat cac sinh vien co diem thap nhat";
			cout << "\n";
			cout << "\n";
			system("pause");
		}
		else {
			system("cls");
			cout << "\nChuc nang khong ton tai";
			cout << "\n";
			system("pause");
		}
	}
}

#pragma once
