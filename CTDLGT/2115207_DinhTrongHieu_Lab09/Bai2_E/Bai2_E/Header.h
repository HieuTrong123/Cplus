#pragma once
struct HocVien
{
	char maHV[8];
	char hoTen[26];
	int namSinh;
	char diaChi[16];
	double diem;
};
struct NODE
{
	HocVien data;
	NODE* pLeft;
	NODE* pRight;
};
void CreatNode(NODE*& p) {
	p = NULL;
}
NODE* GetNode(HocVien data) {
	NODE* p = new NODE;
	p->data = data;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}
void Add(NODE*& p, HocVien data) {
	if (p == NULL) {
		p = GetNode(data);
	}
	else {
		if (_strcmpi(data.maHV , p->data.maHV)<0) {
			Add(p->pLeft,data);
		}
		else if (_strcmpi(data.maHV, p->data.maHV) > 0) {
			Add(p->pRight, data);
		}
	}
}
int TaoDuLieu(NODE*& r) {
	CreatNode(r);
	ifstream in("bd.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		HocVien data;
		in >> data.maHV;
		in >> data.hoTen;
		in >> data.namSinh;
		in >> data.diaChi;
		in >> data.diem;
		Add(r, data);
	}
	in.close();
	return 1;
}
void XuatDongKe(char x) {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 75; i++) {
		cout << x;
	}
	cout << ':';
	cout << endl;
}
void XuatTieuDe() {
	XuatDongKe('=');
	cout << setiosflags(ios::left)
		<< ':' << setw(10) << "ma HV" << ':' << setw(30) << "hoTen" << ':'
		<< setw(10) << "nam sinh" << ':' << setw(15) << "que quan" << ':' << setw(5) << "diemTB" << ':';
	XuatDongKe('=');

}
void XuatMotHV(HocVien hv) {
	cout << setiosflags(ios::left)
		<< ':' << setw(10) << hv.maHV << ':' << setw(30) << hv.hoTen  << ':'
		<< setw(10) << hv.namSinh << ':' << setw(15) << hv.diaChi << ':' << setw(5) << hv.diem << ':';
}
void XuatDS(NODE* ds) {
	if (ds != NULL) {
		XuatMotHV(ds->data);
		cout << endl;
		XuatDS(ds->pLeft);
		XuatDS(ds->pRight);
	}
}
void XuatBangDiem(NODE* ds) {
	XuatTieuDe();
	XuatDS(ds);
	XuatDongKe('=');
}
