#pragma once
struct ChamCong
{
	int nghiKhongPhep;
	int nghiCoPhep;
	int soNgayLamThem;
};
struct Data
{
	char maNV[8];
	char hoTen[16];
	char diaChi[16];
	char trinhDoVanHoa;
	int LuongCanBan;
	ChamCong chamcong;
	double luongThucNhan;
};
struct Node
{
	Data data;
	Node* pNext;
};
struct List {
	Node* pHead;
	Node* ptail;
	void KhoiTao() {
		this->pHead = this->ptail = NULL;
	}

	Node* Tao(Data x) {
		Node* newNode = new Node;
		newNode->data = x;
		newNode->pNext = NULL;
		return newNode;
	}
	void Add(Data x) {
		Node* newNode = Tao(x);
		if (newNode == NULL) {
			cout << "\nkhong co du lieu";
		}
		if (this->pHead == NULL) {
			this->pHead = newNode;
			this->ptail = this->pHead;
		}
		else {
			this->ptail->pNext = newNode;
			this->ptail = newNode;
		}

	}

};

int TaoDanhSach(List& l) {
	l.KhoiTao();
	Data x;
	ifstream in("llnv.txt");
	ifstream in2("chamcong.txt");
	if (!in||!in2)
		return 0;
	while (!in.eof()&&!in2.eof()) {
		in >> x.maNV;
		in >> x.hoTen;
		in >> x.diaChi;
		in >> x.trinhDoVanHoa;
		in >> x.LuongCanBan;		
		in2 >> x.maNV;
		in2 >> x.chamcong.nghiCoPhep;
		in2 >> x.chamcong.nghiKhongPhep;
		in2 >> x.chamcong.soNgayLamThem;
		l.Add(x);
	}
	in.close();
	in2.close();
	return 1;
}
void XuatDongKe(char x) {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 69; i++) {
		cout << x;
	}
	cout << ':';
	cout << endl;
}
void XuatTieuDeNV() {
	XuatDongKe('=');
	cout << setiosflags(ios::left) << ':' << setw(10) << "ma NV" << ':' << setw(20) << "ho ten" << ':'
		<< setw(10) << "dia chi" << ':' << setw(10) << "TDVH" << ':' << setw(10) << "Luong CB" << ':';
	XuatDongKe('=');
}
void XuatMotNV(Data dt) {
	cout << setiosflags(ios::left) << ':' << setw(10) << dt.maNV << ':' << setw(20) << dt.hoTen << ':'
		<< setw(10) << dt.diaChi << ':' << setw(10) << dt.trinhDoVanHoa << ':' << setw(10) << dt.LuongCanBan << ':';
}
void XuatTieuDeCL() {
	XuatDongKe('=');
	cout << setiosflags(ios::left) << ':' << setw(10) << "ma NV" << ':' << setw(20) << "nghi co phep" << ':'
		<< setw(10) << "nghi 0 phep" << ':' << setw(10) << "ngay lam them" << ':';
	XuatDongKe('=');
}
void XuatMotCL(Data dt) {
	cout << setiosflags(ios::left) << ':' << setw(10) << dt.maNV << ':' << setw(20) << dt.chamcong.nghiCoPhep << ':'
		<< setw(10) << dt.chamcong.nghiKhongPhep << ':' << setw(10) << dt.chamcong.soNgayLamThem << ':';
}
void XuatDSNV(List l) {
	XuatTieuDeNV();
	for (Node* k = l.pHead; k != NULL; k = k->pNext) {
		XuatMotNV(k->data);
		cout << endl;
	}
	XuatDongKe('=');
}
void XuatDSCL(List l) {
	XuatTieuDeCL();
	for (Node* k = l.pHead; k != NULL; k = k->pNext) {
		XuatMotCL(k->data);
		cout << endl;
	}
	XuatDongKe('=');
}
double TinhPhuTroi(Data& nv) {
	double phuTroi = 0;

	if (nv.trinhDoVanHoa == '5') {
		phuTroi = +(10.0 / 100) * nv.LuongCanBan;
	}
	if (nv.trinhDoVanHoa == '6') {
		phuTroi = +(20.0 / 100) * nv.LuongCanBan;
	}
	if (nv.chamcong.soNgayLamThem > 0) {

		for (int i = 0; i < nv.chamcong.soNgayLamThem; i++) {
			phuTroi = +(4.0 / 100) * nv.LuongCanBan / 24;
		}
	}
	if (nv.chamcong.nghiKhongPhep > 0) {

		for (int i = 0; i < nv.chamcong.nghiKhongPhep; i++) {
			phuTroi = -(4.0 / 100) * nv.LuongCanBan / 24;
		}
	}
	if (nv.chamcong.nghiCoPhep >= 15) {
		phuTroi = -(10.0 / 100) * nv.LuongCanBan;
	}
	return phuTroi;
}
void LuongThucNhan(List l) {
	for (Node* k = l.pHead; k != NULL; k = k->pNext) {
		k->data.luongThucNhan = k->data.LuongCanBan + TinhPhuTroi(k->data);
	}
}
void XuatBangLuong(List l) {
	LuongThucNhan(l);
	cout << endl;
	cout << "\n============================================\n";
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(20)
		<< "ma nhan vien"
		<< ':'
		<< setw(20)
		<< "luong thuc nhan"
		<< ':';
	cout << "\n============================================\n";
	cout << endl;

	for (Node* k = l.pHead; k != NULL; k = k->pNext) {
		cout << setiosflags(ios::left)
			<< ':'
			<< setw(20)
			<< k->data.maNV
			<< ':'
			<< setw(20)
			<< k->data.luongThucNhan
			<< ':';
		cout << endl;
	}
	
	cout << "\n============================================\n";

}
