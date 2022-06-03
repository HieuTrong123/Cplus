#pragma once
struct Data
{
	char maHV[10];
	char ho[10];
	char tLot[10];
	char ten[10];
	int namSinh;
	char queQuan[20];
	double diem;
};
struct NODE
{
	Data data;
	NODE* pLeft;
	NODE* pRight;
};
void CreatNODE(NODE*& root) {
	root = NULL;
}
NODE* GetNode(Data x) {
	NODE* p = new NODE;
	p->data = x;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}
void Them(NODE*& root, Data x) {
	if (root == NULL) {
		root = GetNode(x);
	}
	else {
		if (_strcmpi(x.maHV , root->data.maHV)<0)
			Them(root->pLeft,x);
		else if(_strcmpi(x.maHV, root->data.maHV) > 0)
			Them(root->pRight, x);
	}
}
int NhapTuFile(NODE*& root) {
	CreatNODE(root);
	ifstream in("bd.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		Data x;
		in >> x.maHV;
		in >> x.ho;
		in >> x.tLot;
		in >> x.ten;
		in >> x.namSinh;
		in >> x.queQuan;
		in >> x.diem;
		Them(root, x);
	}
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
void XuatMotHV(Data hv) {
	cout << setiosflags(ios::left)
		<< ':' << setw(10) << hv.maHV << ':' << setw(10) << hv.ho << setw(10) << hv.tLot << setw(10) << hv.ten << ':'
		<< setw(10) << hv.namSinh << ':' << setw(15) << hv.queQuan << ':' << setw(5) << hv.diem << ':';
}
void DuyetCay(NODE* p) {
	if (p != NULL) {
		XuatMotHV(p->data);
		cout << endl;
		DuyetCay(p->pLeft);
		DuyetCay(p->pRight);
	}
}
void XuatBangDiem(NODE* p) {
	XuatTieuDe();
	DuyetCay(p);
	XuatDongKe('=');
}
