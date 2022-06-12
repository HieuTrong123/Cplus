#pragma once
void Menu() {
	cout << "\n\n\t\t=================MENU==================\n";
	cout << "\n0. Thoát khỏi chương trình";
	cout << "\n1. Tạo danh sách nhân viên";
	cout << "\n2. Xuất bảng lương nhân viên theo thứ tự trước(NLR), thứ tự giữa(LNR), thứ tự cuối (LRN)";
	cout << "\n3. Xuất thông tin nhân viên khi biết mã nhân viên";
	cout << "\n4. Sửa năm sinh của nhân viên có mã nhân viên CT26032 thành 1991. Xuất kết quả ra màn hình .";
	cout << "\n5. Xóa nhân viên có mã nhân viên CT13452 ra khỏi danh sách nhân viên.Xuất kết quả ra màn hình .";
	cout << "\n6. Tính số nút của cây.";
	cout << "\n7. Tính chiều cao của cây.";
	cout << "\n8. Xác định mức của nút chứa nhân viên khi biết mã nhân viên";
	cout << "\n9. Xuất thông tin các nhân viên lưu trử ở các nút lá ra màn hình";
	cout << "\n\n\t\t=================MENU==================\n";

}
void XuLyMenu(BSTree*& root) {
	int luaChon;
	while (true) {
		system("cls");
		Menu();
		cout << "\nnhap lua chon cua ban: ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			system("cls");
			cout << "\n1. Tạo danh sách nhân viên";
			if (NhapTuFile(root))
				cout << "\nthanh cong\n";
			else {
				cout << "\nthat bai\n";
			}
			system("pause");
		}
		else if (luaChon == 2) {
			system("cls");
			cout << "\n2. Xuất bảng lương nhân viên theo thứ tự trước(NLR), thứ tự giữa(LNR), thứ tự cuối (LRN)";
			
			XuatDS_NLR(root);
			system("pause");
			XuatDS_LNR(root);
			system("pause");
			XuatDS_LRN(root);
			system("pause");
		}
		else if (luaChon == 3) {
			system("cls");
			cout << "\n3. Xuất thông tin nhân viên khi biết mã nhân viên";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_NLR(root);
			char maNV[10];
			cout << "\nnhap ma NV can tim: ";
			cin >> maNV;
			cout << endl;
			TimNV_maNV(root, maNV);
			system("pause");
		}
		else if (luaChon == 4) {
			system("cls");
			cout << "\n4. Sửa năm sinh của nhân viên có mã nhân viên CT26032 thành 1991. Xuất kết quả ra màn hình .";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_NLR(root);
			SuaThongTin(root, "CT26032");
			cout << "\nDanh sach luc sau la: ";
			XuatDS_NLR(root);
			system("pause");
		}
		else if (luaChon == 5) {
			system("cls");
			cout << "\n5. Xóa nhân viên có mã nhân viên CT13452 ra khỏi danh sách nhân viên.Xuất kết quả ra màn hình .";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_NLR(root);
			XoaNV(root);
			cout << "\nDanh sach luc sau la: ";
			XuatDS_NLR(root);
			system("pause");
		}
		else if (luaChon == 6) {
			system("cls");
			cout << "\n6. Tính số nút của cây.";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_NLR(root);
			int dem = 0;
			DemSoNut(root, dem);
			cout << "\nso nut cua cay la: " << dem;
			system("pause");
		}
		else if (luaChon == 7) {
			system("cls");
			cout << "\n7. Tính chiều cao của cây.";
			cout<<"\nchieu cao cua cay la: "<<TinhChieuCao(root);
			int max = 0;
			TimChieuCaoBSTree(root, root, max);
			cout << "\nchieu cao cua BSTree la: " << max;
			system("pause");
		}
		else if (luaChon == 8) {
			system("cls");
			cout << "\n8. Xác định mức của nút chứa nhân viên khi biết mã nhân viên";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_NLR(root);
			char maHV[10];
			cout << "\nnhap ma nhan vien can tim: ";
			cin >> maHV;
			cout<<"\nso mua cua nhan vien co ma so: "<<maHV<<"la: " << SoMucBSTree(root, maHV);
			system("pause");
		}
		else if (luaChon == 9) {
			system("cls");
			cout << "\n9. Xuất thông tin các nhân viên lưu trử ở các nút lá ra màn hình";
			cout << "\ndanh sach ban dau la: ";
			XuatDS_NLR(root);
			cout << "\nso nut la cua cay la: ";
			XuatNutLa(root);
			system("pause");
		}
	}
}