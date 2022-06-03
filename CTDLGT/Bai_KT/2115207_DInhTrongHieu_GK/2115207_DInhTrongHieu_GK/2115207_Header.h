#pragma once
struct  HocVien
{
	char maHV[15];
	char Ho[15];
	char tLot[15];
	char ten[15];
	int namSinh;
	char queQuan[20];
	double diem;
};
struct  Node
{
	HocVien data;
	Node* pNext;
};
struct LIST
{
	Node* pHead;
	Node* pTail;
};
void KhoiTaoLIST(LIST& a) {
	a.pHead = a.pTail = NULL;
}
Node* KhoiTaoNode(HocVien x) {
	Node* p = new Node;
	p->data = x;
	p->pNext = NULL;
	return p;
}
void Add(LIST& a, HocVien x) {
	Node* p = KhoiTaoNode(x);
	if (a.pHead == NULL) {
		a.pHead = a.pTail = p;
	}
	else {
		a.pTail->pNext = p;
		a.pTail = p;
	}
}
int TaoDuLieu(LIST& a, char* filename) {
	KhoiTaoLIST(a);
	ifstream in(filename);
	if (!in)
		return 0;
	while (!in.eof()) {
		HocVien x;
		in >> x.maHV;
		in >> x.Ho;
		in >> x.tLot;
		in >> x.ten;
		in >> x.namSinh;
		in >> x.queQuan;
		in >> x.diem;
		Add(a, x);
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
		<< ':' << setw(10) << "ma HV" << ':' << setw(10) << "ho" << setw(10) << "tenlot" << setw(10) << "ten" << ':'
		<< setw(10) << "nam sinh" << ':' << setw(15) << "que quan" << ':' << setw(5) << "diemTB" << ':';
	XuatDongKe('=');

}
void XuatMotHV(HocVien hv) {
	cout << setiosflags(ios::left)
		<< ':' << setw(10) << hv.maHV << ':' << setw(10) << hv.Ho << setw(10) << hv.tLot << setw(10) << hv.ten << ':'
		<< setw(10) << hv.namSinh << ':' << setw(15) << hv.queQuan << ':' << setw(5) << hv.diem << ':';
}
void XuatBangDiem(LIST ds) {
	XuatTieuDe();
	int i = 0;
	for (Node* k = ds.pHead; k != NULL;k=k->pNext) {
		XuatMotHV(k->data);
		cout << endl;
		i++;
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
	XuatDongKe('=');
}
