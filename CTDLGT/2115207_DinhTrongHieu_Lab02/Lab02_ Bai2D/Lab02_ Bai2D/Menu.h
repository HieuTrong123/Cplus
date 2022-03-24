#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, sinhvien a[MAX], int& n);
void XuatMenu()
{
	cout << "\n================ He thong chuc nang ===============";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tao danh sach sinh vien ";
	cout << "\n2. Xem danh sach sinh vien";
	cout << "\n3. Tim kiem theo ma sinh vien";
	cout << "\n4. Tim kiem theo ten-Xuat cac sinh vien cung ten";
	cout << "\n5. Tim kiem theo ho-Xuat cac sinh vien cung ho";
	cout << "\n6. Xuat sinh vien co diem trung binh >= dtb cho truoc";
	cout << "\n7. Tim kiem theo lop-Xuat danh sach sinh vien trong lop";
	cout << "\n8. Tim kiem nhi phan theo tich luy (neu truong tich luy co thu tu)";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS"); //xoa man hinh
		XuatMenu();
		cout << "\nNhap mot so (0 <= so <= " << soMenu << " ) de chon menu, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}
void XuLyMenu(int menu, sinhvien a[MAX], int& n)
{

	switch (menu)
	{
		int kq;
		char filename[MAX];
		
		case 0:
			system("CLS");
			cout << "\n0. Thoat khoi chuong trinh\n";
			break;
		case 1:
			system("CLS");
			cout << "\n1. Tao danh sach sinh vien";
			do
			{
				cout << "\nNhap ten tap tin, filename = ";
				cin >> filename;
				kq = TapTin_MangCT(filename, a, n);
			} while (!kq);
			cout << "\nDanh sach sinh vien vua nhap:\n";
			Xuat_DSSV(a, n);
			cout << endl;
			break;
		case 2:
			system("CLS");
			cout << "\n2. Xem danh sach sinh vien\n";
			cout << "\nDanh sach sinh vien hien hanh:\n";
			Xuat_DSSV(a, n);
			cout << endl;
			break;
		case 3:
			char maSo[10];
			system("CLS");
			cout << "\n3. Tim kiem theo ma sinh vien";
			cout << "\nnhap ma so can tim: ";
			cin >> maSo;
			if (Tim_MaSo_DauTien(maSo, a, n) == -1) {
				cout << "\nkhong ton tai ma so " << maSo << " trong danh sach";
			}
			else {
				cout << "\nsinh vien co ma so " << maSo << " co ten la: ";
				Xuat_SV(a[Tim_MaSo_DauTien(maSo, a, n)]);
			}

			break;
		case 4:
			char ten[10];
			system("CLS");
			cout << "\n4. Tim kiem theo ten--Xuat cac sinh vien cung ten\n";
			cout << "\nnhap ten can tim kiem: ";
			cin >> ten;
			Tim_TheoTen(ten, a, n);
			break;
		case 5:
			system("CLS");
			cout << "\n5. Tim kiem theo ho--Xuat cac sinh vien cung ho\n";
			char ho[10];
			cout << "\nNhap ho can tim kiem: ";
			cin >> ho;
			Tim_TheoHo(ho, a, n);
			break;
		case 6:
			double diemTB;
			system("CLS");
			cout << "\n6. Xuat sinh vien co diem trung binh >= dtb cho truoc\n";
			cout << "\nnhap diem trung binh can tim kiem: ";
			cin >> diemTB;
			Tim_TheoDTB(diemTB, a, n);

			break;
		case 7:
			char lop[6];
			system("CLS");
			cout << "\n7. Tim kiem theo lop--Xuat cac sinh vien thuoc lop\n";
			cout << "nhap lop can tim kiem: ";
			cin >> lop;
			Tim_TheoLop(lop, a, n);

			break;
		case 8:
			system("CLS");
			cout << "\n8. Tim kien nhi phan theo tich luy";
			TKNP_Theo_TichLuy(a, n);
			break;
		
	}
}
