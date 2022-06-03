#pragma once
void HocVienQueLam_Dong(LIST ds) {
	XuatTieuDe();
	int i = 0;
	for (Node* k = ds.pHead; k != NULL; k = k->pNext) {
		if (_strcmpi(k->data.queQuan, "Lam_Dong") == 0 && k->data.diem > 5) {
			XuatMotHV(k->data);
			cout << endl;
			i++;
		}
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
	XuatDongKe('=');
}
void HocVienTenHOA_1990(LIST ds) {
	XuatTieuDe();
	int i = 0;
	for (Node* k = ds.pHead; k != NULL; k = k->pNext) {
		if (_strcmpi(k->data.ten, "HOA") == 0 && k->data.namSinh == 1990) {
			XuatMotHV(k->data);
			cout << endl;
			i++;
		}
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
	XuatDongKe('=');
}
void HocVienTenDiem_BeHon5_1990(LIST ds) {
	XuatTieuDe();
	int i = 0;
	for (Node* k = ds.pHead; k != NULL; k = k->pNext) {
		if (k->data.diem<5 && k->data.namSinh == 1990) {
			XuatMotHV(k->data);
			cout << endl;
			i++;
		}
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
	XuatDongKe('=');
}